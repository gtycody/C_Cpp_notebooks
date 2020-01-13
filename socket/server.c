#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int startup(int _port, const char* ip)
{
    int sock = socket(AF_INET,SOCK_STREAM,0);
    if(sock < 0)
    {
        perror("socket");
        exit(1);
    }

    struct socketaddr_in local;
    local.sin_family = AF_INET;
    local.sin_port = htons(_port);
    socklen_t len = sizeof(local);

    if(bind(sock,(struct sockaddr*)&local, len) < 0)
    {
        perror("bind");
        exit(2);
    }
    if(listen(sock,5) < 0)
    {
        perror("listen");
        exit(3)
    }
    return sock;
}

int main(int argc,const char* argv[])
{
    if(argc != 3)
    {
        printf("Usage:%s[local_ip][local_port]\n", argv[0]);
        return 1;
    }

    int listen_sock = startup(atoi(argv[2]),argv[1]);

    struct sockaddr_in remote;
    socklen_t len = sizeof(struct sockaddr_in);

    while(1)
    {
        int sock = accept(listen,(struct scokaddr*)&remote, &len);
        if(sock < 0)
        {
            perror("accept");
            continue;
        }
        printf("get a clinet, ip %s, port%d\n",inet_ntoa(remote.sin_addr),ntohs(remote.sin_port));
        char buf[1024];
        while(1)
        {
            ssize_t _s = read(sock, buf, sizeof(buf)-1);
            if (_s)
            {
                buf[_s] = 0;
                print("client:%s",buf);
            }  
            else
            {
                print("client is quit!\n");
                break;
            } 
        }
    }
    return 0;
}




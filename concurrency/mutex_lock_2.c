#include <stdio.h>
#include <pthread.h>

static pthread_mutex_t test_lock;
pthread_t test_thread;

void* test()
{
    pthread_mutex_lock(&test_lock);
    printf("thread test\n");
    pthread_mutex_unlock(&test_lock);
}

int main()
{
    pthread_mutex_init(&test_lock,NULL);
    pthread_mutex_lock(&test_lock);
    
    printf("Main locked\n");

    pthread_create(&test_thread,NULL,test,NULL);
    sleep(1);
    printf("Main unlocked\n");
    pthread_mutex_unlock(&test_lock);

    sleep(1);

    pthread_join(test_thread,NULL);
    pthread_mutex_destroy(&test_lock);
    return 0;
}


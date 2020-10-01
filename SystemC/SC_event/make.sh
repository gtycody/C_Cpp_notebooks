export LD_LIBRARY_PATH=/usr/local/systemc-2.2/lib-linux64
g++ -I /usr/local/systemc-2.2/include/ -L /usr/local/systemc-2.2/lib-linux64/ -o out $1 -lsystemc
./out

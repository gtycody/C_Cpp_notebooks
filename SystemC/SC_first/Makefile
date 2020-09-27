cc = g++
ARGS = -I /usr/local/systemc-2.2/include/ -L /usr/local/systemc-2.2/lib-linux64/

out:sample.cpp
	$(cc) $(ARGS)-o out sample.cpp -lsystemc

clean:
	rm -f *.o
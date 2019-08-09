objects = test.o dynamiccuckoofilter.o cuckoofilter.o hashfunction.o 

CC = /usr/bin/g++

CCFLAGS = -std=c++0x -Wall

LDFLAGS = -lssl -lcrypto
test: $(objects)
	$(CC) $(CCFLAGS) -o test $(objects) $(LDFLAGS)

hashfunction.o: src/hashfunction.cpp src/hashfunction.h
	$(CC) $(CCFLAGS) -c src/hashfunction.cpp $(LDFLAGS)

cuckoofilter.o: src/cuckoofilter.cpp src/cuckoofilter.h
	$(CC) $(CCFLAGS) -c src/cuckoofilter.cpp $(LDFLAGS)

dynamiccuckoofilter.o: src/dynamiccuckoofilter.cpp src/cuckoofilter.h
	$(CC) $(CCFLAGS) -c src/dynamiccuckoofilter.cpp $(LDFLAGS)

test.o: src/test.cpp src/dynamiccuckoofilter.h
	$(CC) $(CCFLAGS) -c src/test.cpp $(LDFLAGS)


.PHONY : clean
clean :
	rm *.o
	rm test

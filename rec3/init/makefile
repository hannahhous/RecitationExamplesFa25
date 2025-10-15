driverinit: init.o driverinit.o
	g++ -o driverinit init.o driverinit.o

init.o: init.cpp init.h
	g++ -c init.cpp

driverinit.o: driverinit.cpp init.h
	g++ -c driverinit.cpp

clean:
	rm -f *.o init
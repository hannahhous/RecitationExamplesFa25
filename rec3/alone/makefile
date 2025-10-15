driveralone: fracalone.o driveralone.o
	g++ -o driveralone fracalone.o driveralone.o

fracalone.o: fracalone.cpp fracalone.h
	g++ -c fracalone.cpp

driveralone.o: driveralone.cpp fracalone.h
	g++ -c driveralone.cpp

clean:
	rm -f *.o driveralone
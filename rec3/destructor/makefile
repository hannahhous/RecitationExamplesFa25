driver: destructor.o driver.o
	g++ -o driver driver.o destructor.o

destructor.o: destructor.cpp destructor.h
	g++ -c destructor.cpp

driver.o: driver.cpp destructor.h
	g++ -c driver.cpp

clean:
	rm -f *.o driver
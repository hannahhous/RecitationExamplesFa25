timer: driver.o timer.o
	g++ -o timer driver.o timer.o

driver.o: driver.cpp timer.h
	g++ -o driver.o -c driver.cpp

timer.o: timer.cpp timer.h
	g++ -o timer.o -c timer.cpp

clean:
	rm -f *.o timer
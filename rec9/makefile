main: main.o shape.o
	g++ -o shape main.o shape.o
main.o: main.cpp shape.h
	g++ -c main.cpp
shape.o: shape.cpp shape.h
	g++ -c shape.cpp
clean:
	rm *.o shape

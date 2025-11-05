main: array.o main.o
	g++ -o main array.o main.o

array.o: array.cpp array.h
	g++ -c array.cpp

main.o: main.cpp array.h
	g++ -c main.cpp

clean:
	rm -f *.o main
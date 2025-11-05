main: pfarrayd.o main.o
	g++ -o main pfarrayd.o main.o

pfarrayd.o: pfarrayd.cpp pfarrayd.h
	g++ -c pfarrayd.cpp

main.o: main.cpp pfarrayd.h
	g++ -c main.cpp

clean:
	rm -f *.o main
drivermember: fracmember.o drivermember.o
	g++ -o drivermember fracmember.o drivermember.o

fracmember.o: fracmember.cpp fracmember.h
	g++ -c fracmember.cpp

drivermember.o: drivermember.cpp fracmember.h
	g++ -c drivermember.cpp

clean:
	rm -f *.o drivermember
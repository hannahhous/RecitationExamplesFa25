driverfriend: fracfriend.o driverfriend.o
	g++ -o driverfriend fracfriend.o driverfriend.o

fracfriend.o: fracfriend.cpp fracfriend.h
	g++ -c fracfriend.cpp

driverfriend.o: driverfriend.cpp fracfriend.h
	g++ -c driverfriend.cpp

clean:
	rm -f *.o driverfriend
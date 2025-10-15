all: friend member 
friend: clockfriend.o driverfriend.o
	g++ -o friend clockfriend.o driverfriend.o

clockfriend.o: clockfriend.cpp clockfriend.h
	g++ -c clockfriend.cpp

driverfriend.o: driverfriend.cpp clockfriend.h
	g++ -c driverfriend.cpp

member: clockmember.o drivermember.o
	g++ -o member clockmember.o drivermember.o

clockmember.o: clockmember.cpp clockfriend.h
	g++ -c clockmember.cpp

drivermember.o: drivermember.cpp clockmember.h
	g++ -c drivermember.cpp

clean:
	rm -f *.o friend member
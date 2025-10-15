all: friend member 
friend: moneyfriend.o frienddriver.o
	g++ -o friend moneyfriend.o frienddriver.o

moneyfriend.o: moneyfriend.cpp moneyfriend.h
	g++ -c moneyfriend.cpp

frienddriver.o: frienddriver.cpp moneyfriend.h
	g++ -c frienddriver.cpp

member: moneymember.o memberdriver.o
	g++ -o member moneymember.o memberdriver.o

moneymember.o: moneymember.cpp moneyfriend.h
	g++ -c moneymember.cpp

memberdriver.o: memberdriver.cpp moneymember.h
	g++ -c memberdriver.cpp

clean:
	rm -f *.o friend member
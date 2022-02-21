all: name.o date.o

date.o: date.cpp date.hpp
	g++ -std=c++17 -Wall -c date.cpp

name.o: name.cpp name.hpp
	g++ -std=c++17 -Wall -c name.cpp

clean:
	rm -rf *.o *.exe

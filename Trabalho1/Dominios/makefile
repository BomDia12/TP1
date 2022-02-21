all: name.o codigo.o

codigo.o: codigo.cpp codigo.hpp
	g++ -std=c++17 -Wall -c codigo.cpp

name.o: name.cpp name.hpp
	g++ -std=c++17 -Wall -c name.cpp

clean:
	rm -rf *.o *.exe

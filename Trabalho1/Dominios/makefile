all: name.o city.o

city.o: city.cpp city.hpp
	g++ -std=c++17 -Wall -c city.cpp

name.o: name.cpp name.hpp
	g++ -std=c++17 -Wall -c name.cpp

clean:
	rm -rf *.o *.exe

all: name.o codigo.o city.o date.o nota.o duration.o description.o

codigo.o: codigo.cpp codigo.hpp
	g++ -std=c++17 -Wall -c codigo.cpp

city.o: city.cpp city.hpp
	g++ -std=c++17 -Wall -c city.cpp

date.o: date.cpp date.hpp
	g++ -std=c++17 -Wall -c date.cpp

name.o: name.cpp name.hpp
	g++ -std=c++17 -Wall -c name.cpp

duration.o: duration.cpp duration.hpp
	g++ -std=c++17 -Wall -c duration.cpp

duration.o: description.cpp description.hpp
	g++ -std=c++17 -Wall -c description.cpp

clean:
	rm -rf *.o *.exe


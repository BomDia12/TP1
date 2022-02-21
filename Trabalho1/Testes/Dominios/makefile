all: name_test city_test

city_test: city_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/city.o city_test.cpp -o city_test.exe

name_test: name_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/name.o name_test.cpp -o name_test.exe

clean:
	rm -rf *.o *.exe

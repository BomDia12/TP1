all: name_test codigo_test city_test date_test time_test

codigo_test: codigo_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/codigo.o codigo_test.cpp -o codigo_test.exe

name_test: name_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/name.o name_test.cpp -o name_test.exe

city_test: city_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/city.o city_test.cpp -o city_test.exe
 
date_test: date_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/date.o date_test.cpp -o date_test.exe

time_test: time_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/time.o time_test.cpp -o time_test.exe

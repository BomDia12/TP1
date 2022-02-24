all: name_test codigo_test city_test date_test time_test duration_test nota_test description_test language_test #address_test


codigo_test: codigo_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/codigo.o codigo_test.cpp -o codigo_test.exe

name_test: name_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/name.o name_test.cpp

city_test: city_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/city.o city_test.cpp -o city_test.exe

date_test: date_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/date.o date_test.cpp -o date_test.exe

time_test: time_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/time.o time_test.cpp

duration_test: duration_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/duration.o duration_test.cpp -o duration_test.exe

nota_test: nota_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/nota.o nota_test.cpp

description_test: description_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/description.o description_test.cpp -o description_test.exe

#address_test: address_test.cpp
#	g++ -std=c++17 -Wall ../../Dominios/address.o address_test.cpp -o address_test.exe

language_test: language_test.cpp
	g++ -std=c++17 -Wall ../../Dominios/language.o language_test.cpp -o language_test.exe

clean:
	rm -rf *.o *.exe

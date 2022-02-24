all: name_test.o codigo_test.o city_test.o date_test.o time_test.o  \
     duration_test.o nota_test.o description_test.o language_test.o \
	 password_test.o address_test.o


codigo_test.o: codigo_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/codigo.o codigo_test.cpp

name_test.o: name_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/name.o name_test.cpp

city_test.o: city_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/city.o city_test.cpp

date_test.o: date_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/date.o date_test.cpp

time_test.o: time_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/time.o time_test.cpp

duration_test.o: duration_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/duration.o duration_test.cpp

nota_test.o: nota_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/nota.o nota_test.cpp

description_test.o: description_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/description.o description_test.cpp

address_test.o: address_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/address.o address_test.cpp

language_test.o: language_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/language.o language_test.cpp

password_test.o: password_test.cpp
	g++ -std=c++17 -Wall -c ../../Dominios/password.o password_test.cpp

clean:
	rm -rf *.o *.exe

all: # domain_tests.exe entity_tests.exe
	+$(MAKE) -C Dominios
	+$(MAKE) -C Entidades
	+$(MAKE) -C Testes

domain_tests.exe: domain_tests.cpp domain_tests.hpp
	g++ -std=c++17 -Wall  ./Testes/Dominios/address_test.o	   	\
						  ./Dominios/address.o				   	\
						  ./Testes/Dominios/password_test.o	   	\
						  ./Dominios/password.o				   	\
						  ./Testes/Dominios/time_test.o        	\
	 					  ./Dominios/time.o			           	\
						  ./Testes/Dominios/nota_test.o        	\
						  ./Dominios/nota.o				       	\
						  ./Testes/Dominios/name_test.o        	\
						  ./Dominios/name.o				       	\
						  ./Testes/Dominios/date_test.o			\
						  ./Dominios/date.o						\
						  ./Testes/Dominios/city_test.o			\
						  ./Dominios/city.o						\
						  ./Testes/Dominios/codigo_test.o		\
						  ./Dominios/codigo.o					\
						  ./Testes/Dominios/language_test.o    	\
						  ./Dominios/language.o				   	\
						  ./Testes/Dominios/duration_test.o   	\
						  ./Dominios/duration.o				   	\
						  ./Testes/Dominios/description_test.o 	\
						  ./Dominios/description.o			   	\
						   domain_tests.cpp -o domain_tests.exe

entity_tests.exe: entity_tests.cpp entity_tests.hpp
	g++ -std=c++17 -Wall ./Testes/Entidades/review_test.o	\
						 ./Dominios/nota.o					\
						 ./Dominios/city.o					\
						 ./Dominios/time.o					\
						 ./Dominios/title.o					\
						 ./Dominios/codigo.o				\
						 ./Entidades/review.o				\
						 ./Dominios/address.o				\
						 ./Dominios/duration.o				\
						 ./Entidades/excurcao.o				\
						 ./Dominios/description.o			\
						 ./Testes/Entidades/excurcao_test.o \
						 entity_tests.cpp -o entity_tests.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o
	rm -rf *.exe
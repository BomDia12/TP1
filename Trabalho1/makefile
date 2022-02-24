all:
	+$(MAKE) -C Dominios
	+$(MAKE) -C Testes
	g++ -std=c++17 -Wall  ./Testes/Dominios/time_test.o     \
	 					  ./Dominios/time.o			        \
						  ./Testes/Dominios/nota_test.o     \
						  ./Dominios/nota.o				    \
						  ./Testes/Dominios/name_test.o     \
						  ./Dominios/name.o				    \
						  ./Testes/Dominios/language_test.o \
						  ./Dominios/language.o				\
						   main.cpp -o main.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o
	rm -rf *.exe
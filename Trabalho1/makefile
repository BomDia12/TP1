all:
	+$(MAKE) -C Dominios
	+$(MAKE) -C Testes
	g++ -std=c++17 -Wall  ./Testes/Dominios/time_test.o \
	 					  ./Dominios/time.o			    \
						  ./Testes/Dominios/nota_test.o \
						  ./Dominios/nota.o				\
						   main.cpp -o main.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o
	rm -rf *.exe
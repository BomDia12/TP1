all: # domain_tests.exe entity_tests.exe
	+$(MAKE) -C Dominios
	+$(MAKE) -C Entidades
	+$(MAKE) -C Testes
	+$(MAKE) -C Interfaces
	+$(MAKE) -C Controllers
	g++ -std=c++17 -Wall ./Testes/Dominios/*.o  \
	                     ./Dominios/*.o         \
	                     ./Entidades/*.o        \
	                     ./Testes/Entidades/*.o \
	                     main.cpp -o main.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o
	rm -rf *.exe
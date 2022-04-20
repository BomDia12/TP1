all: # domain_tests.exe entity_tests.exe
	+$(MAKE) -C Dominios
	+$(MAKE) -C Entidades
	+$(MAKE) -C Testes
	+$(MAKE) -C Controllers
	+$(MAKE) -C stubs
	g++ -std=c++17 -Wall ./*/*/*/*.o ./*/*/*.o ./*/*.o main.cpp -o main.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o
	rm -rf *.exe
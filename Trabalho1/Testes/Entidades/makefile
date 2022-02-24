all: review_test.o

review_test.o: review_test.cpp review_test.hpp
	g++ -std=c++17 -Wall -c ../../Dominios/nota.o        \
							../../Dominios/codigo.o      \
							../../Entidades/review.o     \
							../../Dominios/description.o \
							review_test.cpp

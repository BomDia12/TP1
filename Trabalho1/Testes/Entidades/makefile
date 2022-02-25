all: review_test.o excurcao_test.o

review_test.o: review_test.cpp review_test.hpp
	g++ -std=c++17 -Wall -c ../../Dominios/nota.o        \
							../../Dominios/codigo.o      \
							../../Entidades/review.o     \
							../../Dominios/description.o \
							review_test.cpp

excurcao_test.o: excurcao_test.cpp excurcao_test.hpp
	g++ -std=c++17 -Wall -c ../../Dominios/time.o			\
							../../Dominios/nota.o			\
							../../Dominios/city.o			\
							../../Dominios/title.o			\
							../../Dominios/codigo.o			\
							../../Dominios/address.o		\
							../../Dominios/duration.o		\
							../../Dominios/duration.o		\
							../../Dominios/description.o	\
							../../Entidades/excurcao.o		\
							excurcao_test.cpp

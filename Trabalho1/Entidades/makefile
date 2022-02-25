all: review.o excurcao.o session.o

review.o: review.cpp review.hpp
	g++ -std=c++17 -Wall -c ../Dominios/nota.o        \
							../Dominios/codigo.o      \
							../Dominios/description.o \
							review.cpp

excurcao.o: excurcao.cpp excurcao.hpp
	g++ -std=c++17 -Wall -c ../Dominios/time.o			\
							../Dominios/nota.o			\
							../Dominios/city.o			\
							../Dominios/title.o			\
							../Dominios/codigo.o		\
							../Dominios/address.o		\
							../Dominios/duration.o		\
							../Dominios/description.o	\
							excurcao.cpp

session.o: session.cpp session.hpp
	g++ -std=c++17 -Wall -c ../Dominios/time.o			\
							../Dominios/date.o			\
							../Dominios/language.o		\
							../Dominios/codigo.o		\
							session.cpp

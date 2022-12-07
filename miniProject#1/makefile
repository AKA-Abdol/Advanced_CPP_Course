.PHONEY : all, clean

CC := g++ -std=c++11 -c
C := g++ -std=c++11

all : final.out

final.out : main.o circle.o rectangle.o triangle.o
	${C} main.o circle.o rectangle.o triangle.o -o final.out 

main.o : main.cpp ./circle/index.hpp ./rectangle/index.hpp ./shape/index.hpp 
	${CC} main.cpp -o main.o 

circle.o : ./circle/index.cpp ./circle/index.hpp ./common/index.hpp 
	${CC} ./circle/index.cpp -o circle.o

rectangle.o : ./rectangle/index.cpp ./rectangle/index.hpp 
	${CC} ./rectangle/index.cpp -o rectangle.o 

triangle.o : ./triangle/index.cpp ./triangle/index.hpp 
	${CC} ./triangle/index.cpp -o triangle.o

clean : 
	rm *.o 
	rm *.out
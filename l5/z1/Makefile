CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj obj/tablica1dtest.o  obj/Stoper.o  obj/AsocTest.o  src/main.cpp 
	g++ $(CCFLAGS) src/main.cpp  obj/tablica1dtest.o obj/Stoper.o obj/AsocTest.o   -o zad1

obj/tablica1dtest.o: src/tablica1dtest.cpp inc/tablica1dtest.hh 
	g++ $(CCFLAGS) -c src/tablica1dtest.cpp -o obj/tablica1dtest.o


obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh 
	g++ $(CCFLAGS) -c src/Stoper.cpp -o obj/Stoper.o


obj/AsocTest.o: src/AsocTest.cpp inc/AsocTest.hh inc/TablicaAsoc.hh inc/ITablicaAsoc.hh src/TablicaAsoc.cpp
	g++ $(CCFLAGS) -c src/AsocTest.cpp  -o obj/AsocTest.o



obj:
	mkdir obj
clean: 
	rm -f obj/*.o
	rm zad1

CCFLAGS= -Wall -pedantic -std=c++11

zad1: obj/tablica1d.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp  obj/tablica1d.o -o zad1

obj/tablica1d.o: src/tablica1d.cpp inc/tablica1d.hh 
	g++ $(CCFLAGS) -c src/tablica1d.cpp -o obj/tablica1d.o
clean: 
	rm -f *.o

CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj/tablica1d.o obj/tablica1dtest.o src/main.cpp 
	g++ $(CCFLAGS) src/main.cpp  obj/tablica1dtest.o obj/tablica1d.o -o zad1

obj/tablica1d.o: src/tablica1d.cpp inc/tablica1d.hh 
	g++ $(CCFLAGS) -c src/tablica1d.cpp -o obj/tablica1d.o

obj/tablica1dtest.o: src/tablica1dtest.cpp inc/tablica1dtest.hh 
	g++ $(CCFLAGS) -c src/tablica1dtest.cpp -o obj/tablica1dtest.o



clean: 
	rm -f obj/*.o
	rm zad1

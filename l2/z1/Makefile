CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:    obj/tablica1dtest.o obj/Stoper.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp  obj/tablica1dtest.o obj/Stoper.o  -o zad1

obj/tablica1dtest.o: src/tablica1dtest.cpp inc/tablica1dtest.hh inc/IRunnable.hh
	g++ $(CCFLAGS) -c src/tablica1dtest.cpp -o obj/tablica1dtest.o


obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh 
	g++ $(CCFLAGS) -c src/Stoper.cpp -o obj/Stoper.o


clean: 
	rm -f obj/*.o
	rm zad1

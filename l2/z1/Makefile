CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj/tablica1d.o obj/tablica1dtest.o obj/IRunnable.o obj/IStoper.o src/main.cpp
	g++ $(CCFLAGS) src/main.cpp obj/IRunnable.o obj/tablica1dtest.o obj/IStoper.o obj/tablica1d.o -o zad1

obj/tablica1d.o: src/tablica1d.cpp inc/tablica1d.hh 
	g++ $(CCFLAGS) -c src/tablica1d.cpp -o obj/tablica1d.o

obj/tablica1dtest.o: src/tablica1dtest.cpp inc/tablica1dtest.hh 
	g++ $(CCFLAGS) -c src/tablica1dtest.cpp -o obj/tablica1dtest.o

obj/IRunnable.o: src/IRunnable.cpp inc/IRunnable.hh 
	g++ $(CCFLAGS) -c src/IRunnable.cpp -o obj/IRunnable.o

obj/IStoper.o: src/IStoper.cpp inc/IStoper.hh 
	g++ $(CCFLAGS) -c src/IStoper.cpp -o obj/IStoper.o


clean: 
	rm -f obj/*.o
	rm zad1

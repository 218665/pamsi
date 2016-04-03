CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj/tablica1dtest.o  obj/Stoper.o  obj/ListTest.o obj/StackTest.o obj/QueueTest.o src/main.cpp 
	g++ $(CCFLAGS) src/main.cpp  obj/tablica1dtest.o obj/Stoper.o  obj/StackTest.o obj/QueueTest.o obj/ListTest.o -o zad1

obj/tablica1dtest.o: src/tablica1dtest.cpp inc/tablica1dtest.hh 
	g++ $(CCFLAGS) -c src/tablica1dtest.cpp -o obj/tablica1dtest.o


obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh 
	g++ $(CCFLAGS) -c src/Stoper.cpp -o obj/Stoper.o

obj/ListTest.o: src/ListTest.cpp inc/ListTest.hh 
	g++ $(CCFLAGS) -c src/ListTest.cpp -o obj/ListTest.o

obj/StackTest.o: src/StackTest.cpp inc/StackTest.hh 
	g++ $(CCFLAGS) -c src/StackTest.cpp -o obj/StackTest.o

obj/QueueTest.o: src/QueueTest.cpp inc/QueueTest.hh 
	g++ $(CCFLAGS) -c src/QueueTest.cpp -o obj/QueueTest.o

clean: 
	rm -f obj/*.o
	rm zad1

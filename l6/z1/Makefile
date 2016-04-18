CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj  obj/Stoper.o  obj/Drzewo.o  src/main.cpp 
	g++ $(CCFLAGS) src/main.cpp  obj/Drzewo.o obj/Stoper.o -o zad1

obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh 
	g++ $(CCFLAGS) -c src/Stoper.cpp -o obj/Stoper.o

obj/Drzewo.o: src/Drzewo.cpp inc/Drzewo.hh 
	g++ $(CCFLAGS) -c src/Drzewo.cpp -o obj/Drzewo.o


obj:
	mkdir obj
clean: 
	rm -f obj/*.o
	rm zad1

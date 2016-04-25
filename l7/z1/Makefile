CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj obj/Graph.o  obj/Stoper.o  obj/List.o  src/main.cpp inc/RBleaf.hh
	g++ $(CCFLAGS) src/main.cpp  obj/List.o obj/Drzewo.o obj/Stoper.o -o zad1

obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh
	g++ $(CCFLAGS) -c src/Stoper.cpp -o obj/Stoper.o

obj/List.o: src/List.cpp inc/List.hh
	g++ $(CCFLAGS) -c src/List.cpp -o obj/List.o

obj/Graph.o: src/Graph.cpp inc/Graph.hh
	g++ $(CCFLAGS) -c src/Graph.cpp -o obj/Graph.o

obj:
	mkdir obj
clean:
	rm -f obj/*.o
	rm zad1

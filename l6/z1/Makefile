CCFLAGS= -Wall -pedantic -std=c++11 -g

start: zad1
	./zad1

zad1:   obj obj/Drzewo.o  obj/Stoper.o  obj/DrzewoTest.o  src/main.cpp inc/RBleaf.hh
	g++ $(CCFLAGS) src/main.cpp  obj/DrzewoTest.o obj/Drzewo.o obj/Stoper.o -o zad1

obj/Stoper.o: src/Stoper.cpp inc/Stoper.hh
	g++ $(CCFLAGS) -c src/Stoper.cpp -o obj/Stoper.o

obj/DrzewoTest.o:  src/DrzewoTest.cpp inc/DrzewoTest.hh
	g++ $(CCFLAGS) -c src/DrzewoTest.cpp -o obj/DrzewoTest.o

obj/Drzewo.o: src/Drzewo.cpp inc/Drzewo.hh
	g++ $(CCFLAGS) -c src/Drzewo.cpp -o obj/Drzewo.o

obj:
	mkdir obj
clean:
	rm -f obj/*.o
	rm zad1

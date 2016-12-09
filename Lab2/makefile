2lab: main.o list.o rectangle.o item.o
	g++ -std=c++11 -o 2lab main.o list.o rectangle.o item.o
main.o: main.cpp rectangle.h list.h
	g++ -std=c++11 -c main.cpp
list.o: list.cpp rectangle.h list.h item.h
	g++ -std=c++11 -c list.cpp
rectangle.o: rectangle.cpp rectangle.h
	g++ -std=c++11 -c rectangle.cpp
item.o: item.cpp item.h
	g++ -std=c++11 -c item.cpp
clear:
	rm -rf *.o 2lab
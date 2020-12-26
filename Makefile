###########################################################
# Makefile Assignment 1
# Brian Arlantico
# cssc3010
# CS530 Fall 2020
# Assignment 1, Hex and Binary Dump
# Makefile
###########################################################

xbd: main.o fio.o hexbinconv.o
	$(CXX) main.o fio.o hexbinconv.o -o xbd
	rm -f *.o

main.o: main.cpp functions.h
	$(CXX) -c main.cpp

fio.o: fio.cpp functions.h
	$(CXX) -c fio.cpp

hexbinconv.o: hexbinconv.cpp functions.h
	$(CXX) -c hexbinconv.cpp

clean:
	rm -f *.o xbd
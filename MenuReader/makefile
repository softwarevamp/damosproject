CC = g++
CFLAGS = -Wall -O3 -g
LDFLAGS = -lm

server: linkedList.o MenuItem.o functions.o main.o
	${CC} ${CFLAGS} linkedList.o MenuItem.o functions.o main.o ${LDFLAGS} -o menu

linkedList.o: linkedList.h
	${CC} ${CFLAGS} -c linkedList.cpp

MenuItem.o: MenuItem.h
	${CC} ${CFLAGS} -c MenuItem.cpp

functions.o: header.h
	${CC} ${CFLAGS} -c functions.cpp

main.o: main.cpp
	${CC} ${CFLAGS} -c main.cpp

clean:
	rm -f *.o menu

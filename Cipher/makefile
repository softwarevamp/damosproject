CC = g++
CFLAGS = -Wall -g -O3
LDFLAGS = -lm

loe: linkedList.o command.o terminal.o file.o cipher.o encryption.o decryption.o xor.o tea.o xtea.o xxtea.o hash.o djb2.o sdbm.o adler32.o lookup3.o functions.o main.o
	${CC} ${CFLAGS} linkedList.o command.o terminal.o file.o cipher.o encryption.o decryption.o xor.o tea.o xtea.o xxtea.o hash.o djb2.o sdbm.o adler32.o lookup3.o functions.o main.o ${LDFLAGS} -o loe

main.o: header.h 
	${CC} ${CFLAGS} -c main.cpp

linkedList.o: linkedList.h
	${CC} ${CFLAGS} -c linkedList.cpp

command.o: command.h
	$(CC) ${CFLAGS} -c command.cpp

terminal.o: header.h
	${CC} ${CFLAGS} -c terminal.cpp

file.o: header.h linkedList.cpp
	${CC} ${CFLAGS} -c file.cpp

cipher.o: cipher.h
	${CC} ${CFLAGS} -c cipher.cpp

encryption.o: encryption.h
	${CC} ${CFLAGS} -c encryption.cpp

decryption.o: decryption.h
	${CC} ${CFLAGS} -c decryption.cpp

xor.o: ./CipherFunctions/xor.h
	${CC} ${CFLAGS} -c ./CipherFunctions/xor.cpp

tea.o: ./CipherFunctions/tea.h
	${CC} ${CFLAGS} -c ./CipherFunctions/tea.cpp

xtea.o: ./CipherFunctions/xtea.h
	${CC} ${CFLAGS} -c ./CipherFunctions/xtea.cpp

xxtea.o: ./CipherFunctions/xxtea.h
	${CC} ${CFLAGS} -c ./CipherFunctions/xxtea.cpp

hash.o: hash.h
	${CC} ${CFLAGS} -c hash.cpp

djb2.o: ./HashFunctions/djb2.h
	${CC} ${CFLAGS} -c ./HashFunctions/djb2.cpp

sdbm.o: ./HashFunctions/sdbm.h
	${CC} ${CFLAGS} -c ./HashFunctions/sdbm.cpp

adler32.o: ./HashFunctions/adler32.h
	${CC} ${CFLAGS} -c ./HashFunctions/adler32.cpp

lookup3.o: ./HashFunctions/lookup3.h
	${CC} ${CFLAGS} -c ./HashFunctions/lookup3.cpp

functions.o: header.h terminal.cpp linkedList.cpp
	${CC} ${CFLAGS} -c functions.cpp

clean:
	rm -f *.o loe

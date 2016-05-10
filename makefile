wifiplug: main.o calc.o send.o error.o 
	gcc -o wifiplug main.o calc.o send.o error.o -l wiringPi

main.o: main.c
	gcc -c main.c

calc.o: calc.c
	gcc -c calc.c
    
send.o: send.c
	gcc -c send.c

error.o: error.c
	gcc -c error.c

clean:
	rm -f *.o main calc send error

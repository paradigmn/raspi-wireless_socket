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

 install:
	install --mode=755 wifiplug /usr/bin/

 clean:
	rm -f *.o main calc send error
	rm -f wifiplug

 uninstall:
	rm /usr/bin/wifiplug

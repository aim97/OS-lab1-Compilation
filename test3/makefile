main: main.o helper.o
	gcc main.o helper.o -o main

main.o: main.c
	gcc -c -Wall -O main.c -o main.o 

helper.o: helper.c
	gcc -c -Wall -O helper.c -o helper.o 

clean:
	rm -f main main.o helper.o
	
hzar:
	echo "whatever"
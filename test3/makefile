# target: prerequisite1 prerequisite2 ...
#	command(s)

# target is the target file you want
# prerequisite is a file required to get compile obtain the target
# command(s) those are the step(s) needed to create the target from the prerequisites

main: main.o helper.o
	gcc main.o helper.o -o main

main.o: main.c
	gcc -c -Wall -O main.c -o main.o 

helper.o: helper.c
	gcc -c -Wall -O helper.c -o helper.o 

clean:
	rm -f main main.o helper.o
	
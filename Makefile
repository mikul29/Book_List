
#Author: Matthew Mikulich


# target all means all targets currently defined in this file
all: lab3 lab3.zip

# this target is the .zip file that must be submitted to Carmen
lab3.zip: lab3main.c readtitles.c getfavorites.c savedata.c lab3.h Makefile lab3Readme
	zip lab3.zip lab3main.c readtitles.c getfavorites.c savedata.c lab3.h Makefile lab3Readme

# this target is the executable 
lab3: lab3main.o readtitles.o getfavorites.o savedata.o
	gcc lab3main.o readtitles.o getfavorites.o savedata.o -o lab3

# this target is the dependency for lab3
lab3main.o: lab3main.c lab3.h
	gcc -ansi -pedantic -g -c lab3main.c 

# this target is the dependency for lab3
readtitles.o: readtitles.c lab3.h
	gcc -ansi -pedantic -g -c readtitles.c

# this target is the dependency for lab3
getfavorites.o: getfavorites.c lab3.h
	gcc -ansi -pedantic -g -c getfavorites.c
	
# this target is the dependency for lab3
savedata.o: savedata.c lab3.h
	gcc -ansi -pedantic -g -c savedata.c
	
# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o lab3 lab3.zip

objets =  usecomplexe.o complexe.o
cc = gcc
cflags = -Wall -g
usecomplexe : $(objets)
	$(cc) $(cflags) $(objets) \ -o usecomplexe
usecomplexe.o : usecomplexe.c complexe.h
	$(cc) $(cflags) -c usecomplexe.c
complexe.o : complexe.c complexe.h
	$(cc) $(cflags)  -c complexe.c

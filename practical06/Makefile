CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: prac_6.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c 
	$(CC) -c $(CCFLAGS) $<

prac_6.o: prac_6.c
	$(CC) -c $(CCFLAGS) $<


clean:
	rm *.o

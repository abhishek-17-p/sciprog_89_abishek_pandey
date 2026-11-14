1. Code mm.c is a C compiler which contains pointer functions in a 
allocated array, fill with ones, prints it and free it from memory. 

2. It uses functions malloc and calloc(shown in comment, which return 0) 
in allocate array. Also, fillwithones sets every element to 1. It requires
n, as pointer does not know the length of the array. Along with that, 
printarray prints all elements and freearray gives the memory back. Also, 
scanf is used to ask the user to allocate the size of the array.

3. Code ec.c is a C compiler for taylor series which uses scanf and malloc
alongwith recursive factorial function. 

4. Loop is used to store every term in the array and adds them to get sum.

5. Higher order term get worse because the numbers are too larger to fit
in an int, so factorial overflows and gives a wrong value. 



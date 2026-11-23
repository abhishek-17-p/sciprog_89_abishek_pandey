#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic.h"

int getlines(char filename[MAX_FILE_NAME]);


int main(){

//define our file variable
	FILE *f;
	char filename[MAX_FILE_NAME];
	printf("Enter file name: ");
	scanf("%s", filename);
// n function which gets the number of lines
	int n = getlines(filename);
	printf("No. of lines %d \n", n);
// Open the file
	f = fopen(filename, "r");

	int i;
// Allocating a matrix for storing the magic square as an array of pointers
// Here, each pointer is a row

	int **mat = (int **) malloc(n*sizeof(int *)); 
	for (i = 0; i <n; i++){
		mat [i] = (int *) malloc(n*sizeof(int));
	}

	int j;

// Input integer data into matrix

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			fscanf(f, "%d", &mat[i][j]);
		}
	}

// Printing the matrix

	for ( i = 0; i < n; i++)
    		{
        		printf("\n");
        		for ( j = 0; j < n; j++)
        		{
            			printf(" %d ", mat[i][j]);
        		}
    		}
    	printf("\n");

	int mag = isMagicSquare(mat,n);

	printf("The square returns value: %d\n", mag);

// Freeing each row seperately before freeing the array of pointers

	for ( i = 0; i < n; i++)
		{
        		free(mat[i]);
    		}
    	free(mat);

// Close the file

	fclose(f); 

	return 0;
}

// Counts no. of lines in file

int getlines(char filename[MAX_FILE_NAME]) {
	FILE *fp;
	fp = fopen(filename, "r");

	if (fp==NULL)
	{
		printf("No numbers in file");
	}
	int ch_read;
	int count = 0;
	while( (ch_read = fgetc(fp)) != EOF)
		{
			if (ch_read == '\n'){
			count++;
			}
		}
	printf("No. lines, %d\n", count);
	fclose(fp);
	return count;
}

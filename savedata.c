/*Author: Matthew Mikulich*/

#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void printFile(char ***titles_ptr, char ****best_ptr, int number, int fave) {  
     /*file pointer*/
		FILE *output_file;
   /*counter for loop*/
	int i;	
    /*Stores all books array*/
	char **titles;
	/*Stores favorites array*/
	char ***best;
	/*file name*/
	char fileN[256];
	/*Sets the arrays to use in this method*/
	titles = *titles_ptr;
	best = *best_ptr;				
	
   /*Asks and stores file name*/
  printf("\nWhat file name do you want to use? ");
   scanf("%s",fileN);
 	
 		/*creates file*/
		output_file = fopen(fileN, "w");
		/*check for opening file*/
		if(output_file == NULL) {
			perror("fopen");
			exit(EXIT_FAILURE);
		}
		
		/*Prints titles*/
          fprintf(output_file,"\nYou've entered:");
          for(i = 0; i < number; i++){
                  fprintf(output_file, "\n%i.  %s",i+1,*(titles + i));
          }
          /*spacing*/
          fprintf(output_file, "\n");
          
        /*Prints favorites list*/
          fprintf(output_file, "\nThe books on your favorites list are:");
          for(i = 0; i < fave; i++) {
                  fprintf(output_file, "\n%i. %s",i+1,*(*(best + i)));
         } 
         /*closes the file and check*/
         if (fclose(output_file) != 0) {
         	perror("fclose");
         	exit(EXIT_FAILURE);
         	}
         	
		 printf("\nYour booklist and favorites have been saved to the file %s", fileN);
		 /*spacing*/
		printf("\n");
}

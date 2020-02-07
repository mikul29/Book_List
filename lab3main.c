/*Author: Matthew Mikulich*/

#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

int main() {
  				
          /*Stores all books array*/
          char **titles;             	
          /*Stores favorites array*/
          char ***best;

          /*number of books inputted*/
          int number;
          /*Number for favorites*/
          int fave;
          /*variable for creating file prompt*/
          int response;
          int i;
          /*Prompts number of books*/
          printf("How many library book titles do you plan to enter? ");
					scanf("%i", &number);
          
          /*reads, populates and prints books*/
				  readAndPop(&titles, number);
 		/*how many books go in the favorites list prompt*/
 					printf("\nOf those %i books, how many do you plan to put on your favorites list? ", number);
					scanf("%i",&fave);
					
          /*reads, populates and prints favorites*/
          readAndPopFaves(&best, &titles, number, fave);
  					
          /*Save file prompt*/
          printf("\nDo you want to save them (1=yes, 2=no): ");
          scanf("%i", &response);

			/*creates file only if prompted by user*/		
          if (response == 1) {
				/*creates and prints all info in file*/
      			printFile(&titles, &best, number, fave);
          
          }
          	
        
        for(i = 0; i < number; i ++) {
        if(*(titles + i) != NULL) free(*(titles + i));
       *(titles + i) = NULL;
        } 
        
        free(titles);
        titles = NULL;
        if(best != NULL) free(best);
       best = NULL;
       

       
       
return 0;
}

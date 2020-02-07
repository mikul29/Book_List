/*Author: Matthew Mikulich*/

#include "lab3.h"
#include <stdlib.h>
#include <stdio.h>

void readAndPop(char ***titles_ptr, int number) {
				/*Counter*/
          int i;
       
         	char **titles;
         	char *book;


          /*Allocates space*/
          titles = malloc(number * sizeof(char *));			
          			*titles_ptr = titles;
          /*Allocation check*/
                  if(titles == NULL) {
                       perror("Failed to allocate memory");
                       exit(1);
                  }
  

         printf("\nEnter the %i book titles one to a line: ",number);
  
          /*Inserting titles in array*/
          for(i = 0; i < number; i++) {	
          				book = malloc(61*sizeof(char));
          				if(titles == NULL) {
                       perror("Failed to allocate memory");
                       exit(1);
                  }
          				scanf(" %[^\n]s",book);
          				
                  *(titles + i) = book;
          }
  	
          
          /*Spacing*/
          printf("\n");
          
          /*Prints titles*/
          printf("\n You've entered:");
          for(i = 0; i < number; i++){
                  printf("\n%i.  %s",i+1, *(titles + i));
          }
          printf("\n");
          
          
          
}











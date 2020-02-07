/*Author: Matthew Mikulich*/

#include "lab3.h"
#include <stdlib.h>
#include <stdio.h>

void readAndPopFaves(char ****best_ptr, char ***titles_ptr, int number, int fave) {

		/*which books to add to favorites*/
       	int nums;
		/*for loop counter*/
		int i;
  		/*array that will be used to read and populate array in this method*/
  	    char ***best;
		char **titles;
		 /*link the array from this method to the one passed in the arguments*/

			titles = *titles_ptr;
			
          /*Dynamic space allocation*/
          best = malloc(fave * sizeof(char **));
          /*Allocation check*/
                  if(best == NULL) {
                       perror("Failed to allocate memory");
                       exit(1);
                  }
            *best_ptr = best;
                  
          /*Array for favorites*/
          printf("Enter the number next to each book title you want on your favorites list: ");
          /*Adds to favorites array*/
          for(i = 0; i < fave; i++) {
					scanf("%i", &nums);
                  *(best + i) = titles + (nums-1);
          } 
  
          /*Spacing*/
          printf("\n");
         	
         	/*Prints favorites list*/
          printf("\nThe books on your favorites list are:");
          for(i = 0; i < fave; i++) {
                  printf("\n%i. %s",i+1, *(*(best + i)));
         } 
         /*Spacing*/
          printf("\n");
}














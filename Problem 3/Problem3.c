
/* This program reads charactors from the keyboard. Until a dot is entered. It will then display how
   many 'a's have been entered. It uses a DO WHILE LOOP. Every time it loops it checks if a 'a' is entered. If it has a variable is incremented by 1.  */

#include <stdio.h>
#include <conio.h>

int main() {
	
	// Declare variables for charactors and counter
	char charactors;
	int count = 0;
	
	//Promt and inform user what to do by displaying message on screen
	printf("\n Type some charactors on the keyboard, one by one.\n");
	printf("\n End with a dot '.' and press Enter\n\n");
	
	//Start do loop
	do{
	
    	scanf(" %c", &charactors);      // charactors are entered and read
    	if (charactors =='a')          // check if charactors equal 'a'
		count++;                       // if true counter incraments by 1
		
	 /* Their is a loop of at least one even if the condision is false.
	    the loop will continue while the charactor is NOT '.'  */   	
    }while (charactors !='.');
		
		/*When a '.' is entered it comes out of the loop
		 and displays the amont of 'a's entered */	    
	    printf("\nYou entered  %d 'a's", count);
			
	getch();
	return 0;
}

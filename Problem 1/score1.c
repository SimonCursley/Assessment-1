#include <stdio.h>


/* The user of this program is to enter the score they got in a test. The program will then 
   assign a grade based on that value. It will display the score followed by the grade
   Using IF and ELSE to check whether the variable is TRUE or FALSE. Then check the conditions with logical operators
   and then combining the two conditions with boolean operators For exampleif (a >= b && a <= c) else.
   It will also recognise an invaled number lessthan 0 and morthan 100 */


int main() {
	
	// declare variable
	int score;
	
	// print question on screen and read the variable
	printf("\nPlease enter your score: ");
	scanf("%d", &score);
	
	// check the variable
	if (score >=70 && score <= 100) {                     // is score 70 morethan and 100 lessthan
		printf("\nA score of %d is a A Grade", score);     // if true print score and grade
	}else if (score >= 60 && score <= 69) {               // if false check again
		printf("\nA score of %d is a B Grade", score);     // if true print results
	}else if (score >= 50 && score <= 59) {               // continue to check score and display the grade 
		printf("\nA score of %d is a C Grade", score);
	}else if (score >= 40 && score <= 49) {
		printf("\nA score of %d is a D Grade", score);
	}else if (score >= 0 && score <= 39) {
		printf("\nA score of %d is a F Grade", score);
	}else if (score >= 101) {                             //if the user enters a value morethan 100 and lessthan 0 the screen will display try again
		printf("\nA score of %d is not possible, please try again", score);
	}else if (score < 0) {
		printf("\nA score of %d is not possible, please try again", score);
	}	
	
	getch();
	return 0;
}



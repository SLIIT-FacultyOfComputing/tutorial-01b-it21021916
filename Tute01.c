/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() //function main begining
{

  int sub1 , sub2 ; //subject 1 and subject 2 marks to be entererd by the user
	float tot , avg ; //variable in whitch total and average will be stored
	
	printf("Enter Subject 1 mark here :"); //prompt
	scanf("%d",&sub1); //read an integer
	
	printf("Enter Subject 2 mark here :"); //prompt
	scanf("%d",&sub2); //read an integer
	
	tot = sub1 + sub2 ; //assign total to tot
	avg = tot / 2.0 ; //assign average to avg
	
	printf("The average of the two marks : %.2f",avg); //print average
	
  
  return 0;//end of the main function
}


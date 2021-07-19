/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {//function main begins programe execution

  int counter = 1 ; 
  int sum = 0 ;
  int n;
   
  printf("Enter the number here :");//prompt
  scanf("%d",&n);//read an integer value
   
  while(counter<=n)//loop n times
  {
   	
  sum = sum + counter;// add number to sum
  counter++;//increment counter
   	
	}
	
	printf("Sum of numbers from 1 to %d : %d",n,sum );//print sum of numbers
  
  return 0;//end of the main function
}


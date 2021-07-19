/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1,int no2);//function declaration
int maximum(int no1,int no2);//function declaration
int multiply(int no1,int no2);//function declaration

int main (void)//main function
{
	int no1, no2;//no1 and no2 to be entered by the user
	
	printf("Enter a value for no 1 : ");//prompt
	scanf("%d", &no1);//read an integer value
	
	printf("Enter a value for no 2 : ");//prompt
	scanf("%d", &no2);//read an integer value
	
	printf("%d ", minimum(no1, no2));//function calling
	printf("%d ", maximum(no1, no2));//function calling
	printf("%d ", multiply(no1, no2));//function calling
	
	return 0;//end of the main function

}

int minimum(int no1,int no2)//function implementation
{
	
	if(no1>no2)
	{
		
		return no2 ;
	}
	
}

int maximum(int no1,int no2)//function implementation
{
	
	if(no1<no2)
	{
		
		return no2 ;
	}
}

int multiply(int no1,int no2)//function implementation
{
	  return no1 * no2 ;
}

/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {//function main begins programe execution

  float dis , amount ;//variable declaration
	
	printf("Enter the distance the van has travelled : ");//prompt
	scanf("%f",&dis);//read a float value
	
	if(dis<=30)
	{
		
		amount = dis * 50.0 ;//variable in which amount will be stored
	}
	else 
	{
		amount = 30 * 50.0 + (dis-30) * 40.0 ;//variable in which amount will be stored
		
	}//end if
	
	printf("The amount to be paid for a rental vehicle :%.2f",amount);//print the amount
	
  
  return 0;//end of the main function
}

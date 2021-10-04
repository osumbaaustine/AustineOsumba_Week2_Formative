/* C Program to find Sum of Even and Odd Numbers from 1 to N */
 
#include<stdio.h>
 
int main()
{
  int i, number,absol_difference, thirdofeven_numbers, fifthofodd_numbers, Even_Sum = 0, Odd_Sum = 0;
 
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  
  for(i = 1; i <= number; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        Even_Sum = Even_Sum + i;
  	}
  	else
  	{
  		Odd_Sum = Odd_Sum + i;
	}
    
  }
  printf("\n The Sum of Even Numbers upto %d  = %d", number, Even_Sum);
  printf("\n The Sum of Odd Numbers upto %d  = %d", number, Odd_Sum);
  absol_difference = Even_Sum - Odd_Sum;
  printf("\nDifference Between %d & %d = %d",Even_Sum,Odd_Sum,absol_difference);
  thirdofeven_numbers = Even_Sum/3;
  printf("\n Third of the sum of  %d = %d",Even_Sum,thirdofeven_numbers);
  fifthofodd_numbers = Odd_Sum/5;
  printf("\n Fifth of sum of %d = %d",Odd_Sum,fifthofodd_numbers);

  return 0;
}
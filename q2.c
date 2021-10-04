#include <stdio.h>
int main(int argc, char *argv[])
{
	int num=0;
	int sum=0;
	int sep=0;
	printf("Please enter a positive integer: ");
	scanf("%d",&num);
 
	while(num > 0)
	{
		sep = num%10;
		num = num/10;
		sum = sum + sep;
	}
	
	printf("Result: %d\n",sum);
	return 0;
}



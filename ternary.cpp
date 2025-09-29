#include<stdio.h>
int main()
{
	int x , y , z , largest;
	printf("Enter first number = ");
	scanf("%d",&x);
		printf("Enter second number = ");
	scanf("%d",&y);
		printf("Enter third number = ");
	scanf("%d",&z);
	largest = (x>y)?((x>z)?x:z):((y>z)?y:z);
	printf("largest number is = %d", largest);
	return 0;
}

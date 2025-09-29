#include<stdio.h>
int main()
{
	int a , b;
	printf("Enter a = ");
	scanf("%d",&a);
		printf("Enter b = ");
	scanf("%d",&b);
	printf("\nsum of a and b = %d",a+b);
	printf("\ndifference of a and b = %d",a-b);
	printf("\nproduct of a and b = %d",a*b);
	if(b!=0)
	{
	printf("\nquotient of a and b = %d",a/b);
	printf("\nremainder of a and b = %d",a%b);
}
else
{
	printf("\ninvalid");
}
	return 0;
}

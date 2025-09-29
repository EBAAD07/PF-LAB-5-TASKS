#include<stdio.h>
int main()
{
	int x, y ,z;
	printf("Enter x =");
	scanf("%d",&x);
	printf("Enter y =");
	scanf("%d",&y);
	printf("Enter z =");
	scanf("%d",&z);
	if(x==y && y==z) 
	{
		printf("all are same");
	}
	else
	{
		if(x>y && x>z)
		{
		printf("x is greatest ");
	}
	else if(y>x && y>z)
	{
		printf("y is greatest ");
	}
	else
	{
	printf(" z is greatest ");
}

	}
	
	return 0;
}

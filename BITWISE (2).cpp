#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	printf("\na&b : %d",a&b);
		printf("\na|b : %d ",a|b);
			printf("\na^b : %d",a^b);
				printf("\n~a : %d",~a);
					printf("\na<<1 : %d",a<<1);
						printf("\na>>1 : %d",a>>1);
	return 0;					
}

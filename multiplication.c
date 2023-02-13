#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf(" enter the a value");
	scanf("%d%d",&a,&b);
	while(a<=20)
	{
		printf("%d X %d=\t%d\n",a,b,a*b);
		a++;
	}
	getch();
	return (0);
}

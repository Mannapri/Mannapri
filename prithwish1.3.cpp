
//adding two numbers

#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("sum of %d & %d is:%d\n",a,b,c);
	return 0;
}

int add(int a, int b)
{
	int d;
	d=a+b;
	return d;
}

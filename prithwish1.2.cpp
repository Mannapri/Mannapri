/*printing number pattern:
  5 4 3 2 1
    5 4 3 2
      5 4 3
        5 4
          5*/


#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=5;
		for(j=1;j<=5;j++)
		{
		if(j>=i)
		{
		printf("%d",k);
		k--;
	    }
		else
		printf(" ");
	}
		printf("\n");
	}
	return 0;
}

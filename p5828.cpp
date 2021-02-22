#include<stdio.h>
int main()
{
	int a[200];
	int n,i=1;
	scanf("%d",&n);
	a[0]=n;
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			a[i]=n;
			i++;
		}
		else
		{
			n=n*3+1;
			a[i]=n;
			i++;
		}
		
	}
	i--;
	for(;i>=0;i--)
	printf("%d ",a[i]);
	return 0;
 } 

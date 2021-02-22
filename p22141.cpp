#include<stdio.h>
void clear(int* a,int x)
{
	int i,j;
	for (i=0;i<x;i++)
	{   if(a[i]!=0)
	    {
		    for(j=1;j<x-i;j++)
	     	{
			    if(a[i]==a[i+j])
			     a[i+j]=0;
		    }
	    }
	}
}
int main()
{
	int n,i,j,m,x=0,count=0;
	scanf("%d",&n);
	int a[n],b[100]={0};
	for(m=0;m<n;m++)
	{
		scanf("%d",&a[m]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			b[x]=a[i]+a[i+j];
				x++;
			
		}
	}
	clear(b,x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			count++;
		}
	}

	printf("%d",count);
	return 0;
 } 

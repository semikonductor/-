#include<stdio.h>
int main()
{   
	int n,k=2,i,j;
	scanf("%d",&n);
	int a[n][n]={};
	j=(n+1)/2-1;
	i=0;
	a[i][j]=1;
	while(k<=n*n){
		if(i==0&&j!=n-1)
		{
			i=n-1;
			j++;			
		}
		else if(i!=0&&j==n-1)
		{
			j=0;
			i--;			
		}
		else if(i==0&&j==n-1)
		{
			i++;			
		}
		else
		{
			if(a[i-1][j+1]==0)
			{
			
				i--;
			    j++;
			}
			else
			{
				i++;
			}
		}
		a[i][j]=k;
		k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{   
			printf("%d ",a[i][j]);
			if(j==n-1)
			printf("\n",a[i][j]);
			
		}
	}
	return 0;
	
	 
}

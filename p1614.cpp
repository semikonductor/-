#include <stdio.h>
int main(){
    int m,n,max=1000000,sum;
    scanf("%d%d",&n,&m);
    int i,j,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-m+1;i++)
    {   sum=0;
        for(j=0;j<m;j++)
        sum+=a[i+j];
        if(sum<max)
        {
            max=sum;
        }

    }
    printf("%d",max);
    return 0;

}
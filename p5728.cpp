#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,count=0,p,q;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for( p=0;p<n-1;p++)
    {
        for(i=p+1;i<n;i++)
        {    q=0;
            for(j=0;j<3;j++)
        {
            if(abs(a[p][j]-a[i][j])>5)
            q=1;
        }
        if(abs(a[p][0]+a[p][1]+a[p][2]-(a[i][0]+a[i][1]+a[i][2]))>10)
        q=1;
        if(q==0)
        count++;
        }
        
    }
    printf("%d",count);
    return 0;


}
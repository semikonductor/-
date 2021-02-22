#include<stdio.h>
int main(){
    int i,j,t,n,l[2000]={0},sum;
    double a;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%lf%d",&a,&t);
        for(i=1;i<=t;i++)
    {
        sum=(int) (a*i);
        if(l[sum]==0)
        l[sum]=1;
        else
        {
            l[sum]=0;
        }
        
    }
    }
    
    for(i=0;i<2000;i++)
    if(l[i]==1)
    printf("%d",i);
    return 0;


}
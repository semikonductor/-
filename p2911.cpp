#include <stdio.h>
int main(){
    int a,b,c,i,j,z,ar[100]={0};
    scanf("%d%d%d",&a,&b,&c);
    for(z=1;z<=a;z++)
    {
        for(i=1;i<=b;i++)
        {
            for(j=1;j<=c;j++)
            {
                ar[i+j+z]++;
            }
        }
    }
    int ans,buf=0;
    for(i=1;i<100;i++)
    {
        if(ar[i]>buf)
        {
            ans=i;
            buf=ar[i];
        }
    }
    printf("%d",ans);
    return 0;
}
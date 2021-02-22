#include <stdio.h>
int main(){
    int i,j,a[8]={0},buf[7]={0},n,x,count,p;
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   
        count=0;
        for(p=0;p<7;p++)
        {   scanf("%d",&x);
            for(j=0;j<7;j++)
            {   
                if(x==a[j])
                count++;
            }
            
        }
        buf[7-count]++;

    }
    for(i=0;i<7;i++)
    printf("%d ",buf[i]);
    return 0;



}
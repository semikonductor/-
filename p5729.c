#include <stdio.h>
int main(){
    int i,q,a[50][50][50]={0},w,x,h,ww,xx,hh;
    int x1,x2,y1,y2,z1,z2,count=0;
    scanf("%d%d%d",&w,&x,&h);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(ww=x1;ww<=x2;ww++)
        {
            for(xx=y1;xx<=y2;xx++)
            {
                for(hh=z1;hh<=z2;hh++)
                {
                    a[ww][xx][hh]=1;

                }

            }
        }
    }
    for(ww=1;ww<=w;ww++)
        {
            for(xx=1;xx<=x;xx++)
            {
                for(hh=1;hh<=h;hh++)
                {
                    if(a[ww][xx][hh]==0)
                    count++;

                }

            }
        }
    printf("%d",count);
    return 0;

}
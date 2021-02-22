#include<stdio.h>
#define lol if(i>0&&j>0)
int main(){
    int m,n,k,j,i,a[50][50]={0},x,y,p;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        a[x][y]=1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        a[x][y]=2;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                for(p=-2;p<=2;p++)
                {
                    
                    a[i+p][j]=3;
                    a[i][p+j]=3;
                }
                a[i+1][j+1]=3;
                a[i-1][j-1]=3;
                a[i+1][j-1]=3;
                a[i-1][j+1]=3;

            }

        }
    }

}
#include<stdio.h>
#include <string.h>
void zhuan(char buf[15][15],char dst[15][15],int n)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<=n;j++)
        if(j==n)
        dst[i][j]='\0';
        else 
        dst[i][j]=buf[n-j-1][i];
    }
    for (i=0;i<n;i++)
    strcpy(buf[i],dst[i]);
}
void jing(char buf[15][15],char dst[15][15],int n)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<=n;j++)
        if(j==n)
        dst[i][j]='\0';
        else 
        dst[i][j]=buf[i][n-j-1];
    }
    for (i=0;i<n;i++)
    strcpy(buf[i],dst[i]);
}
int main(){
    int n, i,j,p;
    scanf("%d",&n);
    char dst[15][15],buf[15][15],res[15][15];
    getchar();
    for(i=0;i<n;i++)
    gets(buf[i]);
    for(i=0;i<n;i++)
    gets(res[i]);//bashu fangjinqu
    p=0;
    for(i=0;i<n;i++)
    {  
        if(strcmp(res[i],buf[i])!=0)
        p=1;
    }
    if(p==0)
        {printf("6");
            return 0;
        }   //6
    for(i=1;i<=3;i++)
    {
        p=0;
        zhuan(buf,dst,n);
        for(j=0;j<n;j++)
        {
            if(strcmp(res[j],dst[j])!=0)
            p=1;
        }
        if(p==0)
        {    printf("%d",i);
             return 0;
        }
    }
    zhuan(buf,dst,n);
    jing(buf,dst,n);
    p=0;
    for(j=0;j<n;j++)
    {
        if(strcmp(res[j],dst[j])!=0)
    {
        p=1;
    }
    }
    if(p==0)
    {
        printf("4");
        return 0;
    }
    
    for(i=1;i<=3;i++)
    {
        p=0;
        zhuan(buf,dst,n);
        for(j=0;j<n;j++)
        {
            if(strcmp(res[j],dst[j])!=0)
            p=1;
        }
        if(p==0)
        {    printf("5");
             return 0;
        }
    }
    printf("7");
    return 0;
}
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void setdiagitem(int n, int t[n][n], int flag)
{
    if(flag)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                t[i][j]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ", t[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                t[i][j]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ", t[i][j]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int n;
    int flag;
    scanf("%d", &n);
    int t[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
    printf("enter your flag: ");
    scanf("%d", &flag);
    setdiagitem(n, t, flag);
    return 0;
}


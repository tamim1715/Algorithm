#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    int t[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        int temp=t[0][i];
         t[0][i]=t[n-1][i];
        t[n-1][i]=temp;
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=t[i][m-1];

    }
    printf("%d\n", sum);
    return 0;
}

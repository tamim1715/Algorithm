#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++) printf(" ");
        for(int j=0; j<n-i; j++)
        {
            printf("%c", j+'A');
        }
        printf("\n");
    }

    return 0;
}

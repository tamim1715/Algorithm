#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int n;
void swapitem(int t[], int x, int y)
{
    int temp=t[x];
    t[x]=t[y];
    t[y]=temp;
    for(int i=0; i<n; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
}
int main()
{

    scanf("%d", &n);
    int t[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &t[i]);
    }
    int x,y;
    scanf("%d %d", &x, &y);
    swapitem(t, x, y);
    return 0;
}


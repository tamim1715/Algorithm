#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i=30,j=45, *pi=&i, *pj=&j;
    *pj=j+5;
    i=*pj+5;
    printf("%d %d %d %d\n", i, j, *pi, *pj);
    pj=pi;
    printf("%d %d %d %d\n", i, j, *pi, *pj);


    return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void swap(int *a, int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[]={6,7,8,2,3};
    swapitem(a,1,3);
    return 0;
}

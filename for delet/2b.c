#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int add_num(int n)
{
    if(n<5) return 0;
    return n+add_num(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", add_num(n));

    return 0;
}

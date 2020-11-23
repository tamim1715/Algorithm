#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[50]="too", str2[50];
    strcpy(str2, "good");
    strcat (str2, str1, 2);
    strcat(str2, "thunder", 2);
    printf("%s\n", str1);
    printf("%s\n", str2);
    strcat(str2, "doraemon", 2);
    printf("%s\n", str2);
    int result;
    result=strcmp(str2, str1);
    printf("%d\n", result);





    return 0;
}

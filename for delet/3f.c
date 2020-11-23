#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;

    fptr=fopen("university_list_bd.txt", "r");

    if(fptr==NULL)
    {
        printf("appropriate error information to the user\n");
        exit(0);
    }
    char c= fgetc(fptr);
    int cnt=0;
    while(1)
    {
        cnt++;
        printf("%c ", c);
        c=fgetc(fptr);
        if(cnt==10) break;

    }
    fclose(fptr);

    return 0;
}


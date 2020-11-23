#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void string_modify(char *s)
{
    int a=0;
    while(s[a])
    {
        if(s[a]==' ')
        {
            a++;
            continue;
        }
        s[a]-=32;
        a++;

    }
    puts(s);
}

int main()
{
    char s[100];
    gets(s);

    string_modify(s);

    return 0;
}

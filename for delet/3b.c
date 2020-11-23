#include<stdio.h>

#include<string.h>

char* replacechar(char *s, char x, char y)
{
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==x)
        {
            s[i]=y;
            break;
        }
    }
    return s;
}
int main()
{

    char s[100],s1[100];
    gets(s);
    char x,y;
    scanf("%c %c", &x, &y);

    printf("%s", replacechar(s, x, y));
    return 0;
}


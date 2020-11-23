#include<stdio.h>
void  getvowelarray(char *message, char *vowelarr)
{
    int x=0;
    for(int i=0; i<strlen(message); i++)
    {
        if(message[i]=='A'||message[i]=='a'||message[i]=='e'||message[i]=='E'||message[i]=='i'||message[i]=='I'||message[i]=='o'||message[i]=='O'||message[i]=='u'||message[i]=='U')
        {
            vowelarr[x]=message[i];
            x++;
        }
    }
    puts(vowelarr);
}
int main()
{
    char s[100],ans[100];
    gets(s);
    getvowelarray(s, ans);
    return 0;

}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct covid19info
{
    char country_name[100];
    int number_covid19_cases;
    int deaths;
    int current_rate_positive;
};

int main()
{
    struct covid19info a;
    scanf("%s", &a.country_name);
    scanf("%d", &a.number_covid19_cases);
    scanf("%d", &a.deaths);
    scanf("%d", &a.current_rate_positive);

    printf("%s\n", a.country_name);
   printf("%d\n", a.number_covid19_cases);
   printf("%d\n", a.deaths);
    printf("%d\n", a.current_rate_positive);






    return 0;
}


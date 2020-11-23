#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct package
{
    char name[100];
    int duration;
    int bus;
    int hotel;
    int food;
    int total;
};
struct package t[100];
void best_offer()
{
    int x=0;
    int best;
    for(int i=0; i<30; i++)
    {
        if(i==0) best=t[i].total,x=i;
        else if(t[i].total<best)
        {
            best=t[i].total;
            x=i;
        }
    }
    printf("%s", t[x].name);
    printf("%d", t[x].duration);
    printf("%d", t[x].bus);
    printf("%d", t[x].hotel);
    printf("%d", t[x].food);
    printf("%d", t[x].total);
}
int main()
{
    freopen("Exclusive_tour.txt", "w", stdout);

    for(int i=0; i<30; i++)
    {
        scanf("%s", &t[i].name);
        scanf("%d", &t[i].duration);
        scanf("%d", &t[i].bus);
        scanf("%d", &t[i].hotel);
        scanf("%d", &t[i].food);
        t[i].total=t[i].duration*t[i].bus+t[i].duration*t[i].hotel+t[i].duration*t[i].food;

    }
    void best_offer();
    return 0;
}

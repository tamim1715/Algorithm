#include<stdio.h>

struct student
{
    char name[100];
    int id;
    double cgpa;
};student[100];

bool cmp(studen a, student b)
{
    return a.cgpa>b.cgpa;
}
int main()
{
    freopen("info.txt", "w", stdout);

    char s[100];
    int p;
    double q;
    for(int i=0; i<3; i++)
    {
        gets(s);
        scanf("%d%lf", &p, &q);
        student[i].name=s;
        student[i].id=p;
        student[i].cgpa=q;
    }
    sort(student, student+3, cmp);

    return 0;

}

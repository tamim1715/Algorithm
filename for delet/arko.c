#include<stdio.h>
 struct computer
{
    double price;
    char item[100];
    char description[100];
}arr[100];

int main()
{
    printf("Category                 Item code                  Description                  Price ($)\n");
    printf("***********              ************               **************               *************\n\n");
    printf("Case                       A1                         Compact                      75.00\n");
    printf("Case                       A2                          Tower                       150.00\n");
    printf("RAM                        B1                           8GB                        79.99\n");
    printf("RAM                        B2                          16GB                        149.99\n");
    printf("RAM                        B3                          32GB                        299.99\n");
    printf("Main Hard Disk Drive       C1                          1TB HDD                     49.99\n");
    printf("Main Hard Disk Drive       C2                          2TB HDD                     89.99\n");
    printf("Main Hard Disk Drive       C3                          4TB HDD                     129.99\n");
    printf("Solid State Drive          D1                          240GB SSD                   59.99\n");
    printf("Solid State Drive          D2                          480GB SSD                   119.99\n");
    printf("Second Hard Disk Drive     E1                          1TB HDD                     49.99\n");
    printf("Second Hard Disk Drive     E2                          2TB HDD                     89.99\n");
    printf("Second Hard Disk Drive     E3                          4TB HDD                     129.99\n");
    printf("Optical Drive              F1                          DVD/Blu-Ray Player          50.00\n");
    printf("Optical Drive              F2                          DVD/Blu-Ray Re-writer       100.00\n");
    printf("Operating System           G1                          Standard Version            100.00\n");
    printf("Operating System           G2                          Professional Version        175.00\n\n\n");



    strcpy(arr[0].item, "A1");
    strcpy(arr[0].description,"Compact");
    arr[0].price=75.00;


    strcpy(arr[1].item,"A2");
    strcpy(arr[1].description,"Tower");
    arr[1].price=150.00;

    strcpy(arr[2].item,"B1");
    strcpy(arr[2].description,"8GB");
    arr[2].price=79.99;

    strcpy(arr[3].item,"B2");
    strcpy(arr[3].description,"16GB");
    arr[3].price=149.99;

    strcpy(arr[4].item,"B3");
    strcpy(arr[4].description,"32GB");
    arr[4].price=299.99;

    strcpy(arr[5].item,"C1");
    strcpy(arr[5].description,"1TB HDD");
    arr[5].price=49.99;


    strcpy(arr[6].item,"C2");
    strcpy(arr[6].description,"2TB HDD");
    arr[6].price=89.99;

    strcpy(arr[7].item,"C3");
    strcpy(arr[7].description,"4TB HDD");
    arr[7].price=129.99;

    strcpy(arr[8].item,"D1");
    strcpy(arr[8].description,"240GB SSD");
    arr[8].price=59.99;

    strcpy(arr[9].item,"D2");
    strcpy(arr[9].description,"480GB SSD");
    arr[9].price=119.99;

    strcpy(arr[10].item,"E1");
    strcpy(arr[10].description,"1TB HDD");
    arr[10].price=49.99;

    strcpy(arr[11].item,"E2");
    strcpy(arr[11].description,"2TB HDD");
    arr[11].price=89.99;


    strcpy(arr[12].item,"E3");
    strcpy(arr[12].description,"4TB HDD");
    arr[12].price=129.99;

    strcpy(arr[13].item,"F1");
    strcpy(arr[13].description,"DVD/Blu-Ray Player");
    arr[13].price=50.00;

    strcpy(arr[14].item,"F2");
    strcpy(arr[14].description,"DVD/Blu-Ray Re-writer");
    arr[14].price=100.00;


    strcpy(arr[15].item,"G1");
    strcpy(arr[15].description,"Standard Version");
    arr[15].price=100.00;

    strcpy(arr[16].item,"G2");
    strcpy(arr[16].description,"Professional Version");
    arr[16].price=175.00;


    char s[100];
    int n=17,x1,x2,x3,i;
    double p=0.00,p1=200.00;

    printf("Enter your chosen CASE in item code: ");
    gets(s);

    for(i=0; i<n; i++)
    {
        int result=strcmp(arr[i].item, s);
        if(result==0)
        {
            p+=arr[i].price;

            x1=i;
            break;
        }
    }

    if(i==n)
    {
        printf("chosen item is wrong\n");
        return ;
    }

    printf("Enter your chosen RAM e in item code: ");
    gets(s);

    for(i=0; i<n; i++)
    {
        int result=strcmp(arr[i].item, s);
        if(result==0)
        {
            p+=arr[i].price;
            x2=i;
            break;
        }
    }

    if(i==n)
    {
        printf("chosen item is wrong\n");
        return ;
    }

    printf("Enter your chosen Main Hard Disk Drive in item code: ");
    gets(s);

    for(i=0; i<n; i++)
    {
        int result=strcmp(arr[i].item, s);
        if(result==0)
        {
            p+=arr[i].price;
            x3=i;
            break;
        }
    }
    if(i==n)
    {
        printf("chosen item is wrong\n");
        return ;
    }
    printf("\n\nchosen item in ITEM code: \n");
    printf("Case: %s\nRAM: %s \nMain Hard Disk Drive: %s\n\n", arr[x1].item, arr[x2].item, arr[x3].item);
    printf("chosen item+ basic = total cost = %.2lf\n", p+p1);








}

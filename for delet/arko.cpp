
#include<stdio.h>
 struct item
{
    double price;
    char item[1000];
    char description[100];
};
struct item arr[100];
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
    printf("Operating System           G2                          Professional Version        175.00\n");
    //double price[]={75.00,150.00,79.99, 149.99,299.99,49.99,89.99,129.99,59.99,119.99,49.99,89.99,129.99,50.00,100.00,100.00,175.00};

    arr[0].item="A1";
    arr[0].description="Compact";
    arr[0].price=150.00;

    arr[1].item="A2";
    arr[1].description="Tower";
    arr[1].price=75.00;

    arr[2].item="B1";
    arr[2].description="8GB";
    arr[2].price=79.99;

    arr[3].item="B2";
    arr[3].description="16GB";
    arr[3].price=149.99;

    arr[4].item="B3";
    arr[4].description="32GB";
    arr[4].price=299.99;

    arr[5].item="C1";
    arr[5].description="1TB HDD";
    arr[5].price=49.99;


    arr[6].item="C2";
    arr[6].description="2TB HDD";
    arr[6].price=89.99;

    arr[7].item="C3";
    arr[7].description="4TB HDD";
    arr[7].price=129.99;

    arr[8].item="D1";
    arr[8].description="240GB SSD";
    arr[8].price=59.99;

    arr[9].item="D2";
    arr[9].description="480GB SSD";
    arr[9].price=119.99;

    arr[10].item="E1";
    arr[10].description="1TB HDD";
    arr[10].price=49.99;

    arr[11].item="E2";
    arr[11].description="2TB HDD";
    arr[11].price=89.99;


    arr[12].item="E3";
    arr[12].description="4TB HDD";
    arr[12].price=129.99;

    arr[13].item="F1";
    arr[13].description="DVD/Blu-Ray Player";
    arr[13].price=50.00;

    arr[14].item="F2";
    arr[14].description="DVD/Blu-Ray Re-writer";
    arr[14].price=100.00;


    arr[15].item="G1";
    arr[15].description="Standard Version";
    arr[15].price=100.00;

    arr[16].item="G2";
    arr[16].description="Professional Version";
    arr[16].price=175.00;

}

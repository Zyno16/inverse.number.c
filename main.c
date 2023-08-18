#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, inverse;
    printf("enter the number");
    scanf("%d",&n);
    do{inverse=(inverse*10)+(n%10);
    n=n/10;

    }while(n!=0);
    printf("inverse is%d",inverse);
    return 0;
}

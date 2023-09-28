#include <stdio.h>

int main() 
{
    int n1,n2;
    
    printf("Enter a number--");
    scanf("%d",&n1);
    printf("Enter another number--");
    scanf("%d",&n2);
    int sum,diff,mul,dvs,mod;
    sum=n1+n2;
    diff=n1-n2;
    mul=n1*n2;
    dvs=n1/n2;
    mod=n1%n2;
    
    printf("%d\n",sum);
    printf("%d\n",diff);
    printf("%d\n",mul);
    printf("%d\n",dvs);
    printf("%d\n",mod);
    

    return 0;
}

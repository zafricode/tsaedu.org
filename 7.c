#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("the largest = %d",a);
    else if(b>c)
        printf("the largest = %d",b);
    else
        printf("the largest = %d",c);
    return 0;
}

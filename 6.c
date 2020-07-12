#include<stdio.h>
main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
        printf("the largest = %d",a);
    else if(b>a && b>c && b>d)
        printf("the largest = %d",b);
     else if(c>a && c>b && c>d)
        printf("the largest = %d",c);
    else
        printf("the largest = %d",d);
    return 0;
}

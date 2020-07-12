#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
        printf("the Smallest = %d",a);
    else if(b<c)
        printf("the Smallest = %d",b);
    else
        printf("the Smallest = %d",c);
    return 0;
}


#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three numbers\n");
    scanf("%d%d%",&a&b&c);
    if(a>b)
    {
        if(a>c)
            printf("biggest=%d",a);
        else
            printf("biggest=%d",c);
    }
     else
    {
        if(b>c)
           printf("biggest=%d",b);
          else
          printf("biggest=%d",c);
    }
    return 0;
}

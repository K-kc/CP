#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is greater than %d\n",a,b);
    else if(a<b)
    printf("%d is less than %d\n",a,b);
    if(a<=b)
    printf("%d is less than or equal to %d\n",a,b);
    else if(a>=b)
    printf("%d is greater than or equal to %d\n",a,b);
    if(a==b)
    printf("%d is greater than or equal to %d\n",a,b);
    else if(a!=b)
    printf("%d is not equal to %d\n",a,b);

  return 0;
}

/*
output:
enter the values of a and b
6
5
6 is greater than 5
6 is greater than or equal to 5
6 is not equal to 5
*/

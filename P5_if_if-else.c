#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    sum= a+b;
    printf("sum of a and b is %d\n",sum);
    if(sum >20)
    {
        printf("sum is gretarer then 20\n");
    }    
     else if (sum>10)
    {
        printf("sum is greater than 10 and less than 20\n");
    }    
    else
    {
        printf("sum is less than 10\n");
    }
    return 0;
}

//Output
//5 6 
//sum of a and b is 11
//sum is greater than 10 and less than 20
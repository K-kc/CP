#include <stdio.h>

int main()
{
    int x,y;
    printf("enter a number between 0 t0 39:");
    scanf("%d",&x);
    scanf("%d",&y);
    
    
    
    if (y/10==0)
    {
        printf("you have entered the number in the range of 0 to 9\n");
        
    }
    else if(y/10==1) 
    {
        printf("you have entered number in the range of 10-19\n");
    }
    else if(y/10==2) 
    {
        printf("you have entered number in the range of 20-29\n");
    }
    else if(y/10==3) 
    {
        printf("you have entered number in the range of 30-39\n");
    }
    else
    {
        printf("the number not in range \n)");
    }
    return 0;
}
//Output

//enter a number between 0 t0 39:2
//you have entered the number in the range of 0 to 9
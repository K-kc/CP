int main()
{
    int a,b,c;
    printf("enter the values of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("a is greatest\n");
    else if(b>c)
    printf("b is greatest\n");
    else
    printf("c is greatest\n");
    if((a==0)||(b==0)||(c==0))
    printf("the product of a,b and c is zero\n");
    return 0;
}

/*
output:
enter the values of a,b and c
5
6
7
c is greatest
*/

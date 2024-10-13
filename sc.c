#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b;
    float result ;
    char choice;
    printf("enter then  num1 and num 2 ");
    scanf("%d%d",&a,&b);
    printf("enter teh operator");
    scanf("%c",&choice);
    switch (choice)
    {
    case ' + ':result = a+b;
        break;
    case '-': result = a-b;
        break;
    case '*':result =  a*b;
        break;
    case '/': result = float(a)/float(b);
        break;
    case '%': result =a%b;
        break;
    default:printf("invalid operation ");
        break;
    }exit(0);
    printf("result(%d) = %d %c %d" ,result , a,choice,b);
    return 0 ;
}




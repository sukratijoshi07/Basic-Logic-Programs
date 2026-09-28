#include <stdio.h>
 int main()
{  
    int a , b ;
    char o;
    printf("Enter the Numbers :");
    scanf("%d %d",&a ,&b);
    printf("Enter the opration :");
    scanf(" %c",&o);
    switch(o){
        case '+':
        printf("%d",a+b);
        break;
        case '-' :
        printf("%d",a-b);
        break ;
        case '*' :
        printf("%d",a*b);
        break;
        case '/' :
        printf("%d",a/b);
        break ;
    } 
    return 0;
}
    
#include <stdio.h>
 int main()
{  
    int a , b , c;
    printf("Enter three number ");
    scanf("%d %d %d",&a ,&b ,&c);
    if(a>b&&a>c){
        printf("Greatest Number is %d",a);
    }
    if(b>a&&b>c){
        printf("Greatest Number is %d",b);
    }
    else{
        printf("Greatest Number is %d",c);
    }
    return 0;
}
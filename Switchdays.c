#include <stdio.h>
 int main()
{  
    int n , r;
    printf("Enter the Number :");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Monday");
        break;
        case 2 :
        printf("Tuesday");
        break ;
        case 3 :
        printf("Wednesday");
        break;
        case 4 :
        printf("Thuresday");
        break ;
        case 5 :
        printf("Friday");
        break;
        case 6 :
        printf("Saturday");
        break ;
        case 7:
        printf("Sunday");
        break;
        default :
        printf("not valid");
    } 
    return 0;
}
    
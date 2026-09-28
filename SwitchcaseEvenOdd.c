#include <stdio.h>
 int main()
{  
    int n , r;
    printf("Enter the Number :");
    scanf("%d",&n);
    r=n%2;
    switch(r){
        case 0 :
        printf("Even");
        break;
        case 1 :
        printf("odd");
        break ;
    } 
    return 0;
}
    
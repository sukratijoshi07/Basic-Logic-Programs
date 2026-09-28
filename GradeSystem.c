#include <stdio.h>
 int main()
{  
    int n;
    printf("Enter your marks ");
    scanf("%d",&n);
    if (n>=80){
        printf("Your grade is A");
    }
     else if(n<80&&n>=70){
        printf("your grade is B");
    }
    else if(n<70&&n>=60){
        printf("Your grade is D");
    }
    else if(n<60&&n>=40){
         printf("Your grade is E"); 
    }
    else{
        printf("f");
    }
    return 0;
}
#include<stdio.h>
//using all the operators in c using standard inputs
int main(){
    int a,b;
    printf("enter the value of first number \n enter the value of second number \n");
    scanf("%d %d",&a,&b);
    
    // addition (+)
    printf("the sum of %d and %d is %d \n",a,b,a + b);
    
    // subtraction (-) 
    printf("the difference of %d and %d is %d \n",a,b,a - b);
    
    // multipication (*)
    printf("the product of %d and %d is %d \n",a,b,a * b);
    
    // division (/)
    printf("the quotient of %d and %d is %d \n",a,b,a / b);
    
    // remainder (%)
    printf("the remainder of %d and %d is %d \n",a,b,a % b);
    
    // greater than (>)
    printf("the greatest of %d and %d is %d \n",a,b,a > b);
    
    // less than (<)
    printf("the least of %d and %d is %d \n",a,b,a < b);
    
    // greater than or equal (>=)
    printf("the greater than or equal to of %d and %d is %d \n",a,b,a >= b);
    
    // less than or equal to (<=)
    printf("less than or equal to of %d and %d is %d \n",a,b,a <= b);
    
    // equal to (==)
    printf("equal to %d and %d is %d \n",a,b,a == b);
    
    // not equal to (!=)
    printf(" not equal to %d and %d is %d \n",a,b,a != b);
    return 0;
    }
    

#include<stdio.h>
int add(int x,int y){    
    
    if(y==0)
        return x;
    
    else{
        
        return (add(x,y-1)+1);
    }
}
int main()
{
    int num1,num2,r;
    printf("Enter the num1 = ");
    scanf("%d",&num1);
    printf("Enter the num2 = ");
    scanf("%d",&num2);
    
    r = add(num1,num2);  
    
    printf("Sum of two numbers is: %d", r);
    return 0;
}
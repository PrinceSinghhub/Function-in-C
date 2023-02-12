#include<stdio.h>
int add(int x,int y,int z){    
    
    if(y==0)
        return x;
    if(z==0){
        return 1;
    }
    else{
        
        return (x+add(z-1,x,y-1)+z);
    }
}
int main()
{
    int num1,num2,num3,r;
    printf("Enter the num1 = ");
    scanf("%d",&num1);
    printf("Enter the num2 = ");
    scanf("%d",&num2);
    printf("Enter the num3 = ");
    scanf("%d",&num3);
    r = add(num1,num2,num3);  
    
    printf("Sum of two numbers is: %d", r);
    return 0;
}
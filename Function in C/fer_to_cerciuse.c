#include<stdio.h>
float pr(float c);
int main(){
    float a,b;
    printf("Enter your cercius value = ");
    scanf("%f",&a);
    b=pr(a);
    printf("ferengite is  %0.2f",b);

return 0;
}
float pr(float c){
    float f;
    f=c*9/5+32;
    return f;
}
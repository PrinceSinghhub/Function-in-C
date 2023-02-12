#include<stdio.h>
void change(int a);
int main(){
    int b = 400;
    printf("%d\n",b);
    change(b);//for only confusion thats all
    printf("%d\n",b);
    return 0;
    
}
void change(int a){
    a=10;
}
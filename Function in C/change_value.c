#include<stdio.h>
int change(int a);
int main(){
    int b;
    b=change(40);
    printf("%d\n",b);
    int r,g;
    g=400;
    r=change(g);//for change the value
    printf("%d\n",r);
    return 0;
}
int change(int a){
    int p;
    p=40+a;
    return p;
}

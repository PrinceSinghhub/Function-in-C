#include<stdio.h>
int codex();
int main(){
    int a;
    a=codex();
    printf("your no is %d",a);
return 0;
}
int codex(){
    int i;
    printf("your no =");
    scanf("%d",&i);
    return i;
}
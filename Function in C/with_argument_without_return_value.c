#include<stdio.h>
void pr(int n);
int main(){
      int n;
      printf("Enter your value =");
      scanf("%d",&n);
      pr(n);
     

}
void pr(int n){
    int a=0;
    while(n>a){
        printf("%d\n",a);
        a++;
        // no return value here
    }
}

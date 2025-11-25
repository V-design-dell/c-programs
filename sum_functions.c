#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    a = 5;
    b = 5;
    sum(a,b);
    return 0;
}
int sum(int a , int b){
    int s = a+b;
    printf("sum of %d and %d is:%d",a,b,s);
}

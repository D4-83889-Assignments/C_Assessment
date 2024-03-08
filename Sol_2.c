#include<stdio.h>

void fib(int n){

    int first = 0;
    int second = 1;
    int next;
    printf("Fibonacci of %d terms :\n",n);
    printf("%d %d ",first,second);
    n -=2;
    while(n!=0){
        next = first+second;
        printf("%d ",next);
        first = second;
        second = next;
        n--;
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter Number of term of fibonacci\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}
#include<stdio.h>
int fact(int n)
{
    int product =1;
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        while(n!=0)
        {
            product *= n;
            n--;
        }
        
    }
    return product;
}

int main(){
//Factorial of a number
int num;
printf("Enter a Number\n");
scanf("%d",&num);
printf("Factorial: %d\n",fact(num));


return 0;
}
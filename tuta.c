#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    isPresent(n);
    
    return 0;
}

void isPresent(int n){
    int temp;
    int x;
    printf("Enter a digit from %d \n", n);
    scanf("%d", &x);

    while (n > 0)
    {

        temp = n % 10;        
        n = n / 10;   
        if (temp == x)
        {
            printf("The digit %d is present in %d",x, n);
        } else {
            printf("The digit %d is not present in %d",x, n);
        }
    }
    
}
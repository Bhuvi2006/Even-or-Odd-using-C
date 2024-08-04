#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num==0)
        printf("%d is Zero",num);
    else if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
}

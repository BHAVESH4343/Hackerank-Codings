#include<stdio.h>
int main()
{
    char n[500];
    printf("Hello, World.");
    scanf("\n");
    scanf("%[^\n]%*c",n);
    printf("\n");
    printf("%s",n);
    return 0;
}

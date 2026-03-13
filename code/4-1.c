#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char tool;

    scanf("%d %d %c", &num1, &num2, &tool);

    switch(tool){
        case '+' :
            printf(num1+num2);
            break;
        case '-' :
            printf(num1-num2);
            break;
        case '*' :
            printf(num1*num2);
            break;
        case '/':
            printf(num1/num2);
            break;

    return 0;
}


#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(n<=1) {
        printf("false");
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            printf("false");
        }
        else printf("true");

    return 0;
}


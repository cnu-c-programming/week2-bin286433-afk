#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num<=1) {
        printf("false");
        return 0;
    }

    int result =1;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            result=0;
            break;
        }
    }

    if(result == 1){
        printf("true");
    }
    else printf("false");

    return 0;
}


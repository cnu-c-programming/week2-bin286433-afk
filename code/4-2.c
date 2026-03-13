#include <stdio.h>

int main()
{
    for(i=1; i<10; i++){
        for(r=1; r<10; r++){
            printf("%d * %d = %d", r, i, (r*i));
        }
    }

    return 0;
}


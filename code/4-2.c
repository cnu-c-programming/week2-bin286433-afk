#include <stdio.h>

int main()
{
    for(int i=1; i<10; i++){
        for(int r=1; r<10; r++){
            printf("%d * %d = %d\n", i, r, (r*i));
        }
    }

    return 0;
}


#include <stdio.h>

int main() {

    for(int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d %s %d %s %d\t", j, "*", i, " = ", i * j);
        }
        printf("\n");
    }

    return 0;
}
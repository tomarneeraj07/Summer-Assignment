#include <stdio.h>

void printFibo(int terms) {
    int t1 = 0, t2 = 1, next;
    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);
    
    printFibo(n);
    return 0;
}
#include <stdio.h>

int secondLargest(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    else
        return c;
}

int main() {
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);

    int second_largest = secondLargest(a, b, c);
    printf("%d\n", second_largest);
    
    return 0;
}


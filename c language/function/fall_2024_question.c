#include <stdio.h>
#include <math.h>

int is_perfect_square(int n) {
    int root = sqrt(n);
    if (root * root == n)
        return 1;
    else
        return 0;
}

int count_divisors(int n) {
    int count = 0;
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n1, n2;
    int i;

    scanf("%d %d", &n1, &n2);

    printf("total number of divisor for n1: %d\n", count_divisors(n1));
    printf("total number of divisor for n2: %d\n", count_divisors(n2));

    int count_of_n1 = count_divisors(n1);
    int count_of_n2 = count_divisors(n2);

    if (count_of_n1 > count_of_n2) {
        printf("%d has more divisor\n", n1);
    } else if (count_of_n2 > count_of_n1) {
        printf("%d has more divisor\n", n2);
    } else {
        printf("Both have same number of divisors\n");
    }

    int p_n1 = is_perfect_square(n1);
    int p_n2 = is_perfect_square(n2);

    if (p_n1 == 1 && p_n2 == 1) {
        printf("both are perfect squares\n");
    } else {
        printf("both are not perfect squares\n");
    }

    return 0;
}

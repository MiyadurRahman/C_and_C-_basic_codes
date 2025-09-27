#include <stdio.h>

int main() {
    int n, a[100], value, found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input value to search
    printf("Enter the number to search: ");
    scanf("%d", &value);

    // Search in array
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            printf("Found at index: %d\n", i);
            found = 1;
            
        }
    }

    // If not found
    if (!found) {
        printf("NOT FOUND\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a[100];
    int size, value, index;

    // Input size and array elements
    printf("Enter size of array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Input value and index to insert
    printf("The value I want to insert: ");
    scanf("%d", &value);

    printf("Enter the index position: ");
    scanf("%d", &index);
    

    // Print updated array
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

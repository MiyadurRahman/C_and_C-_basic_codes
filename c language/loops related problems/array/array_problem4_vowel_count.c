#include <stdio.h>
int main() {
    char a[100];
    int n;
    int count = 0;

    scanf("%d", &n);
    getchar(); // remove the newline left by scanf

    // read characters
    for(int i = 0; i < n; i++) {
        scanf("%c", &a[i]);
    }

    // print characters
    for(int i = 0; i < n; i++) {
        printf("%c", a[i]);
    }

    // count vowels
    for(int i = 0; i < n; i++) {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
            count++;
        }
    }

    printf("\n%d", count);
    return 0;
}

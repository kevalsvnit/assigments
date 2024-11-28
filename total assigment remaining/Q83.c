
#include <stdio.h>

void findmax(int a[], int k) {
    int max = a[0];
    for (int i = 1; i < k; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("Max is %d\n", max);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    findmax(a, n);
    return 0;
}

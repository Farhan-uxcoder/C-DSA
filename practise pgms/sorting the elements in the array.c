#include<stdio.h>
void main() {
    int i, j, n, a[20], temp;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    printf("Enter the elements in the array of size %d:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The elements before sorting are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    // Correct Bubble Sort Logic
    for(j = 0; j < n - 1; j++) {
        for(i = 0; i < n - j - 1; i++) {
            if(a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    printf("\nThe elements after sorting are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}

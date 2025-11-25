#include <stdio.h>

int main() {
    int n, k, temp;

    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d", &n);

    printf("Enter the value of k:\n");
    scanf("%d", &k);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("After sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    
    printf("%d\n", arr[k - 1]);

    return 0;
}

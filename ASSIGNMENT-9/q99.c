#include <stdio.h>
#include <limits.h>

int analyze(int *a, int n, int *small, int *secondSmall,
            int *great, int *secondGreat) {
    int i;

    *small = INT_MAX;
    *secondSmall = INT_MAX;
    *great = INT_MIN;
    *secondGreat = INT_MIN;

    for (i = 0; i < n; i++) {
        if (*(a + i) < *small) {
            *secondSmall = *small;
            *small = *(a + i);
        }
        else if (*(a + i) != *small &&
                 *(a + i) < *secondSmall) {
            *secondSmall = *(a + i);
        }

        if (*(a + i) > *great) {
            *secondGreat = *great;
            *great = *(a + i);
        }
        else if (*(a + i) != *great &&
                 *(a + i) > *secondGreat) {
            *secondGreat = *(a + i);
        }
    }

    return *secondSmall != INT_MAX && *secondGreat != INT_MIN;
}

int main() {
    int a[100], n, i;
    int small, secondSmall, great, secondGreat;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (analyze(a, n, &small, &secondSmall,
                &great, &secondGreat)) {
        printf("Smallest = %d\n", small);
        printf("Second Smallest = %d\n", secondSmall);
        printf("Greatest = %d\n", great);
        printf("Second Greatest = %d\n", secondGreat);
    } else {
        printf("Fewer than two distinct values exist.\n");
    }

    return 0;
}
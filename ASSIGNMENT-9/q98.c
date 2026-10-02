#include <stdio.h>

void display(int *a, int n) {
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));

    printf("\n");
}

void insert(int *a, int *n, int value, int pos) {
    int i;

    if (pos < 1 || pos > *n + 1) {
        printf("Invalid position\n");
        return;
    }

    for (i = *n; i >= pos; i--)
        *(a + i) = *(a + i - 1);

    *(a + pos - 1) = value;
    (*n)++;
}

int deleteElement(int *a, int *n, int pos) {
    int i, deleted;

    deleted = *(a + pos - 1);

    for (i = pos - 1; i < *n - 1; i++)
        *(a + i) = *(a + i + 1);

    (*n)--;

    return deleted;
}

int main() {
    int a[100], n, i, choice, value, pos, deleted;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(a, n);
                break;

            case 2:
                printf("Enter value and position: ");
                scanf("%d%d", &value, &pos);
                insert(a, &n, value, pos);
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n) {
                    printf("Invalid position\n");
                } else {
                    deleted = deleteElement(a, &n, pos);
                    printf("Deleted value = %d\n", deleted);
                }
                break;

            case 4:
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
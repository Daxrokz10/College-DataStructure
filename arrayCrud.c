#include<stdio.h>
#include<stdlib.h>

void displayArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void addElement(int **arr, int *n) {
    int element;
    printf("Enter new element: ");
    scanf("%d", &element);
    (*n)++;
    int *temp = (int *)realloc(*arr, sizeof(int) * (*n));
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        return;
    }
    *arr = temp;
    (*arr)[*n - 1] = element;
}

int main() {
    int n, i;
    int *arr = NULL;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array before adding element:\n");
    displayArr(arr, n);

    addElement(&arr, &n);

    printf("Array after adding element:\n");
    displayArr(arr, n);

    free(arr);
    return 0;
}
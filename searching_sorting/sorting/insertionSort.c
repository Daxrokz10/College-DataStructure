#include <stdio.h>

int main()
{
    int arr[50], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i - 1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    printf("Sorted array with bubble sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
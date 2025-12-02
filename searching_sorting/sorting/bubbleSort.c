#include <stdio.h>

int main()
{
    int arr[50], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0;i<n;i++){
        int swapped = 0;
        for(int j = 0 ;j<n - i - 1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }

    printf("Sorted array with bubble sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
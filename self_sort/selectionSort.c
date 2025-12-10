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
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            int t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }
    }

    printf("Sorted array with bubble sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
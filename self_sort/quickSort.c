#include <stdio.h>


void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low,int high){
    
}

void quickSort(int arr[],int low,int high){

}

int main()
{
    int arr[50], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    


    printf("Sorted array with quick sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
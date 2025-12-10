#include <stdio.h>


void merge(int arr[],int left , int mid , int right){
    int i = left;
    int j = mid + 1;
    int k = 0;
    int size = right - left + 1;
    int temp[size];

    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }

    while(i<=mid){
       temp[k++] = arr[i++]; 
    }
    while(j<=right){
        temp[k++] = arr[j++];
    }

    for(i=0,k=0;i<size;i++,k++){
        arr[left + i] = temp[k];
    }

};

void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid = (left+right)/2;

        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
};

int main()
{
    int arr[50], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    mergeSort(arr,0,n);

    printf("Sorted array with merge sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
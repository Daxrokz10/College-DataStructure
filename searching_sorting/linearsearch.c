#include<stdio.h>

int main(){
    int arr[] = {21,445,81,211,9};
    int size = 5;
    printf("enter the value you want to find");
    int key;
    scanf("%d",&key);

    for(int i = 0;i<size;i++){
        if(arr[i] == key){
            printf("%d found at %d ",arr[i],i);
        }
    }


}
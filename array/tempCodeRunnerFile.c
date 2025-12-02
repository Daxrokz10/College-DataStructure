    int n,i;
    int *arr = NULL;
    arr = (int *)malloc(sizeof(int)*n);

    if(arr == NULL){
        printf("memeory not allocated\n");
        return 1;
    }else{
        printf("Enter the size of array: ");
        scanf("%d",&n);
        printf("Enter the elements of array: ");
        for(i=0;i<n;i++){
            printf("arr[%d]: ",&i);
            scanf("%d",&arr[i]);
        }
    }.
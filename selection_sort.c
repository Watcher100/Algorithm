#include<stdio.h>

void selectionsort(int arr[],int n){

    for(int i=0; i<n;i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }

        if(min != i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

int main (){

    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array Element :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    selectionsort(arr,n);

    printf("Array After Sorting : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
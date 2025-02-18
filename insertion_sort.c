#include<stdio.h>

void insertionsort(int arr[],int n){
    
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;

        while(j >= 0 && arr[j] > temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main (){

    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array element :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    insertionsort(arr,n);

    printf("Array After sorting : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
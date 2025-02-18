#include<stdio.h>

void margesort(int arr[], int low, int high){

    if(low < high){
        int mid=low + (high-low)/2;

        margesort(arr, low, mid);
        margesort(arr, mid+1, high);

        int i=low, j=mid+1,k=0;
        int temp[high-low+1];

        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp[k++]=arr[i++];
            }else{
                temp[k++]=arr[j++];
            }
        }

        while(i <= mid){
            temp[k++]=arr[i++];
        }

        while(j <= high){
            temp[k++]=arr[j++];
        }

        for(i=low,k=0; i<=high; i++,k++){
            arr[i]=temp[k];
        }
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

    margesort(arr,0,n-1);
    
    printf("Array After sorting : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
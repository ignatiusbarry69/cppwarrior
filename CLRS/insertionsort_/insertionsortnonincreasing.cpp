#include <stdio.h>

void insertionSort(int A[], int size) {
    for(int i = 1; i < size; i++){
        int key = A[i];
        int j = i - 1;
        while(j>=0 && A[j]<key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}


int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr,n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

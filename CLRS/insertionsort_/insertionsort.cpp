#include <stdio.h>

void insertionSort(int A[], int size) {
    //mulai dr index 1
    //cek index 0 apakah lebih besar dari index 1
    //contoh
    //keynya di index 5
    //cek index 4 lebi gede dari index 5 gak, kalo ngga diem, lanjut ke key = index 6
    //kalo lebi gede, simpen isi index 4 ke pointer index 5, aman value index 5 masih ada copyan di key
    //lannjut cek index 3 kalo masi lebih gede simpen isi index 3 ke index 4, dst
    //kalau value index 3 sudah lebih kecil dr key, stop, 
    //tinggal masukkan key ke index 4 karena isi index 4 sudah pindah ke index 5 para while sebelumnya
    //sebelah kiri key selalu sudah urut
    for(int i = 1; i < size; i++){
        int key = A[i];
        int j = i - 1;
        while(j>=0 && A[j]>key){
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


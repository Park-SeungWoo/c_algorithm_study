//
//  main.c
//  SelectionSortRecursive
//
//  Created by 박승우 on 10/10/20.
//

#include <stdio.h>

void SelectionSortRecursive(int* arr, int pidx, int amount);
int findMinimum(int arr[], int midx, int nidx, int amount);
void Swap(int* arr, int midx, int idx);

int main() {
    int a[] = {5, 6, 0, 1, 3, 4, 7, 9, 8, 2};
    int amount = sizeof(a) / sizeof(int);
    
    // previous
    printf("previous unsorted array\n");
    for(int i = 0; i < amount; i++){
        printf("%d ", a[i]);
    }
    puts("\n");
    
    SelectionSortRecursive(a, 0, amount);

    printf("sorted array\n");
    for(int i = 0; i < sizeof(a) / 4; i++){
        printf("%d ", a[i]);
    }
    puts("");
}

void SelectionSortRecursive(int* arr, int pidx, int amount) {
    if(amount != (pidx)){
        int midx = findMinimum(arr, pidx, pidx+1, amount);
        Swap(arr, midx, pidx);
        SelectionSortRecursive(arr, pidx+1, amount);
    }
}

int findMinimum(int *arr, int midx, int nidx, int amount) {
    if(nidx < amount){
        if(arr[midx] < arr[nidx]){
            return findMinimum(arr, midx, nidx+1, amount);
        } else {
            return findMinimum(arr, nidx, nidx+1, amount);
        }
    }else{
        return midx;
    }
}

void Swap(int* arr, int midx, int idx){
    int tmp = arr[midx];
    arr[midx] = arr[idx];
    arr[idx] = tmp;
}

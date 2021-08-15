#include <stdio.h>

void bubbleSort(int[], int);
void insertionSort(int[], int);
void quickSort(int[], int, int);

int main() {
    int n, arr[100];
    int i;
    int op, cont;
    do {
        printf("ENTER THE NO. OF ELEMENTS: ");
        scanf("%d", &n);
        printf("ENTER THE ARRAY ELEMENTS:\n");
        for(i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("ENTER A OPTION TO SORT:\n1: BUBBLE SORT\n2: INSERTION SORT\n3: QUICK SORT\n");
        scanf("%d", &op);
        switch(op) {
            case 1:
            bubbleSort(arr, n);
            break;
            case 2:
            insertionSort(arr, n);
            break;
            case 3:
            quickSort(arr, 0, n);
            break;
            default:
            printf("INVALID OPTION!");
        }
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nCONTINUE? 1/0:\t");
        scanf("%d", &cont);
    } while(cont == 1);
    return 0;
}

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int size) {
    int i, j, key;
    for(i = 1; i < size; i++) {
        key = arr[i];
        for(j = i; j > 0 && arr[j - 1] > key; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = key;
    }
}

int partition(int arr[],int l,int h) {
    int pivot, i=l,j=h,temp;
    pivot=arr[l];
    while(i<j) {
        while(arr[i]<=pivot) {
            i++;
        }
        while(arr[j]>pivot) {
            j--;
        }
        if(i<j) {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[j];
    arr[j]=arr[l];
    arr[l]=temp;
    return j;
}

void quickSort(int arr[], int l, int h) {
    int j;
    if (l<h) {
        j=partition(arr,l,h);
        quickSort(arr,l,j-1);
        quickSort(arr,j+1,h);
    }
}

/*
OUTPUT:

ENTER THE NO. OF ELEMENTS: 5
ENTER THE ARRAY ELEMENTS:
5 78 32 1 23
ENTER A OPTION TO SORT:
1: BUBBLE SORT
2: INSERTION SORT
3: QUICK SORT
1
1 5 23 32 78 
CONTINUE? 1/0:  1
ENTER THE NO. OF ELEMENTS: 5
ENTER THE ARRAY ELEMENTS:
67 12 34 89 10
ENTER A OPTION TO SORT:
1: BUBBLE SORT
2: INSERTION SORT
3: QUICK SORT
2
10 12 34 67 89 
CONTINUE? 1/0:  1
ENTER THE NO. OF ELEMENTS: 5
ENTER THE ARRAY ELEMENTS:
99 76 54 38 87
ENTER A OPTION TO SORT:
1: BUBBLE SORT
2: INSERTION SORT
3: QUICK SORT
3
38 54 76 87 99 
CONTINUE? 1/0:  0

*/

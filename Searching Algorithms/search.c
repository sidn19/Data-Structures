#include<stdio.h>
int main() {
    int i, j, arr[100], n, key, ch, cont, l=0, h, mid, temp;
    do {
        printf("ENTER THE NO. OF ELEMENTS: ");
        scanf("%d", &n);
        printf("ENTER THE ARRAY ELEMENTS:\n");
        for(i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("\nENTER THE ELEMENT TO BE FOUND\n");
        scanf("%d",&key);
        printf("ENTER A OPTION TO SORT:\n1: LINEAR SEARCH\n2: BINARY SEARCH\n");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
            for(i = 0; i < n; i++) {
                if(arr[i]==key) {
                    printf("\nELEMENT FOUND\n");
                    break;
                }
            }
            if(i==n) {
                printf("\nELEMENT NOT FOUND\n");
            }
            break;
            case 2:
            for(i=0;i<n-1;i++) {
                for(j=0;j<n-i-1;j++) {
                    if(arr[j]>arr[j+1]) {				
                        temp=arr[j];
                        arr[j] = arr[j + 1];
                        arr[j+1] = temp;
                    }
                }
            }
            h=n-1;
            while(l<=h) {
                mid=((l+h)/2);
                if(arr[mid]==key) {	
                    printf("\nELEMENT FOUND\n");
                    break;
                }
                else if(arr[mid]<key)
                l=mid+1;
                else 
                h=mid-1;
            }
            break;
            default:
            printf("\nINVALID OPTION!");
        }
        printf("CONTINUE? <1/0>");
        scanf("%d",&cont);
    } while(cont==1);
    return 0;
}

/*

OUTPUT:

ENTER THE NO. OF ELEMENTS: 5
ENTER THE ARRAY ELEMENTS:
54 11 24 37 89

ENTER THE ELEMENT TO BE FOUND
37
ENTER A OPTION TO SORT:
1: LINEAR SEARCH
2: BINARY SEARCH
1

ELEMENT FOUND
CONTINUE? <1/0>1
ENTER THE NO. OF ELEMENTS: 5
ENTER THE ARRAY ELEMENTS:
55 90 16 73 38

ENTER THE ELEMENT TO BE FOUND
21
ENTER A OPTION TO SORT:
1: LINEAR SEARCH
2: BINARY SEARCH
2
CONTINUE? <1/0>0

*/
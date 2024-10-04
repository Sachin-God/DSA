#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void print(struct Array arr){
    printf("[ ");
    for (int i = 0; i < arr.length; i++){
        printf(" %d ",arr.A[i]);
    }
    printf("]");
}

int main(){
    struct Array arr;
    printf("Enter the size of the array : ");
    scanf("%d", &arr.size);

    arr.A = (int*)malloc(sizeof(int) * arr.size);

    int i, n;

    printf("Enter the number of numbers : ");
    scanf("%d \n", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    print(arr);
}
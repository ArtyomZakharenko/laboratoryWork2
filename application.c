#include <stdio.h>

void FillArray (int *, int);
void ShowArray (int *, int);
int SearchingMaxElement (int *, int);

int main()
{
    int size, maxElement;
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    int array[size][size];
 
    FillArray(array, size);
    ShowArray(array, size);
    maxElement = SearchingMaxElement(array, size);
    
  return 0;
}

void FillArray (int *arr, int length){
    int i, j;
    printf("Fill matrix:\n");
    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++){
            printf("Row %d, element %d: ", i+1, j+1);
            scanf("%d", arr+i*length+j);
        }
    }
}   
void ShowArray(int *arr, int length){
    int i, j;
    printf("your matrix:\n");
    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++){
            printf("%4d", *(arr+i*length+j));
        }
        printf("\n");
    }
}

int SearchingMaxElement (int *arr, int length){
    int i;
    int maxValue = *arr;
    for (i = 1; i < length; i++){
        if (maxValue < *(arr+i*length+i)){
            maxValue = *(arr+i*length+i);
        }
    }
    return maxValue;
}

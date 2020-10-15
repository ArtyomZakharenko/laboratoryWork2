#include <stdio.h>
#include <conio.h>

void FillArray (int *, int);
void ShowArray (int *, int);
int SearchingMaxElement (int *, int);
void CheckingElementUnderLine (int *, int, int);

int main()
{
    int size, maxElement;
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    int array[size][size];
 
    FillArray(array, size);
    ShowArray(array, size);
    maxElement = SearchingMaxElement(array, size);
    CheckingElementUnderLine(array, size, maxElement);
    
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
        printf("\n");
    }
    system("cls");
}   
void ShowArray(int *arr, int length){
    int i, j;
    printf("your matrix:\n\n");
    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++){
            printf("%4d", *(arr+i*length+j));
        }
        printf("\n");
    }
    printf("\n");
}

int SearchingMaxElement (int *arr, int length){
    int i;
    int maxValue = *arr;
    for (i = 1; i < length; i++){
        if (maxValue < *(arr+i*length+i)){
            maxValue = *(arr+i*length+i);
        }
    }
    printf("The max value of main line is %d\n\n", maxValue);
    return maxValue;
}

void CheckingElementUnderLine (int * arr, int length, int element){
    int i, j;
    for (i = 1; i < length; i++){
        for(j = 0; j < i; j++){
            if (*(arr+i*length+j) == element){
                printf("the same element as main line's max element has coordinates:\n");
                printf("row: %d, column %d\n\n", i+1, j+1);
            }
        }
    }
}

#include<stdio.h> 
#include <stdbool.h> 
#define SIZE 24
#define nRows 8
#define nCols 3
// PROTOTYPES
void print_array(int array[], int length);
void print_matrix(int mat[][nCols], int rows);
bool isValid(const int arr[], int length, int pos);

int main()
{
int arr[SIZE];
int arr2d[nRows][nCols];
print_matrix(arr2d,nRows);
//Call to different functions
}

void print_array(int array[], int length){
   for(int i=0;i<length; i++)
      printf("array[%d]= %d\n", i, array[i]);
}

void print_matrix(int mat[][nCols], int rows){
   for(int i=0;i<rows; i++){
    for(int j=0;j<nCols; j++)
         printf("mat[%d][%d]= %d\n", i,j, mat[i][j]);
    puts("");     
   }     
}

//FUNCTION DEFINITIONS
bool isValid(const int arr[], int length, int pos){
   if(pos >= 0 && pos < length){
      return true;
   }
   
   else{
      return false;
   }
}

void remove_element(int arr[], int length, int pos) {
    int pos;
    printf("choose the position you would like to remove");
    scanf("%d",pos);

    if (!isValid(arr, length, pos)) {
        printf("Invalid position: %d\n", pos);
        return;
    }
    for (int i = pos; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

void insert_element(int arr[], int length, int pos, int value) {
    int pos;
    printf("choose the position you would like to insert");
    scanf("%d",pos);
    if (!isValid(arr, length + 1, pos)) {
        printf("Invalid position: %d\n", pos);
        return;
    }
    for (int i = length; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
}
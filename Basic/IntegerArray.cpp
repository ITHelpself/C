#include<stdio.h>
#include<stdlib.h>
enum Sort{
    BUBBLE_SORT = 1
};
void swap(int &source, int &destination);
void setSize(int &size);
void setValues(int *array, int &size);
void printArray(int *array, int size);
void incrementBubbleSort(int *array, int size);
void decrementBubbleSort(int *array, int size);
int findMax(int *array, int size);
int findMin(int *array, int size);
int indexOf(int *array, int n, int index);
int main(){
    int size;
    int *array;
    setSize(size);
    array = (int*)malloc(size*sizeof(int));
    setValues(array,size);
    printArray(array, size);
    incrementBubbleSort(array,size);
    printArray(array,size);
    return 0;
}
void swap(int &source, int &destination){
    int temp = source;
    source = destination;
    destination = temp;
}
void setSize(int &size){
    do{
    printf("enter Size: ");
    scanf("%d",&size);
    }while (size <=0);
    
}
void setValues(int *array, int &size){
    int temp;
    printf("enter values of array:\n ");
    for(int i=0;i<size;i++){
        printf("array[%d]: ",i);
        scanf("%d",&temp);
        *(array+i) = temp;
    }
}
void printArray(int *array, int size){
    printf("\n");
    for(int i = 0;i<size;i++){
        printf("%d  ",*(array+i));
    }
}
void incrementBubbleSort(int *array, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                swap(array[i],array[j]);
            }
        }
    }
}
void decrementBubbleSort(int *array, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]<array[j]){
                swap(array[i],array[j]);
            }
        }
    }
}
int findMax(int *array, int size){
    int max = *array;
    for(int i =1 ;i<size;i++){
        if(max>*(array+i)){
            max = *(array+i);
        }
    }
    return max;
}
int findMin(int *array, int size){
 int min = *array;
    for(int i =1 ;i<size;i++){
        if(min>*(array+i)){
            min = *(array+i);
        }
    }
    return min;
}
int indexOf(int *array,int size, int index){
    int value;
    if(index >= size){
        printf("the index is out of size!");
    }
    else{
        value = *(array+ index);
    }
    return value;
}
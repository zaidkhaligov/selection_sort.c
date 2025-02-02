#include<stdio.h>
void sort_array(int array[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(array[min]>array[j]){
                min=j;
            }
        }
    int temp=array[i];
    array[i]=array[min];
    array[min]=temp;
    }
}
void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}
void read_array(int array[], int n){
    for(int i=0;i<n;i++){
        printf("element[%d]:",i);
        scanf("%d",&array[i]);
    }
}
int main(void){
    const int n=10;
    int array[n];
    int size=sizeof(array)/sizeof(array[0]);
    printf("Enter elements of array:\n");
    read_array(array,n);
    sort_array(array,size);
    print_array(array,size);
    return 0;
}
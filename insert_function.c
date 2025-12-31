#include "insert.h"

void insert_value_to_arr(int arr[],size_t size,int value,int index){
    size++;
    for(int j=size-1;j>index;j--){
        arr[j]=arr[j-1];
    }
    arr[index]=value;
}
#include "insert.h"

void arr_insert(int arr[], size_t *p_len, size_t index, int value){
    for(size_t j=*p_len-1;j>index;j--){
        arr[j]=arr[j-1];
    }
    arr[index]=value;
}
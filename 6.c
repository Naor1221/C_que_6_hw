#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void insert_value_to_arr(int arr[],size_t size,int value,int index){
    //continue from here
    
    size++;
    for(int j=size-1;j>index;j--){
        arr[j]=arr[j-1];
    }
    arr[index]=value;
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    int arr[100]={15,32,26,95,27};
    size_t size=5;
    insert_value_to_arr(arr,size,16,1);
    return 0;
}
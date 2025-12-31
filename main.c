#include "insert.h"

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    int arr[100]={15,32,26,95,27};
    size_t size=5;
    printf("%s\n","Before insert:");
    for(size_t i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    insert_value_to_arr(arr,size,16,1);

    printf("%s\n","\nAfter insert:");
    size++;
    for(size_t i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("%c",'\n');
    return 0;
}
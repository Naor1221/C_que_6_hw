#include "insert.h"

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    int arr[100]={15,32,26,95,27};
    size_t size=5;
    size_t *p_len=&size;
    printf("%s\n","Before insert:");
    for(size_t i=0;i<*p_len;i++){
        printf("%d ",arr[i]);
    }
    size++;
    arr_insert(arr,p_len,1,16);
    
    printf("%s\n","\nAfter insert:");
    
    for(size_t i=0;i<*p_len;i++){
        printf("%d ",arr[i]);
    }
    printf("%c",'\n');
    return 0;
}
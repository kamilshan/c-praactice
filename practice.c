#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr1,*ptr2;
    ptr1=malloc(sizeof(*ptr1));
    if(ptr1==NULL){
        printf("allocation failed");
        return 1;
    }
    else {
        printf("allocation successfull");
      
    }
    ptr2 =realloc(ptr1,2*sizeof(*ptr1));
    if(ptr2==NULL){
        printf("reallocation failed  ptr1 is still valid");
        return 1;
    }
    else {
        printf("ptr1 resized successfully");
        
    }
    if (ptr1=ptr2){
        printf("realloc resized the existing pointer ptr1 %p",ptr1);

    }
    else {
        printf("realloc created a new pointer and reallocated new memory at %p ",ptr2);
    }
    return 0;
}
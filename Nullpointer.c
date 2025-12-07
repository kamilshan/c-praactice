#include <stdio.h>
#include <stdlib.h>
int main(){
  int *ptr1 , *ptr2 ;
  ptr1=malloc(sizeof(*ptr1));
  ptr2=realloc(ptr1,8);
  if(ptr2==NULL){
    // if the reallocation fails
    printf("reallocation failed unable to resize the memory");
  }else {
    //if reallocation is  successful then do this bozo
    printf("reallocation is successfull yay at address %p \n",ptr2);
    ptr1=ptr2;
  }

  return 0;
}
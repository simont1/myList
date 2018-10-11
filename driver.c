#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"



int main(){
  //initialization of vars
  struct node *first;
  first = insert_front(NULL, 12);
  // first->i = 12;
  // first->next = NULL;

  //running the methods
  printf("Printing node first...\n");
  printf("Inserting values to front...\n");
  first = insert_front(first, 62);
  first = insert_front(first, 61);
  first = insert_front(first, 60);
  print_list(first); // 60, 61, 62, 12
  printf("Freeing up list...\n");
  printf("%p\n", free_list(first)); //None
  return 0;
}

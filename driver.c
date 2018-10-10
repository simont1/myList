#include <stdio.h>
#include <stdlib.h>
#include "clas.c"
#include "funcs.h"



int main(){
  //initialization of vars
  struct node first;
  struct node second;
  struct node third;
  second.i = 45;
  first.i = 12;
  first.next = &second;
  second.next = &third;
  third.i = 100;
  third.next = NULL;

  //running the methods
  printf("Printing node first...\n");
  print_list(&first); // 12 45 100
  printf("Inserting values to front...\n");
  insert_front(&first, 62);
  print_list(&first); // 62 12 45 100
  printf("Freeing up list...\n");
  free_list(&first); //None
  return 0;
}

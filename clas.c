#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

//struct node {int i; struct node *next;};
struct node placeholder;

void print_list(struct node * ok){
  printf("%d\n", ok->i);
  if(ok->next != NULL){
    return print_list(ok->next);
  }
  //prints int value, moves on to next node until NULL
}
struct node * insert_front(struct node * orig, int val){
  placeholder = *orig;
  orig->next = &placeholder;
  orig->i = val;
  return orig;
  //sets a temp var as the original, edits original to include added val and
  //sets its next to be temp.
}

struct node * free_list(struct node * orig){
  while (orig){
    struct node *temp = orig->next;
    free(orig);
    orig = temp;
  }
  return orig;
  //while not null, free up space
}

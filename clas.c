#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

//struct node {int i; struct node *next;};

void print_list(struct node * head){
	// while(head) {
	// 	printf("%d\n",head->i );
	// 	head = head->next;
  // }
  printf("%d\n", head->i);
  if(head->next != NULL){
    return print_list(head->next);
  }
  //prints int value, moves on to next node until NULL
}
struct node * insert_front(struct node * orig, int val){
  struct node *newNode = malloc(sizeof(struct node));
  newNode->next = orig;
  newNode->i = val;
  return newNode;
  //sets a temp var as the original, edits original to include added val and
  //sets its next to be temp.
}

struct node * free_list(struct node * orig){
  while (orig){
    //print_list(orig);
    struct node *temp = orig->next;
    free(orig);
    orig = temp;
  }
  return orig;
  //while not null, free up space
}

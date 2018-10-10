#include <stdlib.h>
#include <stdio.h>

struct node {int i; struct node *next;};

void print_list(struct node *ok);
struct node * insert_front(struct node * orig, int val);
struct node * free_list(struct node * orig);

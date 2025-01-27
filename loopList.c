#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int data;
  struct node* next;
}node;
node* createNode(int val){
  node* new = (node*)malloc(sizeof(node));
  new->data = val;
  new->next = NULL;
return  new;
}
void displayNodes(node* head){
  if(head == NULL){
    printf("The linked list is empty");
    return;
  }
node* traveler = head;
while (traveler != NULL){
  printf("%d",traveler->data);
  travel = traveler->next;
}
  printf("The End....");
return;
}
int main(){
  node* mainNode = createNode(10);
  return 0;
}

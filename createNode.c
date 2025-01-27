typedef struct node{
  int data;
  struct node* next;
}node;
node* createNode(int val){
  node* new = (node*)malloc(sizeof(node));
  new->dat = val;
  new->next = NULL;
return  new;
}
int main(){
  node* mainNode = createNode(10);
  return 0;
}

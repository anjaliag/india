#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node *right;};
struct node *node(int val)
{
 struct node* new=(struct node*)malloc(sizeof(struct node));
 new->data=val;
 new->left=NULL;
 new->right=NULL;
 return (new);
}
void postorder(struct node*new)
{
    if(new==NULL)
    return;
    postorder(new->left);
    postorder(new->right);
    printf("%d ",new->data);
}
void preorder(struct node*new)
{
    if(new==NULL)
        return;
  printf("%d ",new->data);
  preorder(new->left);
  preorder(new->right);
}
int main()
{
    struct node* root=node(1);
    root->left=node(2);
    root->right=node(3);
    root->left->left=node(4);
    root->left->right=node(5);

    printf("post ordered iss\n");
    postorder(root);
    printf("\n preorde is\n");
    preorder(root);
    return 0;
}





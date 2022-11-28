 #include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

//return a new node with the given value
struct node *getNode(int val)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));

    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

//inserts nodes in the binary search tree
struct node *insertNode(struct node *root, int val)
{
     if(root == NULL)
         return getNode(val);

     if(root->key < val)
         root->right = insertNode(root->right,val);

     if(root->key > val)
         root->left = insertNode(root->left,val);

     return root;
}
void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
        
    }
}

int main()
{
   struct node *root = NULL;

   int a[100], i,n;
    printf("ENTER THE NUMBER OF NODES IN TREE :");
    scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("ENTER THE DATA OF %d NODE :",i+1);
    scanf("%d",&a[i]);
    root=insertNode(root,a[i]);
   }
inOrder(root);

return 0;
}

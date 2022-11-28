#include <stdio.h>

    // storing the maximum number of nodes
    int max_node = 15;

    // array to store the tree
    //char tree[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};
    char b[100];
    

    int get_right_child(int index)
    {
        // node is not null
        // and the result must lie within the number of nodes for a complete binary tree
        if(b[index]!='\0' && ((2*index)+1)<=max_node)
            return (2*index)+1;
        // right child doesn't exist
        return -1;
    }

    int get_left_child(int index)
    {
        // node is not null
        // and the result must lie within the number of nodes for a complete binary tree
        if(b[index]!='\0' && (2*index)<=max_node)
            return 2*index;
        // left child doesn't exist
        return -1;
    }

   

    void postorder(int index)
    {
        // checking for valid index and null node
        if(index>0 && b[index]!='\0')
        {
            postorder(get_left_child(index)); //visiting left subtree
            postorder(get_right_child(index)); //visiting right subtree
            printf(" %c ",b[index]); //visiting root
        }
    }

    int main()
    {
        //char b[100];
   int i,n;
    printf("ENTER THE NUMBER OF NODES IN TREE :");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    printf("ENTER THE DATA OF %d NODE :",i);
    scanf("%s",&b[i]);

   }
        
        printf("\nPostorder:\n");
        postorder(1);
        printf("\n");
        return 0;
    }
    

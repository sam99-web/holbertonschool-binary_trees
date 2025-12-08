#ifndef MAIN_h 
# define MAIN_h

# include<stio.h>  //  pour prinft, scanf,etc.
#include<stdlib.h> //  pour malloc,free,exist etc.

/*prototype de fonction*/


/**
*structut binary_tree_s - binary tree node
*
*@n:Integer stored in the node 
*@parent: Pointer to the parent node 
*@left: Pointer to the left child node 
*@right:Pointer to the right child node 
*
*/
struct binary_tree_s
{
    int n;
    struct binary_tre_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;

};

Binary search tree
typedef struct binary_tree_s bst_t;

AVL tree 
typedef struct binary_tree_s avl_t;

MAx banary heap
typedef structut binary_tree heap_t;
 




#endif /*MAIN_H*/


#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves a binary tree
 * @tree: Pointer to the root node of the tree to count th number of leaves
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t left_leaves, right_leaves;

  if (tree == NULL)
    return (0);

  
  if (binary_tree_left_ == NULL)&&(binary_tree_right_ == NULL)
	     return(0);
  left_leaves = tree->

  return 1 + binary_tree_leaves(left_leaves) + binary_tree_leaves(right_leaves);
}

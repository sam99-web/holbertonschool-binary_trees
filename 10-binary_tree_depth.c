#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth ofa node in a binary tree
 * @tree: Pointer to the node to mesure th depth
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t left_depth, right_depth;

  if (tree == NULL)
    return (0);

  left_depth = binary_tree_depth(tree->left);
  right_depth = binary_tree_depth(tree->right);

  if (left_depth > right_depth)
    return (left_depth + 1);
  return (right_depth + 1);
}

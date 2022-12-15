#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *temp;
if (tree == NULL || tree->right == NULL)
return (NULL);

tree->right->parent = tree->parent;
tree->parent = tree->right;
temp = tree->right;
tree->right = tree->right->left;
temp->left = tree; 
return temp->parent;
}

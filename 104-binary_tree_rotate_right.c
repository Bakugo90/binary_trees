#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *temp;
if (tree == NULL || tree->left == NULL)
return (NULL);

temp = tree->left;
tree->left = tree->left->right;
tree->left->right->parent = tree;
tree->parent = temp;
temp->parent = NULL;
}

#include "binary_trees.h"

/**
 * binary_tree_delete - delete all node
 * @tree: node root
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
tree->parent = NULL;
tree->left = NULL;
tree->right = NULL;
free(tree);
tree = NULL;
}

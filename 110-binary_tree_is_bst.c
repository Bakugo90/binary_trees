#include "binary_trees.h"

int binary_tree_is_bst(const binary_tree_t *tree)
{
int n;
if (tree == NULL)
return (0);

n = tree->n;
if ((tree->left != NULL && tree->left->n >= n) || 
(tree->right != NULL && tree->right->n <= n) ||
binary_tree_is_bst(tree->left) == 0 ||
binary_tree_is_bst(tree->right) == 0)
return (0);

return (1);
}

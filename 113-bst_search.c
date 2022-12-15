#include "binary_trees.h"

bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL)
return (NULL);

if (value == tree->n)
return (tree);

if (value < tree->n)
{
if (tree->left == NULL)
return (NULL);
else
return (bst_search(tree->left, value));
}
else
{
if (tree->right == NULL)
return (NULL);
else
return (bst_search(tree->right, value));
}
}

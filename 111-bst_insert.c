#include "binary_trees.h"

bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new = malloc(sizeof(bst_t));
if (new == NULL)
return (NULL);

if (tree == NULL || *tree == NULL)
{
new = (bst_t*)(binary_tree_node(NULL, value));
*tree = new;
return (new);
}

if (value == (*tree)->n)
{
return (*tree);
}
else if (value < (*tree)->n)
{
if ((*tree)->left != NULL)
return (bst_insert((*tree)->left, value));
else
return ((bst_t *)(binary_tree_node((*tree)->left, value)));
}
else
{
if ((*tree)->right != NULL)
return (bst_insert((*tree)->right, value));
else
return ((bst_t *)(binary_tree_node((*tree)->right, value)));
}
}

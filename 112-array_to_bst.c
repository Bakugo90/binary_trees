#include "binary_trees.h"

bst_t *array_to_bst(int *array, size_t size)
{
int i;
bst_t *new, *tree;
if (array == NULL)
return (NULL);

tree = malloc(sizeof(bst_t));
if (tree == NULL)
return (NULL);

tree = bst_insert(NULL, array[0]);
for (i = 1; i < size; i++)
{
new = malloc(sizeof(bst_t));
if (new == NULL)
return (NULL);
new = bst_insert(tree, array[i]);
}
return (tree);
}

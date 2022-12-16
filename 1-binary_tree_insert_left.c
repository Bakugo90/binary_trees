#include "binary_trees.h"

/**
 * binary_tree_insert_left - new left node child
 * @parent: parent node
 * @value: node data
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
return (NULL);

new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);

new->n = value;
new->left = NULL;
new->right = NULL;
new->parent = parent;
if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;
return (new);
}

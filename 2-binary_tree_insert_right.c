#include "binary_trees.h"

/**
 * binary_tree_insert_right - new node child
 * @parent: parent node
 * @value: data
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));
if (parent)
{
if (new == NULL)
return (NULL);

new->n = value;
new->left = NULL;
new->right = NULL;
new->parent = parent;
if (parent->right != NULL)
{
new->right = parent->right;
parent->right->parent = new;
}
parent->right = new;
return (NULL);
}
return (NULL);
}

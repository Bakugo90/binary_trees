#include "binary_trees.h"

/**
 * binary_tree_insert_left - new left node child
 * @parent: parent node
 * @value: node data
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);
    binary_tree_t *new = binary_tree_node(parent, value);
    if (new == NULL)
        return (NULL); 
    if (parent->left != NULL)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }
    parent->left = new;
    return (NULL);
}

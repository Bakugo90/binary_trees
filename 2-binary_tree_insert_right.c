#include "binary_trees.h"

/**
 * binary_tree_insert_right - new node child
 * @parent: parent node
 * @value: data
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);
    binary_tree_t *new = binary_tree_node(parent, value);
    if (new == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new->right = parent->right;
        parent->right->parent = new;
    }
    parent->right = new;
    return (NULL);
}

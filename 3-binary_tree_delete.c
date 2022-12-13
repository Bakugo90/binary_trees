#include "binary_trees.h"

/**
 * binary_tree_delete - delete all node
 * @tree: node root
*/
void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *left_node, *right_node;
    if (tree == NULL)
        return;
    binary_tree_delete(tree->left);
    tree->left->parent = NULL;
    binary_tree_delete(tree->right);
    tree->right->parent = NULL;
    tree->left = NULL;
    tree->right = NULL;
    free(tree);
    tree = NULL;
}

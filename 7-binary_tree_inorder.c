#include "binary_trees.h"

/**
 * binary_tree_inorder - order traversal
 * @tree: node root
 * @func: function apply over node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    binary_tree_t *root = tree;
    if (root == NULL  || func == NULL)
        return;

    binary_tree_inorder(root->left, func);
    func(root);
    binary_tree_inorder(root->right, func);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - order traversal
 * @tree: node root
 * @func: function apply over node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    binary_tree_t *root = tree;
    if (root == NULL  || func == NULL)
        return;

    binary_tree_inorder(root->left, func);
    binary_tree_inorder(root->right, func);
    func(root);
}

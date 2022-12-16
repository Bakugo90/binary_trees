#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is leaf?
 * @node: node
 * Return: integer (0 or 1)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL)
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}

/**
 * isfull - is full?
 * @tree: node
 * Return: integer (0 or 1)
*/
int isfull(const binary_tree_t *tree)
{
if (tree)
{
if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL) ||
isfull(tree->left) == 0 ||
isfull(tree->right) == 0)
return (0);
}
return (1);
}

line_t *node_add(line_t **head, binary_tree_t *node)
{
    line_t *new = malloc(sizeof(line_t));
    if (new == NULL)
        return (NULL);
    new->node = node;
    new->next = *head;
    *head = new;
    return (new);
}

/**
 * binary_tree_preorder - pre order traversal
 * @tree: node root
 * @func: function apply over node
*/
binary_tree_t *binary_tree_add(const binary_tree_t *tree, line_t *(node_add)(line_t **, binary_tree_t *))
{
line_t *head = NULL, *nex;
if (tree == NULL  || node_add == NULL)
return (NULL);
if (binary_tree_is_leaf(tree) == 1)
    head = node_add(&head, tree);
nex = binary_tree_add(tree->left, node_add);
if (nex != NULL)
    head = nex;
nex = binary_tree_add(tree->right, node_add);
if (nex != NULL)
    head = nex;
    return head;
}

/**
 * binary_tree_depth - deep
 * @tree: node
 * Return: unsigned int
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);
return (1 + (binary_tree_depth(tree->parent)));
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    line_t *head;
    size_t n;
    if (tree = NULL || isfull(tree) == 0)
        return (0);
    head = binary_tree_add(tree, node_add);
    n = binary_tree_depth(head->node);
    head = head->next;
    while (head->next =! NULL)
    {
        if (n != binary_tree_depth(head->node))
            return (0);
        head = head->next;
    }
    return (1);
}

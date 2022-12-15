#include "binary_trees.h"

/**
 * binary_tree_t - ...
 * @param first 
 * @param second 
 * @return binary_tree_t* 
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *anc;

if (first == second && first != NULL && second != NULL)
return ((binary_tree_t *)(first));

if (first == NULL || first->parent == NULL || second == NULL || second->parent == NULL)
return (NULL);

anc = binary_trees_ancestor(first, second->parent);
if (anc != NULL)
return (anc);

anc = binary_trees_ancestor(first->parent, second);
if (anc != NULL)
return (anc);

anc = binary_trees_ancestor(first->parent, second->parent);
if (anc != NULL)
return (anc);

return (NULL);
}

#include "binary_trees.h"

line_t **node_add(line_t **head, binary_tree_t *tree)
{
line_t *current;
line_t *new = malloc(sizeof(line_t));
new->node = tree;
new->next = NULL;

if (*head == NULL || head == NULL)
*head = new;
else
{
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
}
return (head);
}

void node_free(line_t **head)
{
line_t *current;
if (head == NULL || *head == NULL)
return;
while ((*head) != NULL)
{
current = (*head);
(*head) = (*head)->next;

free(current->node);
free(current);
}
head = NULL;
}

int count(line_t **head)
{
int i = 0;
if (head == NULL || *head == NULL)
return (0);

while ((*head) != NULL)
{
i++;
(*head) = (*head)->next;
}
return (i);
}


void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
line_t **head = NULL, **head2;
if (tree == NULL || func == NULL)
return;
func(tree->n);
if (tree->left != NULL)
head = node_add(head, tree->left);
if (tree->right != NULL)
head = node_add(head, tree->right);

while (count(head) > 1 && (*head)->next != NULL &&
(*head)->next->node->left != NULL &&
(*head)->next->node->right != NULL)
{
while ((*head) != NULL)
{
func((*head)->node->n);
(*head) = (*head)->next;
}

head2 = NULL;
while ((*head) != NULL)
{
if ((*head)->node->left != NULL)
head2 = node_add(head2, (*head)->node->left);
if ((*head)->node->right != NULL)
head2 = node_add(head2, (*head)->node->right);
(*head) = (*head)->next;
}
free(head);
head = head2;
}
}

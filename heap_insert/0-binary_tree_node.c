#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
struct binary_tree_s *binary_tree_node(struct binary_tree_s *parent, int value)
{
    struct binary_tree_s *new_node;

    new_node = malloc(sizeof(struct binary_tree_s));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

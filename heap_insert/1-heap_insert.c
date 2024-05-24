#include "binary_trees.h"

/**
 * heap_insert - inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: value store in the node to be inserted
 *
 * Return: pointer to the inserted node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
    heap_t *node = NULL;

    if (*root == NULL)
    {
        *root = binary_tree_node(NULL, value);
        return *root;
    }

    node = *root;
    while (1)
    {
        if (!node->left)
        {
            node->left = binary_tree_node(node, value);
            return node->left;
        }
        else if (!node->right)
        {
            node->right = binary_tree_node(node, value);
            return node->right;
        }
        else
        {
            if (rand() % 2)
                node = node->left;
            else
                node = node->right;
        }
    }
}

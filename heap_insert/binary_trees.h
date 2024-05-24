#ifndef binary_trees_h
#define binary_trees_h
#include <stdlib.h>

typedef struct binary_tree_s
{
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif

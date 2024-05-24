
## Heap Insert

### Description
0. New nodemandatoryWrite a function that creates a binary tree node:Prototype:binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);parentis a pointer to the parent node of the node to createvalueis the value to put in the new nodeWhen created, a node does not have any childrenYour function must return a pointer to the new node, orNULLon failurealex@/tmp/binary_trees$ cat 0-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * _binary_tree_delete - Deallocate a binary tree
 *
 * @tree: Pointer to the root of the tree to delete
 */
static void _binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        _binary_tree_delete(tree->left);
        _binary_tree_delete(tree->right);
        free(tree);
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    _binary_tree_delete(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
alex@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
alex@/tmp/binary_trees$Repo:GitHub repository:holbertonschool-interviewDirectory:heap_insertFile:0-binary_tree_node.cHelp×Students who are done with "0. New node"Review your work×Correction of "0. New node"Some checks are failing. Make sure you fix them before starting a new reviewYou got this!Start a new testCloseResult:Commit used:URL:Click hereID:23a5645f4ccd732381f2fc4b25ee84b0274ea044Author:JRMC-PRSubject:Adds bynary tree taskDate:2024-05-24 17:12:08 -0400README is present and not emptyFile is presentCompile programCorrect output - case: Creates a single nodeCorrect output - case: Creates a node plus its left and right childrenCorrect output - case: Creates a node, its left and right children, plus the left and right children of the previous left and rightHandledmallocreturnBetty coding styleBetty documentation styleRequirement successRequirement failCode successCode failEfficiency successEfficiency failText answer successText answer failSkipped - Previous check failedGet a sandbox0/6pts

1. Heap - InsertmandatoryWrite a function that inserts a value into a Max Binary Heap:Prototype:heap_t *heap_insert(heap_t **root, int value);rootis a double pointer to the root node of the Heapvalueis the value to store in the node to be insertedYour function must return a pointer to the inserted node, orNULLon failureIf the address stored inrootisNULL, the created node must become the root node.You have to respect aMax HeaporderingYou are allowed to have up to6functions in your fileYour file0-binary_tree_node.cwill be compiled during the correctionalex@/tmp/binary_trees$ cat 1-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * _binary_tree_delete - Deallocate a binary tree
 *
 * @tree: Pointer to the root of the tree to delete
 */
static void _binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        _binary_tree_delete(tree->left);
        _binary_tree_delete(tree->right);
        free(tree);
    }
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    heap_t *root;
    heap_t *node;

    root = NULL;
    node = heap_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 402);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 12);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 46);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 128);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 256);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 512);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    node = heap_insert(&root, 50);
    printf("\nInserted: %d\n", node->n);
    binary_tree_print(root);
    _binary_tree_delete(root);
    return (0);
}

alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-heap_insert.c 0-binary_tree_node.c -o 1-heap_insert
alex@/tmp/binary_trees$ ./1-heap_insert
Inserted: 98
(098)

Inserted: 402
  .--(402)
(098)

Inserted: 12
  .--(402)--.
(098)     (012)

Inserted: 46
       .--(402)--.
  .--(098)     (012)
(046)

Inserted: 128
       .-------(402)--.
  .--(128)--.       (012)
(046)     (098)

Inserted: 256
       .-------(402)-------.
  .--(128)--.         .--(256)
(046)     (098)     (012)

Inserted: 512
       .-------(512)-------.
  .--(128)--.         .--(402)--.
(046)     (098)     (012)     (256)

Inserted: 50
            .-------(512)-------.
       .--(128)--.         .--(402)--.
  .--(050)     (098)     (012)     (256)
(046)
alex@/tmp/binary_trees$Repo:GitHub repository:holbertonschool-interviewDirectory:heap_insertFile:1-heap_insert.c, 0-binary_tree_node.cHelp×Students who are done with "1. Heap - Insert"Review your work×Correction of "1. Heap - Insert"Start a new testCloseRequirement successRequirement failCode successCode failEfficiency successEfficiency failText answer successText answer failSkipped - Previous check failedGet a sandbox0/8pts

**Repository:**
- GitHub repository: `holbertonschool-machine_learning`
- Directory: `supervised_learning/classification`
- File: `Heap_Insert.md`

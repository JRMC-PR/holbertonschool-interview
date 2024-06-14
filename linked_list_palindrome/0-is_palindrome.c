#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to head of list
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(listint_t **head){
    listint_t *current = *head;
    int i = 0, j = 0, k = 0, l = 0;
    int arr[10000];

    if (*head == NULL)
        return (1);

    while (current != NULL)
    {
        arr[i] = current->n;
        current = current->next;
        i++;
    }
    i--;
    j = i;
    while (k < j)
    {
        if (arr[k] != arr[j])
            return (0);
        k++;
        j--;
    }
    return (1);
}

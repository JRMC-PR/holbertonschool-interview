#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int check_cycle(listint_t *list) {
    listint_t *slow = list, *fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next; // Move slow pointer by one
        fast = fast->next->next; // Move fast pointer by two

        if (slow == fast) {
            // The pointers have met, there is a cycle
            return 1;
        }
    }

    // If we've reached here, fast has encountered NULL, no cycle
    return 0;
}

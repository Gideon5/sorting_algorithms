#include <stdio.h>  // Include the necessary header file

#include "sort.h"

/** 
 * insertion_sort_list - insertion sorting algorithm 
 * @list: linked list to sort 
 */
void insertion_sort_list(listint_t **list) {
    listint_t *tmp;
    int n;
    
    if (!list)
        return;
    
    tmp = *list;
    while (tmp) {
        while (tmp) {
            if (tmp->next) {
                if (tmp->n > tmp->next->n) {
                    n = tmp->n;
                    *(int *)&tmp->n = tmp->next->n;
                    *(int *)&tmp->next->n = n;
                    tmp = *list;
                    print_list(*list);
                    break;
                }
            }
            tmp = tmp->next;
        }
    }
}

/** 
 * print_list - prints all the elements of a listint_t list 
 * @h: pointer to head of list 
 */
void print_list(const listint_t *h) {
    while (h) {
        printf("%d", h->n);
        if (h->next)
            printf(", ");
        h = h->next;
    }
    printf("\n");
}


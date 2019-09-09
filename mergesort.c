/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergesort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:21:02 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/08 09:02:51 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C code for linked list merged sort 
#include <stdio.h> 
#include <stdlib.h> 

/* Link list node */
typedef struct		s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

/* function prototypes */
t_list		*SortedMerge(t_list* a, t_list* b); 
void		FrontBackSplit(t_list* source, 
t_list **head, t_list **tail); 

/* sorts the linked list by changing next pointers (not data) */
void MergeSort(t_list** headRef) 
{ 
	t_list* head = *headRef; 
	t_list* a; 
	t_list* b; 

	/* Base case -- length 0 or 1 */
	if ((head == NULL) || (head->next == NULL))
	{
		return;
	}

	/* Split head into 'a' and 'b' sublists */
	Head_Tail_Split(head, &a, &b);

	/* Recursively sort the sublists */
	MergeSort(&a);
	MergeSort(&b);

	/* answer = merge the two sorted lists together */
	*headRef = SortedMerge(a, b);
}

/* See https:// www.geeksforgeeks.org/?p=3622 for details of this 
function */
t_list* SortedMerge(t_list* a, t_list* b) 
{ 
	t_list* result = NULL; 

	/* Base cases */
	if (a == NULL) 
		return (b); 
	else if (b == NULL) 
		return (a); 

	/* Pick either a or b, and recur */
	if (a->value <= b->value) { 
		result = a; 
		result->next = SortedMerge(a->next, b); 
	} 
	else { 
		result = b; 
		result->next = SortedMerge(a, b->next); 
	} 
	return (result); 
} 

/* UTILITY FUNCTIONS */
/* Split the nodes of the given list into front and back halves, 
	and return the two lists using the reference parameters. 
	If the length is odd, the extra node should go in the front list. 
	Uses the fast/slow pointer strategy. */
void Head_Tail_Split(t_list *source, t_list **head, t_list **tail)
{ 
	t_list* fast; 
	t_list* slow; 
	slow = source; 
	fast = source->next; 

	/* Advance 'fast' two nodes, and advance 'slow' one node */
	while (fast != NULL) { 
		fast = fast->next; 
		if (fast != NULL) { 
			slow = slow->next; 
			fast = fast->next; 
		} 
	} 

	/* 'slow' is before the midpoint in the list, so split it in two 
	at that point. */
	*head = source; 
	*tail = slow->next; 
	slow->next = NULL; 
} 

/* Function to print nodes in a given linked list */
void printList(t_list* node) 
{ 
	while (node != NULL) { 
		printf("%d ", node->value); 
		node = node->next; 
	} 
} 

/* Function to insert a node at the beginging of the linked list */
void push(t_list** head_ref, int new_data) 
{ 
	/* allocate node */
	t_list* new_node = (t_list*)malloc(sizeof(t_list)); 

	/* put in the data */
	new_node->value = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Drier program to test above functions*/
int main() 
{ 
	/* Start with the empty list */
	t_list* res = NULL; 
	t_list* a = NULL; 

	/* Let us create a unsorted linked lists to test the functions 
Created lists shall be a: 2->3->20->5->10->15 */
	push(&a, 15); 
	push(&a, 10); 
	push(&a, 5); 
	push(&a, 20); 
	push(&a, 3); 
	push(&a, 2); 

	/* Sort the above created Linked List */
	MergeSort(&a); 

	printf("Sorted Linked List is: \n"); 
	printList(a); 

	getchar(); 
	return 0; 
} 

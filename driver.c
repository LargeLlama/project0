//Rubin Peci and Taaseen Ali
//Period 5
//YUH DEXTER!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main()
{
	struct node *node0 = malloc(sizeof(struct node));
	struct node *node1 = malloc(sizeof(struct node));
	struct node *node2 = malloc(sizeof(struct node));

	strcpy(node0->name, "JAPAN");
	strcpy(node0->artist, "Famous Dex");
	node0->next = node1; 

	strcpy(node1->name, "STOOPID");
	strcpy(node1->artist, "6ix9ine");
	node1->next = node2;

	strcpy(node2->name, "Old Money");
	strcpy(node2->artist, "Playboi Carti");
	node2->next = NULL;

	struct node *new_node0 = insert_front(node0, "R.I.P", "Playboi Cart");

	print_list(new_node0);

	printf("\nFreeing the list now!\n");
	new_node0 = free_list(new_node0);

	print_list(new_node0);

	return 0;
}

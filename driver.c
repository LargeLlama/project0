//Rubin Peci and Taaseen Ali
//Period 5
//YUH DEXTER!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main()
{
	struct node * list = malloc(sizeof(struct node));
	strcpy(list->artist, "z");
	strcpy(list->song, "z");
	
	list = insert_front(list, "c", "c");
	list = insert_front(list, "b", "b");
	//	list = insert_front(list, "a", "a");

	list = insert_order(list, "s", "s");
	list = insert_order(list, "a", "a");

	/*
	insert_order(list, "Old Money", "Playboi Carti");
	insert_order(list, "A", "A");
	insert_order(list, "B", "B");
	*/
	print_list(list);

	//printf("\nFreeing the list now!\n");
	//new_node0 = free_list(new_node0);

	return 0;
}

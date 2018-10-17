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
	strcpy(list->artist, "a");
	strcpy(list->song, "a");

	insert_order(list, "JAPAN", "Famous Dex");
	insert_order(list, "STOOPID", "6ix9ine");
	insert_order(list, "Old Money", "Playboi Carti");
	insert_order(list, "A", "A");
	insert_order(list, "B", "B");
	
	print_list(list);

	//printf("\nFreeing the list now!\n");
	//new_node0 = free_list(new_node0);

	return 0;
}

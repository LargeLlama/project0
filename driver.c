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
	strcpy(list->song, "Old Money");
	strcpy(list->artist, "Playboi Carti");
	list->next = NULL;

	list = insert_order(list, "6ix9ine", "STOOPID");
	list = insert_order(list, "Playboi Carti", "R.I.P");
	list = insert_order(list, "Famous Dex", "JAPAN");
	list = insert_order(list, "Playboi Carti", "Magnolia");
	list = insert_order(list, "6ix9ine", "GUMMO");


	print_list(list);

	printf("looking for first song by Playboi Carti: %s", find_artist(list, "Playboi Carti"));
	//printf("\nFreeing the list now!\n");
	//new_node0 = free_list(new_node0);

	return 0;
}

//Rubin Peci and Taaseen Ali
//Period 5
//YUH DEXTER!

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main()
{
	struct node *node0 = malloc(sizeof(struct node));
	struct node *node1 = malloc(sizeof(struct node));
	struct node *node2 = malloc(sizeof(struct node));

	char song_name[50] = "JAPAN";
	char song_artist[50] = "Famous Dex";
	*node0->name = *song_name; 
	*node0->artist = *song_artist;
	node0->next = node1; 

	*node1->name = "STOOPID";
	*node1->artist = "6ix9ine";
	node1->next = node2;

	*node2->name = "Old Money";
	*node2->artist = "Playboi Carti";
	node2->next = NULL;

	print_list(node0);

	return 0;
}

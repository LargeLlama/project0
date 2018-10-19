//Rubin Peci and Taaseen Ali
//Period 5
//YUH DEXTER!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "node.h"
#include "library.h"
/*
int main()
{
  struct node * list;

  list = insert_order(list, "a", "b");
  print_list(list);
  list = insert_order(list, "Playboi Carti", "R.I.P");
  print_list(list);
  list = insert_order(list, "Playboi Carti", "Magnolia");
  print_list(list);
  list = insert_order(list, "Famous Dex", "JAPAN");
  print_list(list);
  list = insert_order(list, "sixnine", "STOOPID");
  print_list(list);
  list = insert_order(list, "sixnine", "GUMMO");
  list = insert_order(list, "a", "p");
  list = insert_order(list, "a", "z");
  list = insert_order(list, "qq", "l");
  list = insert_order(list, "nub", "bbbb");
  list = insert_order(list, "qq", "tt");
  list = insert_order(list, "nub", "t");
  list = insert_order(list, "sixnine", "MUMMO");
  print_list(list);
  remove_song(list, list->next);
  print_list(list);
   
  printf("looking for first song by Playboi Carti: %s\n", find_artist(list, "Playboi Carti"));
  
  printf("random: %s", find_random(list)->artist);
  
  //printf("\nFreeing the list now!\n");
  //new_node0 = free_list(new_node0);
  
  return 0;
}
*/

int main(){
  srand(time(NULL));
  struct node * table[27];
  init_table(table);
  insert(table, "a", "ab");
  insert(table, "a", "s");
  insert(table, "a", "b");
  insert(table, "a", "aa");
  insert(table, "ab" , "z");
  print_list(table[0]);
  printf("%s\n", search(table, "ab", "z")->artist);
  printf("%s", search_artist(table, "ab")->song);
  print_alpha(table, 'a');
  print_artist(table, "a");
  print_all(table);
  shuffle(table);
  delete(table, "a", "aa");
  print_alpha(table, 'a');
  clear(table);
  print_all(table);
  return 0;
}


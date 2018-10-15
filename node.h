struct node { char name[100]; char artist[100]; struct node *next; };

void print_list(struct node *list);
struct node * insert_front(struct node *list, char _name[100], char _artist[100]);
struct node * free_list(struct node *list);

#include "chainlist.h"

sl_node *sl_new_node(void *data, sl_node *next) {
	sl_node *n;

	n = (sl_node *) malloc(sizeof(sl_node));
	if (n) {
		n->data = data;
		n->next = next;
	}

	return n;
}

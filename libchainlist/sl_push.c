#include "chainlist.h"

void *sl_push(list *l, void *data) {
	sl_node *n;

	n = sl_new_node(data, l->prime);

	if (n) {
		l->prime = n;
		l->size++;
		return data;
	}

	return NULL;
}



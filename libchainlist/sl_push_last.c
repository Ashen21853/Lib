#include "chainlist.h"

void *sl_push_last(list *l, void *data) {
	sl_node *n;
	sl_node *w;

	w = sl_get_last_node(l);

	if (w == NULL)
		return NULL;

	n = sl_new_node(data, NULL);

	w->next = n;

	if (n && w) {
		l->size++;
		return data;
	}

	return NULL;
}



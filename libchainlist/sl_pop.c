#include "chainlist.h"

void *sl_pop(list *l) {
	sl_node *n;
	void *data_ret = NULL;

	if (l == NULL)
		return NULL;

	if (l->prime == NULL)
		return NULL;

	n = l->prime;
	data_ret = n->data;

	l->prime = n->next;
	l->size--;

	free(n);
	
	return data_ret;
}

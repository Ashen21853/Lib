#include "chainlist.h"

void *sl_pop_last(list *l) {
	sl_node *n, *m;
	void *data_ret = NULL;

	if (l == NULL)
		return NULL;

	if (l->prime == NULL)
		return NULL;

	n = sl_get_last_node(l);
	m = l->prime;

	while (m->next != n)
		m = m->next;
	
	m->next = NULL;
	data_ret = n->data;
	l->size--;

	free(n);
	
	return data_ret;
}

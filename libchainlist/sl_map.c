#include "chainlist.h"

void sl_map(list *l) {
	sl_node *n;

	if (l == NULL)
		return;

	fprintf(stderr, "Map list (%d element)\n", l->size);
	n = l->prime;

	if (n == NULL)
		return;

	while (n != NULL) {
		fprintf(stderr, "(%p) data -> %p | next-> %p\n", n, 
				n->data, n->next);
		n=n->next;
	}
}

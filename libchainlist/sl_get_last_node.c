#include "chainlist.h"

sl_node *sl_get_last_node(list *l) {
	sl_node *n;

	if (l) {
		if (l->prime) {
			n = l->prime;

			while (n->next != NULL)
				n = n->next;

			return n;
		}
	}

	return NULL;
}

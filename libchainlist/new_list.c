#include "chainlist.h"

list *new_list() {
	list *l;

	l = (list *) malloc(sizeof(list));

	if (l) {
		l->prime = NULL;
		l->size = 0;
	}

	return l;
}

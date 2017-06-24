#include "chainlist.h"

void sl_free_pop_last(list *l) {
	void *data;

	data = sl_pop_last(l);

	free(data);
}

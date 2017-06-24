#include "chainlist.h"

void sl_free_pop(list *l) {
	void *data;

	data = sl_pop(l);

	free(data);
}

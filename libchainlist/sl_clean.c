#include "chainlist.h"

void sl_clean(list *l) {
	if (l == NULL)
		return;

	while (l->prime != NULL)
		sl_pop(l);
}

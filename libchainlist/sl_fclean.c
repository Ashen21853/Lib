#include "chainlist.h"

void sl_fclean(list *l) {
	if (l == NULL)
		return;

	while (l->prime != NULL)
		free(sl_pop(l));
}

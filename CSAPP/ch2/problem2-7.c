#include "show_bytes.h"
#include <string.h>

int main() {
	const char *m = "mnopqr";
	show_bytes((byte_pointer) m, strlen(m) + 1);

	return 0;
}

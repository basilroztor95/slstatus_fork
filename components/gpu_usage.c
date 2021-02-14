
#include <stddef.h>

#include "../util.h"


#if defined(__linux__)
	#include <stdint.h>

	const char *
	gpu_usage(const char *file)
	{
		uintmax_t gpu_usage;

		if (pscanf(file, "%ju", &gpu_usage) != 1) {
			return NULL;
		}

		return bprintf("%ju", gpu_usage);
	}
#endif

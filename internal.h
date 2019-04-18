/* See LICENSE file for copyright and license details. */
#include "liberror-gpgme.h"

#include <liberror.h>
#include <errno.h>
#include <stddef.h>


#if defined(__GNUC__)
# define GCC_ATTRIBUTES(...) __attribute__((__VA_ARGS__))
#else
# define GCC_ATTRIBUTES(...)
#endif

#define HIDDEN GCC_ATTRIBUTES(__visibility__("hidden"))


#define liberror_gpgme_set_error(FUNC, CODE)\
	do {\
		char desc__[256];\
		int saved_errno__ = errno;\
		liberror_save_backtrace(NULL);\
		gpgme_strerror_r(CODE, desc__, sizeof(desc__));\
		desc__[255] = '\0';\
		liberror_set_error(desc__, FUNC, "libgpg-error", CODE);\
		errno = saved_errno__;\
	} while (0)

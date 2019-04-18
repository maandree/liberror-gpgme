/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_set_ctx_flag(gpgme_ctx_t ctx, const char *name, const char *value)
{
	gpgme_error_t ret = gpgme_set_ctx_flag(ctx, name, value);
	if (ret)
		liberror_gpgme_set_error("gpgme_set_ctx_flag", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_set_locale(gpgme_ctx_t ctx, int category, const char *value)
{
	gpgme_error_t ret = gpgme_set_locale(ctx, category, value);
	if (ret)
		liberror_gpgme_set_error("gpgme_set_locale", ret);
	return ret;
}

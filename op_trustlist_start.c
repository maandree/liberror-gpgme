/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_trustlist_start(gpgme_ctx_t ctx, const char *pattern, int max_level)
{
	gpgme_error_t ret = gpgme_op_trustlist_start(ctx, pattern, max_level);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_trustlist_start", ret);
	return ret;
}

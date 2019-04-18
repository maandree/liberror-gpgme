/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_new(gpgme_ctx_t *ctx)
{
	gpgme_error_t ret = gpgme_new(ctx);
	if (ret)
		liberror_gpgme_set_error("gpgme_new", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_get_key(gpgme_ctx_t ctx, const char *fpr, gpgme_key_t *r_key, int secret)
{
	gpgme_error_t ret = gpgme_get_key(ctx, fpr, r_key, secret);
	if (ret)
		liberror_gpgme_set_error("gpgme_get_key", ret);
	return ret;
}

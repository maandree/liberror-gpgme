/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_createsubkey(gpgme_ctx_t ctx, gpgme_key_t key, const char *algo,
                               unsigned long reserved, unsigned long expires, unsigned int flags)
{
	gpgme_error_t ret = gpgme_op_createsubkey(ctx, key, algo, reserved, expires, flags);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_createsubkey", ret);
	return ret;
}

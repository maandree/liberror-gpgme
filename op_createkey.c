/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_createkey(gpgme_ctx_t ctx, const char *userid, const char *algo, unsigned long reserved,
                            unsigned long expires, gpgme_key_t certkey, unsigned int flags)
{
	gpgme_error_t ret = gpgme_op_createkey(ctx, userid, algo, reserved, expires, certkey, flags);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_createkey", ret);
	return ret;
}

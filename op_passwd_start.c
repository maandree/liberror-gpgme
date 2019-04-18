/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_passwd_start(gpgme_ctx_t ctx, gpgme_key_t key, unsigned int flags)
{
	gpgme_error_t ret = gpgme_op_passwd_start(ctx, key, flags);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_passwd_start", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_revuid(gpgme_ctx_t ctx, gpgme_key_t key, const char *userid, unsigned int reserved)
{
	gpgme_error_t ret = gpgme_op_revuid(ctx, key, userid, reserved);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_revuid", ret);
	return ret;
}

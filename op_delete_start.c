/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_delete_start(gpgme_ctx_t ctx, const gpgme_key_t key, int allow_secret)
{
	gpgme_error_t ret = gpgme_op_delete_start(ctx, key, allow_secret);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_delete_start", ret);
	return ret;
}

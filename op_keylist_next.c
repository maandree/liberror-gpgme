/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_keylist_next(gpgme_ctx_t ctx, gpgme_key_t *r_key)
{
	gpgme_error_t ret = gpgme_op_keylist_next(ctx, r_key);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_keylist_next", ret);
	return ret;
}

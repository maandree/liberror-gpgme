/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_interact(gpgme_ctx_t ctx, gpgme_key_t key, unsigned int flags,
                           gpgme_interact_cb_t fnc, void *fnc_value, gpgme_data_t out)
{
	gpgme_error_t ret = gpgme_op_interact(ctx, key, flags, fnc, fnc_value, out);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_interact", ret);
	return ret;
}

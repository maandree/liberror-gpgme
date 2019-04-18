/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_keylist_from_data_start(gpgme_ctx_t ctx, gpgme_data_t data, int reserved)
{
	gpgme_error_t ret = gpgme_op_keylist_from_data_start(ctx, data, reserved);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_keylist_from_data_start", ret);
	return ret;
}

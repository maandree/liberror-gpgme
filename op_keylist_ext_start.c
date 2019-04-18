/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_keylist_ext_start(gpgme_ctx_t ctx, const char *pattern[], int secret_only, int reserved)
{
	gpgme_error_t ret = gpgme_op_keylist_ext_start(ctx, pattern, secret_only, reserved);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_keylist_ext_start", ret);
	return ret;
}

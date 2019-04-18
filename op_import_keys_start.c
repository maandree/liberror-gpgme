/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_import_keys_start(gpgme_ctx_t ctx, gpgme_key_t keys[])
{
	gpgme_error_t ret = gpgme_op_import_keys_start(ctx, keys);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_import_keys_start", ret);
	return ret;
}

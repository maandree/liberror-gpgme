/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_export_keys_start(gpgme_ctx_t ctx, gpgme_key_t keys[], gpgme_export_mode_t mode, gpgme_data_t keydata)
{
	gpgme_error_t ret = gpgme_op_export_keys_start(ctx, keys, mode, keydata);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_export_keys_start", ret);
	return ret;
}

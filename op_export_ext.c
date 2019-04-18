/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_export_ext(gpgme_ctx_t ctx, const char *pattern[], gpgme_export_mode_t mode, gpgme_data_t keydata)
{
	gpgme_error_t ret = gpgme_op_export_ext(ctx, pattern, mode, keydata);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_export_ext", ret);
	return ret;
}

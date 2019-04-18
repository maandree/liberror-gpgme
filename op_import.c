/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_import(gpgme_ctx_t ctx, gpgme_data_t keydata)
{
	gpgme_error_t ret = gpgme_op_import(ctx, keydata);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_import", ret);
	return ret;
}

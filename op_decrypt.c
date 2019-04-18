/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_decrypt(gpgme_ctx_t ctx, gpgme_data_t cipher, gpgme_data_t plain)
{
	gpgme_error_t ret = gpgme_op_decrypt(ctx, cipher, plain);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_decrypt", ret);
	return ret;
}

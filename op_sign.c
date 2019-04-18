/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_sign(gpgme_ctx_t ctx, gpgme_data_t plain, gpgme_data_t sig, gpgme_sig_mode_t mode)
{
	gpgme_error_t ret = gpgme_op_sign(ctx, plain, sig, mode);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_sign", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_verify(gpgme_ctx_t ctx, gpgme_data_t sig, gpgme_data_t signed_text, gpgme_data_t plaintext)
{
	gpgme_error_t ret = gpgme_op_verify(ctx, sig, signed_text, plaintext);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_verify", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_encrypt_sign_ext_start(gpgme_ctx_t ctx, gpgme_key_t recp[], const char *recpstring,
                                         gpgme_encrypt_flags_t flags, gpgme_data_t plain, gpgme_data_t cipher)
{
	gpgme_error_t ret = gpgme_op_encrypt_sign_ext_start(ctx, recp, recpstring, flags, plain, cipher);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_encrypt_sign_ext_start", ret);
	return ret;
}

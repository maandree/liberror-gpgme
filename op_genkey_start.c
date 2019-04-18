/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_genkey_start(gpgme_ctx_t ctx, const char *parms, gpgme_data_t pubkey, gpgme_data_t seckey)
{
	gpgme_error_t ret = gpgme_op_genkey_start(ctx, parms, pubkey, seckey);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_genkey_start", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_signers_add(gpgme_ctx_t ctx, const gpgme_key_t key)
{
	gpgme_error_t ret = gpgme_signers_add(ctx, key);
	if (ret)
		liberror_gpgme_set_error("gpgme_signers_add", ret);
	return ret;
}

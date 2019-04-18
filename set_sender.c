/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_set_sender(gpgme_ctx_t ctx, const char *address)
{
	gpgme_error_t ret = gpgme_set_sender(ctx, address);
	if (ret)
		liberror_gpgme_set_error("gpgme_set_sender", ret);
	return ret;
}

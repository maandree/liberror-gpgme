/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_set_pinentry_mode(gpgme_ctx_t ctx, gpgme_pinentry_mode_t mode)
{
	gpgme_error_t ret = gpgme_set_pinentry_mode(ctx, mode);
	if (ret)
		liberror_gpgme_set_error("gpgme_set_pinentry_mode", ret);
	return ret;
}

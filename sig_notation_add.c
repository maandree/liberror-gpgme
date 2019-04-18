/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_sig_notation_add(gpgme_ctx_t ctx, const char *name, const char *value, gpgme_sig_notation_flags_t flags)
{
	gpgme_error_t ret = gpgme_sig_notation_add(ctx, name, value, flags);
	if (ret)
		liberror_gpgme_set_error("gpgme_sig_notation_add", ret);
	return ret;
}

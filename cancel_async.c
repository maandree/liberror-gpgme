/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_cancel_async(gpgme_ctx_t ctx)
{
	gpgme_error_t ret = gpgme_cancel_async(ctx);
	if (ret)
		liberror_gpgme_set_error("gpgme_cancel_async", ret);
	return ret;
}

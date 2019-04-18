/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_trustlist_end(gpgme_ctx_t ctx)
{
	gpgme_error_t ret = gpgme_op_trustlist_end(ctx);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_trustlist_end", ret);
	return ret;
}

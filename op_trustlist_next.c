/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_trustlist_next(gpgme_ctx_t ctx, gpgme_trust_item_t *r_item)
{
	gpgme_error_t ret = gpgme_op_trustlist_next(ctx, r_item);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_trustlist_next", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_set_sub_protocol(gpgme_ctx_t ctx, gpgme_protocol_t proto)
{
	gpgme_error_t ret = gpgme_set_sub_protocol(ctx, proto);
	if (ret)
		liberror_gpgme_set_error("gpgme_set_sub_protocol", ret);
	return ret;
}

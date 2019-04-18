/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_getauditlog_start(gpgme_ctx_t ctx, gpgme_data_t output, unsigned int flags)
{
	gpgme_error_t ret = gpgme_op_getauditlog_start(ctx, output, flags);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_getauditlog_start", ret);
	return ret;
}

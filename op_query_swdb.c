/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_query_swdb(gpgme_ctx_t ctx, const char *name, const char *iversion, unsigned int reserved)
{
	gpgme_error_t ret = gpgme_op_query_swdb(ctx, name, iversion, reserved);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_query_swdb", ret);
	return ret;
}

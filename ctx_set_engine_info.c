/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_ctx_set_engine_info(gpgme_ctx_t ctx, gpgme_protocol_t proto, const char *file_name, const char *home_dir)
{
	gpgme_error_t ret = gpgme_ctx_set_engine_info(ctx, proto, file_name, home_dir);
	if (ret)
		liberror_gpgme_set_error("gpgme_ctx_set_engine_info", ret);
	return ret;
}

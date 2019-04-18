/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_spawn_start(gpgme_ctx_t ctx, const char *file, const char *argv[], gpgme_data_t datain,
                              gpgme_data_t dataout, gpgme_data_t dataerr, unsigned int flags)
{
	gpgme_error_t ret = gpgme_op_spawn_start(ctx, file, argv, datain, dataout, dataerr, flags);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_spawn_start", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_conf_dir(gpgme_ctx_t ctx, const char *what, char **result)
{
	gpgme_error_t ret = gpgme_op_conf_dir(ctx, what, result);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_conf_dir", ret);
	return ret;
}

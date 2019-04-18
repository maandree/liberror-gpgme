/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_conf_load(gpgme_ctx_t ctx, gpgme_conf_comp_t *conf_p)
{
	gpgme_error_t ret = gpgme_op_conf_load(ctx, conf_p);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_conf_load", ret);
	return ret;
}

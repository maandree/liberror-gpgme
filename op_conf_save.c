/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_conf_save(gpgme_ctx_t ctx, gpgme_conf_comp_t comp)
{
	gpgme_error_t ret = gpgme_op_conf_save(ctx, comp);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_conf_save", ret);
	return ret;
}

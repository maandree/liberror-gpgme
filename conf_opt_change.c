/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_conf_opt_change(gpgme_conf_opt_t opt, int reset, gpgme_conf_arg_t arg)
{
	gpgme_error_t ret = gpgme_conf_opt_change(opt, reset, arg);
	if (ret)
		liberror_gpgme_set_error("gpgme_conf_opt_change", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_conf_arg_new(gpgme_conf_arg_t *arg_p, gpgme_conf_type_t type, const void *value)
{
	gpgme_error_t ret = gpgme_conf_arg_new(arg_p, type, value);
	if (ret)
		liberror_gpgme_set_error("gpgme_conf_arg_new", ret);
	return ret;
}

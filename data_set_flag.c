/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_set_flag(gpgme_data_t dh, const char *name, const char *value)
{
	gpgme_error_t ret = gpgme_data_set_flag(dh, name, value);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_set_flag", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_mem(gpgme_data_t *r_dh, const char *buffer, size_t size, int copy)
{
	gpgme_error_t ret = gpgme_data_new_from_mem(r_dh, buffer, size, copy);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_mem", ret);
	return ret;
}

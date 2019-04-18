/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_file(gpgme_data_t *r_dh, const char *fname, int copy)
{
	gpgme_error_t ret = gpgme_data_new_from_file(r_dh, fname, copy);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_file", ret);
	return ret;
}

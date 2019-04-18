/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new(gpgme_data_t *r_dh)
{
	gpgme_error_t ret = gpgme_data_new(r_dh);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new", ret);
	return ret;
}

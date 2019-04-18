/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_set_file_name(gpgme_data_t dh, const char *file_name)
{
	gpgme_error_t ret = gpgme_data_set_file_name(dh, file_name);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_set_file_name", ret);
	return ret;
}

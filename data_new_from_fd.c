/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_fd(gpgme_data_t *dh, int fd)
{
	gpgme_error_t ret = gpgme_data_new_from_fd(dh, fd);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_fd", ret);
	return ret;
}

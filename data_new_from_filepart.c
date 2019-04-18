/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_filepart(gpgme_data_t *r_dh, const char *fname, FILE *fp, off_t offset, size_t length)
{
	gpgme_error_t ret = gpgme_data_new_from_filepart(r_dh, fname, fp, offset, length);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_filepart", ret);
	return ret;
}

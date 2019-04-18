/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_stream(gpgme_data_t *dh, FILE *stream)
{
	gpgme_error_t ret = gpgme_data_new_from_stream(dh, stream);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_stream", ret);
	return ret;
}

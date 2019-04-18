/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_set_encoding(gpgme_data_t dh, gpgme_data_encoding_t enc)
{
	gpgme_error_t ret = gpgme_data_set_encoding(dh, enc);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_set_encoding", ret);
	return ret;
}

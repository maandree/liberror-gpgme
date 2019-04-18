/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_rewind(gpgme_data_t dh)
{
	gpgme_error_t ret = gpgme_data_rewind(dh);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_rewind", ret);
	return ret;
}

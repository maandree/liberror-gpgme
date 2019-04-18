/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_estream(gpgme_data_t *r_dh, gpgrt_stream_t stream)
{
	gpgme_error_t ret = gpgme_data_new_from_estream(r_dh, stream);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_estream", ret);
	return ret;
}

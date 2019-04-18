/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_data_new_from_cbs(gpgme_data_t *dh, gpgme_data_cbs_t cbs, void *handle)
{
	gpgme_error_t ret = gpgme_data_new_from_cbs(dh, cbs, handle);
	if (ret)
		liberror_gpgme_set_error("gpgme_data_new_from_cbs", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_get_engine_info(gpgme_engine_info_t *engine_info)
{
	gpgme_error_t ret = gpgme_get_engine_info(engine_info);
	if (ret)
		liberror_gpgme_set_error("gpgme_get_engine_info", ret);
	return ret;
}

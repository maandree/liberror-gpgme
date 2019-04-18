/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_engine_check_version(gpgme_protocol_t proto)
{
	gpgme_error_t ret = gpgme_engine_check_version(proto);
	if (ret)
		liberror_gpgme_set_error("gpgme_engine_check_version", ret);
	return ret;
}

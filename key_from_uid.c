/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_key_from_uid(gpgme_key_t *key, const char *name)
{
	gpgme_error_t ret = gpgme_key_from_uid(key, name);
	if (ret)
		liberror_gpgme_set_error("gpgme_key_from_uid", ret);
	return ret;
}

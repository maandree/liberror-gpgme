/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_set_keylist_mode(gpgme_ctx_t ctx, gpgme_keylist_mode_t mode)
{
	gpgme_error_t ret = gpgme_set_keylist_mode(ctx, mode);
	if (ret)
		liberror_gpgme_set_error("gpgme_set_keylist_mode", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_set_uid_flag_start(gpgme_ctx_t ctx, gpgme_key_t key, const char *userid, const char *name, const char *value)
{
	gpgme_error_t ret = gpgme_op_set_uid_flag_start(ctx, key, userid, name, value);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_set_uid_flag_start", ret);
	return ret;
}

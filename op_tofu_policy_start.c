/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_tofu_policy_start(gpgme_ctx_t ctx, gpgme_key_t key, gpgme_tofu_policy_t policy)
{
	gpgme_error_t ret = gpgme_op_tofu_policy_start(ctx, key, policy);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_tofu_policy_start", ret);
	return ret;
}

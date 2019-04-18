/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_vfs_create(gpgme_ctx_t ctx, gpgme_key_t recp[], const char *container_file, unsigned int flags, gpgme_error_t *op_err)
{
	gpgme_error_t ret = gpgme_op_vfs_create(ctx, recp, container_file, flags, op_err);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_vfs_create", ret);
	return ret;
}

/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_vfs_mount(gpgme_ctx_t ctx, const char *container_file, const char *mount_dir,
                            unsigned int flags, gpgme_error_t *op_err)
{
	gpgme_error_t ret = gpgme_op_vfs_mount(ctx, container_file, mount_dir, flags, op_err);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_vfs_mount", ret);
	return ret;
}

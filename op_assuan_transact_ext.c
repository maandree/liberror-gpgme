/* See LICENSE file for copyright and license details. */
#include "internal.h"


gpgme_error_t
liberror_gpgme_op_assuan_transact_ext(gpgme_ctx_t ctx, const char *command, gpgme_assuan_data_cb_t data_cb,
                                      void *data_cb_value, gpgme_assuan_inquire_cb_t inq_cb, void *inq_cb_value,
                                      gpgme_assuan_status_cb_t stat_cb, void *stat_cb_value, gpgme_error_t *op_err)
{
	gpgme_error_t ret = gpgme_op_assuan_transact_ext(ctx, command, data_cb, data_cb_value, inq_cb,
	                                                 inq_cb_value, stat_cb, stat_cb_value, op_err);
	if (ret)
		liberror_gpgme_set_error("gpgme_op_assuan_transact_ext", ret);
	return ret;
}

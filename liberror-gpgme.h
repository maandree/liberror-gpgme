/* See LICENSE file for copyright and license details. */
#ifndef LIBERROR_GPGME_H
#define LIBERROR_GPGME_H

#include <gpgme.h>


gpgme_error_t liberror_gpgme_new(gpgme_ctx_t *);
gpgme_error_t liberror_gpgme_set_ctx_flag(gpgme_ctx_t, const char *, const char *);
gpgme_error_t liberror_gpgme_set_protocol(gpgme_ctx_t, gpgme_protocol_t);
gpgme_error_t liberror_gpgme_set_sub_protocol(gpgme_ctx_t, gpgme_protocol_t);
/* TODO const char *gpgme_get_protocol_name(gpgme_protocol_t proto); */
gpgme_error_t liberror_gpgme_set_keylist_mode(gpgme_ctx_t, gpgme_keylist_mode_t);
gpgme_error_t liberror_gpgme_set_pinentry_mode(gpgme_ctx_t, gpgme_pinentry_mode_t);
gpgme_error_t liberror_gpgme_set_locale(gpgme_ctx_t, int, const char *);
gpgme_error_t liberror_gpgme_ctx_set_engine_info(gpgme_ctx_t, gpgme_protocol_t, const char *, const char *);
gpgme_error_t liberror_gpgme_signers_add(gpgme_ctx_t, const gpgme_key_t);
gpgme_error_t liberror_gpgme_sig_notation_add(gpgme_ctx_t, const char *, const char *, gpgme_sig_notation_flags_t);
gpgme_error_t liberror_gpgme_set_sender(gpgme_ctx_t, const char *);


/* TODO ssize_t gpgme_io_read(int fd, void *buffer, size_t count); */
/* TODO ssize_t gpgme_io_write(int fd, const void *buffer, size_t count); */
/* TODO int gpgme_io_writen(int fd, const void *buffer, size_t count); */
/* TODO gpgme_ctx_t gpgme_wait(gpgme_ctx_t ctx, gpgme_error_t *status, int hang); */
/* TODO gpgme_ctx_t gpgme_wait_ext(gpgme_ctx_t ctx, gpgme_error_t *status, gpgme_error_t *op_err, int hang); */
gpgme_error_t liberror_gpgme_cancel(gpgme_ctx_t);
gpgme_error_t liberror_gpgme_cancel_async(gpgme_ctx_t);


/* TODO ssize_t gpgme_data_read(gpgme_data_t dh, void *buffer, size_t size); */
/* TODO ssize_t gpgme_data_write(gpgme_data_t dh, const void *buffer, size_t size); */
/* TODO off_t gpgme_data_seek(gpgme_data_t dh, off_t offset, int whence); */
gpgme_error_t liberror_gpgme_data_new(gpgme_data_t *);
gpgme_error_t liberror_gpgme_data_new_from_mem(gpgme_data_t *, const char *, size_t, int);
/* TODO char *gpgme_data_release_and_get_mem(gpgme_data_t dh, size_t *r_len); */
gpgme_error_t liberror_gpgme_data_new_from_cbs(gpgme_data_t *, gpgme_data_cbs_t, void *);
gpgme_error_t liberror_gpgme_data_new_from_fd(gpgme_data_t *, int);
gpgme_error_t liberror_gpgme_data_new_from_stream(gpgme_data_t *, FILE *);
gpgme_error_t liberror_gpgme_data_new_from_estream(gpgme_data_t *, gpgrt_stream_t);
/* TODO gpgme_data_encoding_t gpgme_data_get_encoding(gpgme_data_t dh); */
gpgme_error_t liberror_gpgme_data_set_encoding(gpgme_data_t, gpgme_data_encoding_t);
/* TODO char *gpgme_data_get_file_name(gpgme_data_t dh); */
gpgme_error_t liberror_gpgme_data_set_file_name(gpgme_data_t, const char *);
gpgme_error_t liberror_gpgme_data_set_flag(gpgme_data_t, const char *, const char *);
/* TODO gpgme_data_type_t gpgme_data_identify(gpgme_data_t dh, int reserved); */
gpgme_error_t liberror_gpgme_data_new_from_file(gpgme_data_t *, const char *, int);
gpgme_error_t liberror_gpgme_data_new_from_filepart(gpgme_data_t *, const char *, FILE *, off_t, size_t);
gpgme_error_t liberror_gpgme_data_rewind(gpgme_data_t);


gpgme_error_t liberror_gpgme_get_key(gpgme_ctx_t, const char *, gpgme_key_t *, int);
gpgme_error_t liberror_gpgme_key_from_uid(gpgme_key_t *, const char *);


gpgme_error_t liberror_gpgme_op_encrypt_start(gpgme_ctx_t, gpgme_key_t[], gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt(gpgme_ctx_t, gpgme_key_t[], gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt_ext_start(gpgme_ctx_t, gpgme_key_t[], const char *,
                                                  gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt_ext(gpgme_ctx_t, gpgme_key_t[], const char *,
                                            gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt_sign_start(gpgme_ctx_t, gpgme_key_t[], gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt_sign(gpgme_ctx_t, gpgme_key_t[], gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt_sign_ext_start(gpgme_ctx_t, gpgme_key_t[], const char *,
                                                       gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_encrypt_sign_ext(gpgme_ctx_t, gpgme_key_t[], const char *,
                                                 gpgme_encrypt_flags_t, gpgme_data_t, gpgme_data_t);


gpgme_error_t liberror_gpgme_op_decrypt_start(gpgme_ctx_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_decrypt(gpgme_ctx_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_decrypt_verify_start(gpgme_ctx_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_decrypt_verify(gpgme_ctx_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_decrypt_ext_start(gpgme_ctx_t, gpgme_decrypt_flags_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_decrypt_ext(gpgme_ctx_t, gpgme_decrypt_flags_t, gpgme_data_t, gpgme_data_t);


gpgme_error_t liberror_gpgme_op_sign_start(gpgme_ctx_t, gpgme_data_t, gpgme_data_t, gpgme_sig_mode_t);
gpgme_error_t liberror_gpgme_op_sign(gpgme_ctx_t, gpgme_data_t, gpgme_data_t, gpgme_sig_mode_t);


gpgme_error_t liberror_gpgme_op_verify_start(gpgme_ctx_t, gpgme_data_t, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_verify(gpgme_ctx_t, gpgme_data_t, gpgme_data_t, gpgme_data_t);


gpgme_error_t liberror_gpgme_op_import_start(gpgme_ctx_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_import(gpgme_ctx_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_import_keys_start(gpgme_ctx_t, gpgme_key_t[]);
gpgme_error_t liberror_gpgme_op_import_keys(gpgme_ctx_t, gpgme_key_t[]);
gpgme_error_t liberror_gpgme_op_export_start(gpgme_ctx_t, const char *, gpgme_export_mode_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_export(gpgme_ctx_t, const char *, gpgme_export_mode_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_export_ext_start(gpgme_ctx_t, const char *[], gpgme_export_mode_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_export_ext(gpgme_ctx_t, const char *[], gpgme_export_mode_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_export_keys_start(gpgme_ctx_t, gpgme_key_t[], gpgme_export_mode_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_export_keys(gpgme_ctx_t, gpgme_key_t[], gpgme_export_mode_t, gpgme_data_t);


gpgme_error_t liberror_gpgme_op_genkey_start(gpgme_ctx_t, const char *, gpgme_data_t, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_genkey(gpgme_ctx_t, const char *, gpgme_data_t, gpgme_data_t);


gpgme_error_t liberror_gpgme_op_createkey_start(gpgme_ctx_t, const char *, const char *, unsigned long,
                                                unsigned long, gpgme_key_t, unsigned int);
gpgme_error_t liberror_gpgme_op_createkey(gpgme_ctx_t, const char *, const char *, unsigned long,
                                          unsigned long, gpgme_key_t, unsigned int);
gpgme_error_t liberror_gpgme_op_createsubkey_start(gpgme_ctx_t, gpgme_key_t, const char *, unsigned long, unsigned long, unsigned int);
gpgme_error_t liberror_gpgme_op_createsubkey(gpgme_ctx_t, gpgme_key_t, const char *, unsigned long, unsigned long, unsigned int);
gpgme_error_t liberror_gpgme_op_adduid_start(gpgme_ctx_t, gpgme_key_t, const char *, unsigned int);
gpgme_error_t liberror_gpgme_op_adduid(gpgme_ctx_t, gpgme_key_t, const char *, unsigned int);
gpgme_error_t liberror_gpgme_op_revuid_start(gpgme_ctx_t, gpgme_key_t, const char *, unsigned int);
gpgme_error_t liberror_gpgme_op_revuid(gpgme_ctx_t, gpgme_key_t, const char *, unsigned int);
gpgme_error_t liberror_gpgme_op_set_uid_flag_start(gpgme_ctx_t, gpgme_key_t, const char *, const char *, const char *);
gpgme_error_t liberror_gpgme_op_set_uid_flag(gpgme_ctx_t, gpgme_key_t, const char *, const char *, const char *);
gpgme_error_t liberror_gpgme_op_delete_start(gpgme_ctx_t, const gpgme_key_t, int);
gpgme_error_t liberror_gpgme_op_delete(gpgme_ctx_t, const gpgme_key_t, int);
gpgme_error_t liberror_gpgme_op_delete_ext_start(gpgme_ctx_t, const gpgme_key_t, unsigned int);
gpgme_error_t liberror_gpgme_op_delete_ext(gpgme_ctx_t, const gpgme_key_t, unsigned int);


gpgme_error_t liberror_gpgme_op_keysign_start(gpgme_ctx_t, gpgme_key_t, const char *, unsigned long, unsigned int);
gpgme_error_t liberror_gpgme_op_keysign(gpgme_ctx_t, gpgme_key_t, const char *, unsigned long, unsigned int);


gpgme_error_t liberror_gpgme_op_interact_start(gpgme_ctx_t, gpgme_key_t, unsigned int, gpgme_interact_cb_t, void *, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_interact(gpgme_ctx_t, gpgme_key_t, unsigned int, gpgme_interact_cb_t, void *, gpgme_data_t);
gpgme_error_t liberror_gpgme_op_tofu_policy_start(gpgme_ctx_t, gpgme_key_t, gpgme_tofu_policy_t);
gpgme_error_t liberror_gpgme_op_tofu_policy(gpgme_ctx_t, gpgme_key_t, gpgme_tofu_policy_t);


gpgme_error_t liberror_gpgme_op_keylist_start(gpgme_ctx_t, const char *, int);
gpgme_error_t liberror_gpgme_op_keylist_ext_start(gpgme_ctx_t, const char *[], int, int);
gpgme_error_t liberror_gpgme_op_keylist_from_data_start(gpgme_ctx_t, gpgme_data_t, int);
gpgme_error_t liberror_gpgme_op_keylist_next(gpgme_ctx_t, gpgme_key_t *);
gpgme_error_t liberror_gpgme_op_keylist_end(gpgme_ctx_t);


gpgme_error_t liberror_gpgme_op_passwd_start(gpgme_ctx_t, gpgme_key_t, unsigned int);
gpgme_error_t liberror_gpgme_op_passwd(gpgme_ctx_t, gpgme_key_t, unsigned int);


gpgme_error_t liberror_gpgme_op_trustlist_start(gpgme_ctx_t, const char *, int);
gpgme_error_t liberror_gpgme_op_trustlist_next(gpgme_ctx_t, gpgme_trust_item_t *);
gpgme_error_t liberror_gpgme_op_trustlist_end(gpgme_ctx_t);


gpgme_error_t liberror_gpgme_op_getauditlog_start(gpgme_ctx_t, gpgme_data_t, unsigned int);
gpgme_error_t liberror_gpgme_op_getauditlog(gpgme_ctx_t, gpgme_data_t, unsigned int);


gpgme_error_t liberror_gpgme_op_spawn_start(gpgme_ctx_t, const char *, const char *[], gpgme_data_t,
                                            gpgme_data_t, gpgme_data_t, unsigned int);
gpgme_error_t liberror_gpgme_op_spawn(gpgme_ctx_t, const char *, const char *[], gpgme_data_t,
                                      gpgme_data_t, gpgme_data_t, unsigned int);


gpgme_error_t liberror_gpgme_op_assuan_transact_start(gpgme_ctx_t, const char *, gpgme_assuan_data_cb_t, void *,
                                                      gpgme_assuan_inquire_cb_t, void *, gpgme_assuan_status_cb_t, void *);
gpgme_error_t liberror_gpgme_op_assuan_transact_ext(gpgme_ctx_t, const char *, gpgme_assuan_data_cb_t, void *,
                                                    gpgme_assuan_inquire_cb_t, void *, gpgme_assuan_status_cb_t, void *,
                                                    gpgme_error_t *);


gpgme_error_t liberror_gpgme_op_vfs_mount(gpgme_ctx_t, const char *, const char *, unsigned int, gpgme_error_t *);
gpgme_error_t liberror_gpgme_op_vfs_create(gpgme_ctx_t, gpgme_key_t[], const char *, unsigned int, gpgme_error_t *);


gpgme_error_t liberror_gpgme_conf_arg_new(gpgme_conf_arg_t *, gpgme_conf_type_t, const void *);
gpgme_error_t liberror_gpgme_conf_opt_change(gpgme_conf_opt_t, int, gpgme_conf_arg_t);
gpgme_error_t liberror_gpgme_op_conf_load(gpgme_ctx_t, gpgme_conf_comp_t *);
gpgme_error_t liberror_gpgme_op_conf_save(gpgme_ctx_t, gpgme_conf_comp_t);
gpgme_error_t liberror_gpgme_op_conf_dir(gpgme_ctx_t, const char *, char **);
gpgme_error_t liberror_gpgme_op_query_swdb(gpgme_ctx_t, const char *, const char *, unsigned int);


/* TODO int gpgme_set_global_flag(const char *name, const char *value); */
/* TODO const char *gpgme_check_version(const char *req_version); */
/* TODO const char *gpgme_get_dirinfo(const char *what); */
gpgme_error_t liberror_gpgme_get_engine_info(gpgme_engine_info_t *);
gpgme_error_t liberror_gpgme_set_engine_info(gpgme_protocol_t, const char *, const char *);
gpgme_error_t liberror_gpgme_engine_check_version(gpgme_protocol_t);
/* TODO char *gpgme_pubkey_algo_string(gpgme_subkey_t subkey); */
/* TODO const char *gpgme_pubkey_algo_name(gpgme_pubkey_algo_t algo); */
/* TODO const char *gpgme_hash_algo_name(gpgme_hash_algo_t algo); */
/* TODO char *gpgme_addrspec_from_uid(const char *uid); */


#endif

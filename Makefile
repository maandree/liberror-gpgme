.POSIX:

CONFIGFILE = config.mk
include $(CONFIGFILE)

OS = linux
# linux = Linux
# macos = Mac OS
include $(OS).mk

LIB_MAJOR = 1
LIB_MINOR = 0
LIB_VERSION = $(LIB_MAJOR).$(LIB_MINOR)


HDR =\
	liberror-gpgme.h\
	internal.h

OBJ =\
	cancel_async.o\
	cancel.o\
	conf_arg_new.o\
	conf_opt_change.o\
	ctx_set_engine_info.o\
	data_new_from_cbs.o\
	data_new_from_estream.o\
	data_new_from_fd.o\
	data_new_from_file.o\
	data_new_from_filepart.o\
	data_new_from_mem.o\
	data_new_from_stream.o\
	data_new.o\
	data_rewind.o\
	data_set_encoding.o\
	data_set_file_name.o\
	data_set_flag.o\
	engine_check_version.o\
	get_engine_info.o\
	get_key.o\
	key_from_uid.o\
	new.o\
	op_adduid.o\
	op_adduid_start.o\
	op_assuan_transact_ext.o\
	op_assuan_transact_start.o\
	op_conf_dir.o\
	op_conf_load.o\
	op_conf_save.o\
	op_createkey.o\
	op_createkey_start.o\
	op_createsubkey.o\
	op_createsubkey_start.o\
	op_decrypt.o\
	op_decrypt_ext.o\
	op_decrypt_ext_start.o\
	op_decrypt_start.o\
	op_decrypt_verify.o\
	op_decrypt_verify_start.o\
	op_delete_ext.o\
	op_delete_ext_start.o\
	op_delete.o\
	op_delete_start.o\
	op_encrypt_ext.o\
	op_encrypt_ext_start.o\
	op_encrypt.o\
	op_encrypt_sign_ext.o\
	op_encrypt_sign_ext_start.o\
	op_encrypt_sign.o\
	op_encrypt_sign_start.o\
	op_encrypt_start.o\
	op_export_ext.o\
	op_export_ext_start.o\
	op_export_keys.o\
	op_export_keys_start.o\
	op_export.o\
	op_export_start.o\
	op_genkey.o\
	op_genkey_start.o\
	op_getauditlog.o\
	op_getauditlog_start.o\
	op_import_keys.o\
	op_import_keys_start.o\
	op_import.o\
	op_import_start.o\
	op_interact.o\
	op_interact_start.o\
	op_keylist_end.o\
	op_keylist_ext_start.o\
	op_keylist_from_data_start.o\
	op_keylist_next.o\
	op_keylist_start.o\
	op_keysign.o\
	op_keysign_start.o\
	op_passwd.o\
	op_passwd_start.o\
	op_query_swdb.o\
	op_revuid.o\
	op_revuid_start.o\
	op_set_uid_flag.o\
	op_set_uid_flag_start.o\
	op_sign.o\
	op_sign_start.o\
	op_spawn.o\
	op_spawn_start.o\
	op_tofu_policy.o\
	op_tofu_policy_start.o\
	op_trustlist_end.o\
	op_trustlist_next.o\
	op_trustlist_start.o\
	op_verify.o\
	op_verify_start.o\
	op_vfs_create.o\
	op_vfs_mount.o\
	set_ctx_flag.o\
	set_engine_info.o\
	set_keylist_mode.o\
	set_locale.o\
	set_pinentry_mode.o\
	set_protocol.o\
	set_sender.o\
	set_sub_protocol.o\
	signers_add.o\
	sig_notation_add.o

LOBJ = $(OBJ:.o=.lo)


all: liberror-gpgme.a liberror-gpgme.$(LIBEXT)
$(OBJ): $(@:.o=.c) $(HDR)
$(LOBJ): $(@:.lo=.c) $(HDR)

liberror-gpgme.a: $(OBJ)
	-rm -f -- $@
	$(AR) rc $@ $(OBJ)
	$(AR) s $@

liberror-gpgme.$(LIBEXT): $(LOBJ)
	$(CC) $(LIBFLAGS) -o $@ $(LOBJ) $(LDFLAGS)

.c.o:
	$(CC) -c -o $@ $< $(CFLAGS) $(CPPFLAGS)

.c.lo:
	$(CC) -c -o $@ $< -fPIC $(CFLAGS) $(CPPFLAGS)

install: liberror-gpgme.a liberror-gpgme.$(LIBEXT)
	mkdir -p -- "$(DESTDIR)$(PREFIX)/lib"
	mkdir -p -- "$(DESTDIR)$(PREFIX)/include"
	mkdir -p -- "$(DESTDIR)$(PREFIX)/share/licenses/liberror-gpgme"
	cp -- liberror-gpgme.a "$(DESTDIR)$(PREFIX)/lib"
	cp -- liberror-gpgme.$(LIBEXT) "$(DESTDIR)$(PREFIX)/lib/liberror-gpgme.$(LIBMINOREXT)"
	ln -sf -- liberror-gpgme.$(LIBMINOREXT) "$(DESTDIR)$(PREFIX)/lib/liberror-gpgme.$(LIBMAJOREXT)"
	ln -sf -- liberror-gpgme.$(LIBMINOREXT) "$(DESTDIR)$(PREFIX)/lib/liberror-gpgme.$(LIBEXT)"
	cp -- liberror-gpgme.h "$(DESTDIR)$(PREFIX)/include"
	cp -- LICENSE "$(DESTDIR)$(PREFIX)/share/licenses/liberror-gpgme"

uninstall:
	-rm -f -- "$(DESTDIR)$(PREFIX)/lib/liberror-gpgme."*
	-rm -f -- "$(DESTDIR)$(PREFIX)/include/liberror-gpgme.h"
	-rm -rf -- "$(DESTDIR)$(PREFIX)/share/licenses/liberror-gpgme"

clean:
	-rm -f -- *.o *.lo *.a *.so *.so.* *.su *.test

.SUFFIXES:
.SUFFIXES: .c .o .lo .a

.PHONY: all install uninstall clean

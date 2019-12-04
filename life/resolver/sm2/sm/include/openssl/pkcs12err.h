/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_PKCS12ERR_H
# define HEADER_PKCS12ERR_H

# ifndef HEADER_SYMHACKS_H
#  include <openssl/symhacks.h>
# endif

# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_PKCS12_strings(void);

/*
 * PKCS12 function codes.
 */
# define PKCS12_F_OPENSSL_ASC2UNI                         121
# define PKCS12_F_OPENSSL_UNI2ASC                         124
# define PKCS12_F_OPENSSL_UNI2UTF8                        127
# define PKCS12_F_OPENSSL_UTF82UNI                        129
# define PKCS12_F_PKCS12_CREATE                           105
# define PKCS12_F_PKCS12_GEN_MAC                          107
# define PKCS12_F_PKCS12_INIT                             109
# define PKCS12_F_PKCS12_ITEM_DECRYPT_D2I                 106
# define PKCS12_F_PKCS12_ITEM_I2D_ENCRYPT                 108
# define PKCS12_F_PKCS12_ITEM_PACK_SAFEBAG                117
# define PKCS12_F_PKCS12_KEY_GEN_ASC                      110
# define PKCS12_F_PKCS12_KEY_GEN_UNI                      111
# define PKCS12_F_PKCS12_KEY_GEN_UTF8                     116
# define PKCS12_F_PKCS12_NEWPASS                          128
# define PKCS12_F_PKCS12_PACK_P7DATA                      114
# define PKCS12_F_PKCS12_PACK_P7ENCDATA                   115
# define PKCS12_F_PKCS12_PARSE                            118
# define PKCS12_F_PKCS12_PBE_CRYPT                        119
# define PKCS12_F_PKCS12_PBE_KEYIVGEN                     120
# define PKCS12_F_PKCS12_SAFEBAG_CREATE0_P8INF            112
# define PKCS12_F_PKCS12_SAFEBAG_CREATE0_PKCS8            113
# define PKCS12_F_PKCS12_SAFEBAG_CREATE_PKCS8_ENCRYPT     133
# define PKCS12_F_PKCS12_SETUP_MAC                        122
# define PKCS12_F_PKCS12_SET_MAC                          123
# define PKCS12_F_PKCS12_UNPACK_AUTHSAFES                 130
# define PKCS12_F_PKCS12_UNPACK_P7DATA                    131
# define PKCS12_F_PKCS12_VERIFY_MAC                       126
# define PKCS12_F_PKCS8_ENCRYPT                           125
# define PKCS12_F_PKCS8_SET0_PBE                          132

/*
 * PKCS12 reason codes.
 */
# define PKCS12_R_CANT_PACK_STRUCTURE                     100
# define PKCS12_R_CONTENT_TYPE_NOT_DATA                   121
# define PKCS12_R_DECODE_ERROR                            101
# define PKCS12_R_ENCODE_ERROR                            102
# define PKCS12_R_ENCRYPT_ERROR                           103
# define PKCS12_R_ERROR_SETTING_ENCRYPTED_DATA_TYPE       120
# define PKCS12_R_INVALID_NULL_ARGUMENT                   104
# define PKCS12_R_INVALID_NULL_PKCS12_POINTER             105
# define PKCS12_R_IV_GEN_ERROR                            106
# define PKCS12_R_KEY_GEN_ERROR                           107
# define PKCS12_R_MAC_ABSENT                              108
# define PKCS12_R_MAC_GENERATION_ERROR                    109
# define PKCS12_R_MAC_SETUP_ERROR                         110
# define PKCS12_R_MAC_STRING_SET_ERROR                    111
# define PKCS12_R_MAC_VERIFY_FAILURE                      113
# define PKCS12_R_PARSE_ERROR                             114
# define PKCS12_R_PKCS12_ALGOR_CIPHERINIT_ERROR           115
# define PKCS12_R_PKCS12_CIPHERFINAL_ERROR                116
# define PKCS12_R_PKCS12_PBE_CRYPT_ERROR                  117
# define PKCS12_R_UNKNOWN_DIGEST_ALGORITHM                118
# define PKCS12_R_UNSUPPORTED_PKCS12_MODE                 119

#endif
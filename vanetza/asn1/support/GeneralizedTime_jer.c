/*
 * Copyright (c) 2017 Lev Walkin <vlm@lionet.info>.
 * All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#include "asn_internal.h"
#include "GeneralizedTime.h"

#ifdef	__CYGWIN__
#include "/usr/include/time.h"
#else
#include <time.h>
#endif	/* __CYGWIN__ */

#include <errno.h>

#if !defined(ASN___INTERNAL_TEST_MODE)
asn_enc_rval_t
GeneralizedTime_encode_jer(const asn_TYPE_descriptor_t *td,
                           const asn_jer_constraints_t *constraints,
                           const void *sptr, int ilevel,
                           enum jer_encoder_flags_e flags,
                           asn_app_consume_bytes_f *cb, void *app_key) {
  GeneralizedTime_t *gt;
  asn_enc_rval_t rv;
  int fv, fd;  /* fractional parts */
  struct tm tm;

  errno = EPERM;
  if(asn_GT2time_frac((const GeneralizedTime_t *)sptr,
                      &fv, &fd, &tm, 1) == -1
     && errno != EPERM)
    ASN__ENCODE_FAILED;

  gt = asn_time2GT_frac(0, &tm, fv, fd, 1);
  if(!gt) ASN__ENCODE_FAILED;

  rv = OCTET_STRING_encode_jer_utf8(td, constraints, sptr, ilevel, flags,
                                    cb, app_key);
  ASN_STRUCT_FREE(asn_DEF_GeneralizedTime, gt);
  return rv;
}
#endif  /* !defined(ASN___INTERNAL_TEST_MODE) */

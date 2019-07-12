/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PerformanceClass_H_
#define	_PerformanceClass_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PerformanceClass {
	PerformanceClass_unavailable	= 0,
	PerformanceClass_performanceClassA	= 1,
	PerformanceClass_performanceClassB	= 2
} e_PerformanceClass;

/* PerformanceClass */
typedef long	 PerformanceClass_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PerformanceClass_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PerformanceClass;
asn_struct_free_f PerformanceClass_free;
asn_struct_print_f PerformanceClass_print;
asn_constr_check_f PerformanceClass_constraint;
ber_type_decoder_f PerformanceClass_decode_ber;
der_type_encoder_f PerformanceClass_encode_der;
xer_type_decoder_f PerformanceClass_decode_xer;
xer_type_encoder_f PerformanceClass_encode_xer;
oer_type_decoder_f PerformanceClass_decode_oer;
oer_type_encoder_f PerformanceClass_encode_oer;
per_type_decoder_f PerformanceClass_decode_uper;
per_type_encoder_f PerformanceClass_encode_uper;
per_type_decoder_f PerformanceClass_decode_aper;
per_type_encoder_f PerformanceClass_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PerformanceClass_H_ */
#include "asn_internal.h"

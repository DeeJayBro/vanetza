/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103324v211/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_CpmContainerId_H_
#define	_Vanetza_ITS2_CpmContainerId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_ITS2_CpmContainerId */
typedef long	 Vanetza_ITS2_CpmContainerId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_CpmContainerId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CpmContainerId;
asn_struct_free_f Vanetza_ITS2_CpmContainerId_free;
asn_struct_print_f Vanetza_ITS2_CpmContainerId_print;
asn_constr_check_f Vanetza_ITS2_CpmContainerId_constraint;
ber_type_decoder_f Vanetza_ITS2_CpmContainerId_decode_ber;
der_type_encoder_f Vanetza_ITS2_CpmContainerId_encode_der;
xer_type_decoder_f Vanetza_ITS2_CpmContainerId_decode_xer;
xer_type_encoder_f Vanetza_ITS2_CpmContainerId_encode_xer;
jer_type_encoder_f Vanetza_ITS2_CpmContainerId_encode_jer;
oer_type_decoder_f Vanetza_ITS2_CpmContainerId_decode_oer;
oer_type_encoder_f Vanetza_ITS2_CpmContainerId_encode_oer;
per_type_decoder_f Vanetza_ITS2_CpmContainerId_decode_uper;
per_type_encoder_f Vanetza_ITS2_CpmContainerId_encode_uper;
per_type_decoder_f Vanetza_ITS2_CpmContainerId_decode_aper;
per_type_encoder_f Vanetza_ITS2_CpmContainerId_encode_aper;
#define Vanetza_ITS2_CpmContainerId_originatingVehicleContainer	((Vanetza_ITS2_CpmContainerId_t)1)
#define Vanetza_ITS2_CpmContainerId_originatingRsuContainer	((Vanetza_ITS2_CpmContainerId_t)2)
#define Vanetza_ITS2_CpmContainerId_sensorInformationContainer	((Vanetza_ITS2_CpmContainerId_t)3)
#define Vanetza_ITS2_CpmContainerId_perceptionRegionContainer	((Vanetza_ITS2_CpmContainerId_t)4)
#define Vanetza_ITS2_CpmContainerId_perceivedObjectContainer	((Vanetza_ITS2_CpmContainerId_t)5)

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_CpmContainerId_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "asn1/EN302637-2v141-CAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_BasicContainer_H_
#define	_BasicContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StationType.h"
#include "ReferencePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BasicContainer */
typedef struct BasicContainer {
	StationType_t	 stationType;
	ReferencePosition_t	 referencePosition;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_BasicContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_BasicContainer_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BasicContainer_H_ */
#include "asn_internal.h"

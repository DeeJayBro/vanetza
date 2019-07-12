/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "asn1/EN302637-3v131-DENM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_DecentralizedEnvironmentalNotificationMessage_H_
#define	_DecentralizedEnvironmentalNotificationMessage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ManagementContainer.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SituationContainer;
struct LocationContainer;
struct AlacarteContainer;

/* DecentralizedEnvironmentalNotificationMessage */
typedef struct DecentralizedEnvironmentalNotificationMessage {
	ManagementContainer_t	 management;
	struct SituationContainer	*situation;	/* OPTIONAL */
	struct LocationContainer	*location;	/* OPTIONAL */
	struct AlacarteContainer	*alacarte;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DecentralizedEnvironmentalNotificationMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DecentralizedEnvironmentalNotificationMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_DecentralizedEnvironmentalNotificationMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_DecentralizedEnvironmentalNotificationMessage_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SituationContainer.h"
#include "LocationContainer.h"
#include "AlacarteContainer.h"

#endif	/* _DecentralizedEnvironmentalNotificationMessage_H_ */
#include "asn_internal.h"

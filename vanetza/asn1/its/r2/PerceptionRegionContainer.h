/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PerceptionRegionContainer"
 * 	found in "asn1/release2/TS103324v211/CPM-PerceptionRegionContainer.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_PerceptionRegionContainer_H_
#define	_Vanetza_ITS2_PerceptionRegionContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_ITS2_PerceptionRegion;

/* Vanetza_ITS2_PerceptionRegionContainer */
typedef struct Vanetza_ITS2_PerceptionRegionContainer {
	A_SEQUENCE_OF(struct Vanetza_ITS2_PerceptionRegion) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_PerceptionRegionContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_PerceptionRegionContainer;
extern asn_SET_OF_specifics_t asn_SPC_Vanetza_ITS2_PerceptionRegionContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_PerceptionRegionContainer_1[1];
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_PerceptionRegionContainer_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PerceptionRegion.h"

#endif	/* _Vanetza_ITS2_PerceptionRegionContainer_H_ */
#include "asn_internal.h"
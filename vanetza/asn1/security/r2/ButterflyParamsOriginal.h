/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1EeRaInterface"
 * 	found in "build.asn1/ieee/IEEE1609dot2dot1EeRaInterface.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#ifndef	_Vanetza_Security2_ButterflyParamsOriginal_H_
#define	_Vanetza_Security2_ButterflyParamsOriginal_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ButterflyExpansion.h"
#include "PublicEncryptionKey.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security2_ButterflyParamsOriginal */
typedef struct Vanetza_Security2_ButterflyParamsOriginal {
	Vanetza_Security2_ButterflyExpansion_t	 signingExpansion;
	Vanetza_Security2_PublicEncryptionKey_t	 encryptionKey;
	Vanetza_Security2_ButterflyExpansion_t	 encryptionExpansion;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security2_ButterflyParamsOriginal_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_ButterflyParamsOriginal;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_ButterflyParamsOriginal_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security2_ButterflyParamsOriginal_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security2_ButterflyParamsOriginal_H_ */
#include "asn_internal.h"
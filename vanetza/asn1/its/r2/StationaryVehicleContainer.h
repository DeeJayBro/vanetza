/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Description"
 * 	found in "asn1/release2/TS103831v221-DENM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_StationaryVehicleContainer_H_
#define	_Vanetza_ITS2_StationaryVehicleContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StationarySince.h"
#include "NumberOfOccupants.h"
#include "EnergyStorageType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_ITS2_CauseCodeV2;
struct Vanetza_ITS2_DangerousGoodsExtended;
struct Vanetza_ITS2_VehicleIdentification;

/* Vanetza_ITS2_StationaryVehicleContainer */
typedef struct Vanetza_ITS2_StationaryVehicleContainer {
	Vanetza_ITS2_StationarySince_t	*stationarySince;	/* OPTIONAL */
	struct Vanetza_ITS2_CauseCodeV2	*stationaryCause;	/* OPTIONAL */
	struct Vanetza_ITS2_DangerousGoodsExtended	*carryingDangerousGoods;	/* OPTIONAL */
	Vanetza_ITS2_NumberOfOccupants_t	*numberOfOccupants;	/* OPTIONAL */
	struct Vanetza_ITS2_VehicleIdentification	*vehicleIdentification;	/* OPTIONAL */
	Vanetza_ITS2_EnergyStorageType_t	*energyStorageType;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_StationaryVehicleContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_StationaryVehicleContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_StationaryVehicleContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_StationaryVehicleContainer_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CauseCodeV2.h"
#include "DangerousGoodsExtended.h"
#include "VehicleIdentification.h"

#endif	/* _Vanetza_ITS2_StationaryVehicleContainer_H_ */
#include "asn_internal.h"
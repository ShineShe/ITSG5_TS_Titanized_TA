/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LaneAttributes_H_
#define	_LaneAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneDirection.h"
#include "LaneSharing.h"
#include "LaneTypeAttributes.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Reg_LaneAttributes;

/* LaneAttributes */
typedef struct LaneAttributes {
	LaneDirection_t	 directionalUse;
	LaneSharing_t	 sharedWith;
	LaneTypeAttributes_t	 laneType;
	struct Reg_LaneAttributes	*regional	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalLaneAttributes.h"

#endif	/* _LaneAttributes_H_ */
#include <asn_internal.h>

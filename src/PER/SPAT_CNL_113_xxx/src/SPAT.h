/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SPAT_H_
#define	_SPAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRCmsgID2.h"
#include "DSRCmsgSubID.h"
#include "DescriptiveName.h"
#include "IntersectionStateList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Reg_SPAT;

/* SPAT */
typedef struct SPAT {
	DSRCmsgID2_t	 msgID;
	DSRCmsgSubID_t	*msgSubID	/* OPTIONAL */;
	DescriptiveName_t	*name	/* OPTIONAL */;
	IntersectionStateList_t	 intersections;
	struct Reg_SPAT	*regional	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPAT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPAT;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalSPAT.h"

#endif	/* _SPAT_H_ */
#include <asn_internal.h>

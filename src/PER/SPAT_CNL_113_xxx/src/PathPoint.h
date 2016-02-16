/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PathPoint_H_
#define	_PathPoint_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DeltaReferencePosition.h"
#include "PathDeltaTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PathPoint */
typedef struct PathPoint {
	DeltaReferencePosition_t	 pathPosition;
	PathDeltaTime_t	*pathDeltaTime	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PathPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathPoint;

#ifdef __cplusplus
}
#endif

#endif	/* _PathPoint_H_ */
#include <asn_internal.h>

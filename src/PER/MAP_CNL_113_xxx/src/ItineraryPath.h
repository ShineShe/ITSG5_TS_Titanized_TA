/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ItineraryPath_H_
#define	_ItineraryPath_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferencePosition;

/* ItineraryPath */
typedef struct ItineraryPath {
	A_SEQUENCE_OF(struct ReferencePosition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ItineraryPath_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ItineraryPath;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferencePosition.h"

#endif	/* _ItineraryPath_H_ */
#include <asn_internal.h>

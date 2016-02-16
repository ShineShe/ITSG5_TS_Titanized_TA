/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Heading_H_
#define	_Heading_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HeadingValue.h"
#include "HeadingConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Heading */
typedef struct Heading {
	HeadingValue_t	 headingValue;
	HeadingConfidence_t	 headingConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Heading_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Heading;

#ifdef __cplusplus
}
#endif

#endif	/* _Heading_H_ */
#include <asn_internal.h>

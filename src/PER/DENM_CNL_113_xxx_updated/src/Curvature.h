/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn"
 */

#ifndef	_Curvature_H_
#define	_Curvature_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CurvatureValue.h"
#include "CurvatureConfidence.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Curvature */
typedef struct Curvature {
	CurvatureValue_t	 curvatureValue;
	CurvatureConfidence_t	 curvatureConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Curvature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Curvature;

#ifdef __cplusplus
}
#endif

#endif	/* _Curvature_H_ */
#include <asn_internal.h>

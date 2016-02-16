/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_NodeAttributeList_H_
#define	_NodeAttributeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeAttribute.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NodeAttributeList */
typedef struct NodeAttributeList {
	A_SEQUENCE_OF(NodeAttribute_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeAttributeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeList;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttributeList_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_NodeAttribute_H_
#define	_NodeAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NodeAttribute {
	NodeAttribute_reserved	= 0,
	NodeAttribute_stopLine	= 1,
	NodeAttribute_roundedCapStyleA	= 2,
	NodeAttribute_roundedCapStyleB	= 3,
	NodeAttribute_mergePoint	= 4,
	NodeAttribute_divergePoint	= 5,
	NodeAttribute_downstreamStopLine	= 6,
	NodeAttribute_downstreamStartNode	= 7,
	NodeAttribute_closedToTraffic	= 8,
	NodeAttribute_safeIsland	= 9,
	NodeAttribute_curbPresentAtStepOff	= 10,
	NodeAttribute_hydrantPresent	= 11
	/*
	 * Enumeration is extensible
	 */
} e_NodeAttribute;

/* NodeAttribute */
typedef long	 NodeAttribute_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttribute;
asn_struct_free_f NodeAttribute_free;
asn_struct_print_f NodeAttribute_print;
asn_constr_check_f NodeAttribute_constraint;
ber_type_decoder_f NodeAttribute_decode_ber;
der_type_encoder_f NodeAttribute_encode_der;
xer_type_decoder_f NodeAttribute_decode_xer;
xer_type_encoder_f NodeAttribute_encode_xer;
per_type_decoder_f NodeAttribute_decode_uper;
per_type_encoder_f NodeAttribute_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeAttribute_H_ */
#include <asn_internal.h>

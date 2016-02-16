/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "DENM.asn"
 */

#ifndef	_Termination_H_
#define	_Termination_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Termination {
	Termination_isCancellation	= 0,
	Termination_isNegation	= 1
} e_Termination;

/* Termination */
typedef long	 Termination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Termination;
asn_struct_free_f Termination_free;
asn_struct_print_f Termination_print;
asn_constr_check_f Termination_constraint;
ber_type_decoder_f Termination_decode_ber;
der_type_encoder_f Termination_encode_der;
xer_type_decoder_f Termination_decode_xer;
xer_type_encoder_f Termination_encode_xer;
per_type_decoder_f Termination_decode_uper;
per_type_encoder_f Termination_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Termination_H_ */
#include <asn_internal.h>

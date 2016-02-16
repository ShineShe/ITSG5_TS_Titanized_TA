/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_YawRateValue_H_
#define	_YawRateValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum YawRateValue {
	YawRateValue_straight	= 0,
	YawRateValue_degSec_000_01ToRight	= -1,
	YawRateValue_degSec_000_01ToLeft	= 1,
	YawRateValue_unavailable	= 32767
} e_YawRateValue;

/* YawRateValue */
typedef long	 YawRateValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_YawRateValue;
asn_struct_free_f YawRateValue_free;
asn_struct_print_f YawRateValue_print;
asn_constr_check_f YawRateValue_constraint;
ber_type_decoder_f YawRateValue_decode_ber;
der_type_encoder_f YawRateValue_encode_der;
xer_type_decoder_f YawRateValue_decode_xer;
xer_type_encoder_f YawRateValue_encode_xer;
per_type_decoder_f YawRateValue_decode_uper;
per_type_encoder_f YawRateValue_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _YawRateValue_H_ */
#include <asn_internal.h>

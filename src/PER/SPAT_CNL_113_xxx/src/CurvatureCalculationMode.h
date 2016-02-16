/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_Container.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CurvatureCalculationMode_H_
#define	_CurvatureCalculationMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CurvatureCalculationMode {
	CurvatureCalculationMode_yawRateUsed	= 0,
	CurvatureCalculationMode_yawRateNotUsed	= 1,
	CurvatureCalculationMode_unavailable	= 2
	/*
	 * Enumeration is extensible
	 */
} e_CurvatureCalculationMode;

/* CurvatureCalculationMode */
typedef long	 CurvatureCalculationMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CurvatureCalculationMode;
asn_struct_free_f CurvatureCalculationMode_free;
asn_struct_print_f CurvatureCalculationMode_print;
asn_constr_check_f CurvatureCalculationMode_constraint;
ber_type_decoder_f CurvatureCalculationMode_decode_ber;
der_type_encoder_f CurvatureCalculationMode_encode_der;
xer_type_decoder_f CurvatureCalculationMode_decode_xer;
xer_type_encoder_f CurvatureCalculationMode_encode_xer;
per_type_decoder_f CurvatureCalculationMode_decode_uper;
per_type_encoder_f CurvatureCalculationMode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CurvatureCalculationMode_H_ */
#include <asn_internal.h>

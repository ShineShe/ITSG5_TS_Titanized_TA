/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LaneAttributes_Striping_H_
#define	_LaneAttributes_Striping_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneAttributes_Striping {
	LaneAttributes_Striping_stripToConnectingLanesRevocableLane	= 0,
	LaneAttributes_Striping_stripDrawOnLeft	= 1,
	LaneAttributes_Striping_stripDrawOnRight	= 2,
	LaneAttributes_Striping_stripToConnectingLanesLeft	= 3,
	LaneAttributes_Striping_stripToConnectingLanesRight	= 4,
	LaneAttributes_Striping_stripToConnectingLanesAhead	= 5
} e_LaneAttributes_Striping;

/* LaneAttributes-Striping */
typedef BIT_STRING_t	 LaneAttributes_Striping_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes_Striping;
asn_struct_free_f LaneAttributes_Striping_free;
asn_struct_print_f LaneAttributes_Striping_print;
asn_constr_check_f LaneAttributes_Striping_constraint;
ber_type_decoder_f LaneAttributes_Striping_decode_ber;
der_type_encoder_f LaneAttributes_Striping_encode_der;
xer_type_decoder_f LaneAttributes_Striping_decode_xer;
xer_type_encoder_f LaneAttributes_Striping_encode_xer;
per_type_decoder_f LaneAttributes_Striping_decode_uper;
per_type_encoder_f LaneAttributes_Striping_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_Striping_H_ */
#include <asn_internal.h>

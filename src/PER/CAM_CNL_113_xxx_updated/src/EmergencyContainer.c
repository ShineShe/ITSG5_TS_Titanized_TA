/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "CAM.asn"
 */

#include "EmergencyContainer.h"

static asn_TYPE_member_t asn_MBR_EmergencyContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyContainer, lightBarSirenInUse),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LightBarSirenInUse,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lightBarSirenInUse"
		},
	{ ATF_POINTER, 2, offsetof(struct EmergencyContainer, incidentIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CauseCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"incidentIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct EmergencyContainer, emergencyPriority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyPriority,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"emergencyPriority"
		},
};
static int asn_MAP_EmergencyContainer_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_EmergencyContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EmergencyContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lightBarSirenInUse */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* incidentIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* emergencyPriority */
};
static asn_SEQUENCE_specifics_t asn_SPC_EmergencyContainer_specs_1 = {
	sizeof(struct EmergencyContainer),
	offsetof(struct EmergencyContainer, _asn_ctx),
	asn_MAP_EmergencyContainer_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EmergencyContainer_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EmergencyContainer = {
	"EmergencyContainer",
	"EmergencyContainer",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EmergencyContainer_tags_1,
	sizeof(asn_DEF_EmergencyContainer_tags_1)
		/sizeof(asn_DEF_EmergencyContainer_tags_1[0]), /* 1 */
	asn_DEF_EmergencyContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_EmergencyContainer_tags_1)
		/sizeof(asn_DEF_EmergencyContainer_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EmergencyContainer_1,
	3,	/* Elements count */
	&asn_SPC_EmergencyContainer_specs_1	/* Additional specs */
};


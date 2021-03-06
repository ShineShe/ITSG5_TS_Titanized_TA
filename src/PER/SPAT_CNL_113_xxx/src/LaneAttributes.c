/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#include "LaneAttributes.h"

static asn_TYPE_member_t asn_MBR_LaneAttributes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaneAttributes, directionalUse),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneDirection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"directionalUse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneAttributes, sharedWith),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneSharing,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sharedWith"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneAttributes, laneType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LaneTypeAttributes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laneType"
		},
	{ ATF_POINTER, 1, offsetof(struct LaneAttributes, regional),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalLaneAttributes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regional"
		},
};
static int asn_MAP_LaneAttributes_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_LaneAttributes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LaneAttributes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* directionalUse */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sharedWith */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* laneType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_specs_1 = {
	sizeof(struct LaneAttributes),
	offsetof(struct LaneAttributes, _asn_ctx),
	asn_MAP_LaneAttributes_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LaneAttributes_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LaneAttributes = {
	"LaneAttributes",
	"LaneAttributes",
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
	asn_DEF_LaneAttributes_tags_1,
	sizeof(asn_DEF_LaneAttributes_tags_1)
		/sizeof(asn_DEF_LaneAttributes_tags_1[0]), /* 1 */
	asn_DEF_LaneAttributes_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaneAttributes_tags_1)
		/sizeof(asn_DEF_LaneAttributes_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LaneAttributes_1,
	4,	/* Elements count */
	&asn_SPC_LaneAttributes_specs_1	/* Additional specs */
};


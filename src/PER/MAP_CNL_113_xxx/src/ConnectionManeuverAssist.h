/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_REG_D.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ConnectionManeuverAssist_H_
#define	_ConnectionManeuverAssist_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneConnectionID.h"
#include "ZoneLength.h"
#include "WaitOnStopline.h"
#include "PedestrianBicycleDetect.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Reg_ConnectionManeuverAssist;

/* ConnectionManeuverAssist */
typedef struct ConnectionManeuverAssist {
	LaneConnectionID_t	 connectionID;
	ZoneLength_t	*queueLength	/* OPTIONAL */;
	ZoneLength_t	*availableStorageLength	/* OPTIONAL */;
	WaitOnStopline_t	*waitOnStop	/* OPTIONAL */;
	PedestrianBicycleDetect_t	*pedBicycleDetect	/* OPTIONAL */;
	struct Reg_ConnectionManeuverAssist	*regional	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnectionManeuverAssist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalConnectionManeuverAssist.h"

#endif	/* _ConnectionManeuverAssist_H_ */
#include <asn_internal.h>

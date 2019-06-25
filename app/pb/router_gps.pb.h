/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6-dev at Wed Oct 24 15:48:44 2018. */

#ifndef PB_ROUTER_GPS_PB_H_INCLUDED
#define PB_ROUTER_GPS_PB_H_INCLUDED
#include <pb.h>

#include "IdentityMsg.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct {
    proto_router_identity_msg_t Iden;
    pb_callback_t GPSInfo;
/* @@protoc_insertion_point(struct:proto_router_g_p_s_req_t) */
} proto_router_g_p_s_req_t;

typedef struct {
    int32_t ID;
    bool has_Elevation;
    int32_t Elevation;
    bool has_Azimuth;
    int32_t Azimuth;
    bool has_SNR;
    int32_t SNR;
    bool has_Used;
    int32_t Used;
    pb_callback_t Type;
/* @@protoc_insertion_point(struct:proto_router_satellite_t) */
} proto_router_satellite_t;

typedef struct {
    bool has_Timestamp;
    uint32_t Timestamp;
    bool has_Latitude;
    int32_t Latitude;
    bool has_Longitude;
    int32_t Longitude;
    bool has_Altitude;
    int32_t Altitude;
    bool has_Quality;
    int32_t Quality;
    bool has_Dimension;
    int32_t Dimension;
    bool has_PDOP;
    int32_t PDOP;
    bool has_HDOP;
    int32_t HDOP;
    bool has_VDOP;
    int32_t VDOP;
    bool has_UsedStar;
    int32_t UsedStar;
    bool has_ViewStar;
    int32_t ViewStar;
    bool has_Horizontal;
    int32_t Horizontal;
    bool has_Vertical;
    int32_t Vertical;
    bool has_FixTime;
    int32_t FixTime;
    bool has_SatelliteInfo;
    proto_router_satellite_t SatelliteInfo;
/* @@protoc_insertion_point(struct:proto_router_GPS_t) */
} proto_router_GPS_t;

/* Default values for struct fields */
extern const int32_t proto_router_satellite_elevation_default;
extern const int32_t proto_router_satellite_azimuth_default;
extern const int32_t proto_router_satellite_SNR_default;
extern const int32_t proto_router_satellite_used_default;
extern const uint32_t proto_router_GPS_timestamp_default;
extern const int32_t proto_router_GPS_latitude_default;
extern const int32_t proto_router_GPS_longitude_default;
extern const int32_t proto_router_GPS_altitude_default;
extern const int32_t proto_router_GPS_quality_default;
extern const int32_t proto_router_GPS_dimension_default;
extern const int32_t proto_router_GPS_PDOP_default;
extern const int32_t proto_router_GPS_HDOP_default;
extern const int32_t proto_router_GPS_VDOP_default;
extern const int32_t proto_router_GPS_used_star_default;
extern const int32_t proto_router_GPS_view_star_default;
extern const int32_t proto_router_GPS_horizontal_default;
extern const int32_t proto_router_GPS_vertical_default;
extern const int32_t proto_router_GPS_fix_time_default;

/* Initializer values for message structs */
#define PROTO_ROUTER_G_P_S_REQ_INIT_DEFAULT      {PROTO_ROUTER_IDENTITY_MSG_INIT_DEFAULT, {{NULL}, NULL}}
#define PROTO_ROUTER_SATELLITE_INIT_DEFAULT      {0, false, -1, false, -1, false, -1, false, 0, {{NULL}, NULL}}
#define PROTO_ROUTER_GPS_INIT_DEFAULT            {false, 0u, false, 2000000000, false, 2000000000, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, PROTO_ROUTER_SATELLITE_INIT_DEFAULT}
#define PROTO_ROUTER_G_P_S_REQ_INIT_ZERO         {PROTO_ROUTER_IDENTITY_MSG_INIT_ZERO, {{NULL}, NULL}}
#define PROTO_ROUTER_SATELLITE_INIT_ZERO         {0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}}
#define PROTO_ROUTER_GPS_INIT_ZERO               {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, PROTO_ROUTER_SATELLITE_INIT_ZERO}

/* Field tags (for use in manual encoding/decoding) */
#define PROTO_ROUTER_G_P_S_REQ_IDEN_TAG          1
#define PROTO_ROUTER_G_P_S_REQ_GPSINFO_TAG       2
#define PROTO_ROUTER_SATELLITE_ID_TAG            1
#define PROTO_ROUTER_SATELLITE_ELEVATION_TAG     2
#define PROTO_ROUTER_SATELLITE_AZIMUTH_TAG       3
#define PROTO_ROUTER_SATELLITE_SNR_TAG           4
#define PROTO_ROUTER_SATELLITE_USED_TAG          5
#define PROTO_ROUTER_SATELLITE_TYPE_TAG          6
#define PROTO_ROUTER_GPS_TIMESTAMP_TAG           1
#define PROTO_ROUTER_GPS_LATITUDE_TAG            2
#define PROTO_ROUTER_GPS_LONGITUDE_TAG           3
#define PROTO_ROUTER_GPS_ALTITUDE_TAG            4
#define PROTO_ROUTER_GPS_QUALITY_TAG             5
#define PROTO_ROUTER_GPS_DIMENSION_TAG           6
#define PROTO_ROUTER_GPS_PDOP_TAG                7
#define PROTO_ROUTER_GPS_HDOP_TAG                8
#define PROTO_ROUTER_GPS_VDOP_TAG                9
#define PROTO_ROUTER_GPS_USEDSTAR_TAG            10
#define PROTO_ROUTER_GPS_VIEWSTAR_TAG            11
#define PROTO_ROUTER_GPS_HORIZONTAL_TAG          14
#define PROTO_ROUTER_GPS_VERTICAL_TAG            15
#define PROTO_ROUTER_GPS_FIXTIME_TAG             16
#define PROTO_ROUTER_GPS_SATELLITEINFO_TAG       17

/* Struct field encoding specification for nanopb */
extern const pb_field_t proto_router_g_p_s_req_fields[3];
extern const pb_field_t proto_router_satellite_fields[7];
extern const pb_field_t proto_router_GPS_fields[16];

/* Maximum encoded size of messages (where known) */
/* PROTO_ROUTER_G_P_S_REQ_SIZE depends on runtime parameters */
/* PROTO_ROUTER_SATELLITE_SIZE depends on runtime parameters */
#define PROTO_ROUTER_GPS_SIZE                    (142 + PROTO_ROUTER_SATELLITE_SIZE)

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ROUTER_GPS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
/*
 * Copyright 2013 André Hentschel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef _BDATYPES_
#define _BDATYPES_

#include "wine/winheader_enter.h"

typedef struct _BDANODE_DESCRIPTOR
{
    ULONG ulBdaNodeType;
    GUID guidFunction;
    GUID guidName;
} BDANODE_DESCRIPTOR, *PBDANODE_DESCRIPTOR;

typedef struct _BDA_SIGNAL_TIMEOUTS
{
    ULONG      ulCarrierTimeoutMs;
    ULONG      ulScanningTimeoutMs;
    ULONG      ulTuningTimeoutMs;
} BDA_SIGNAL_TIMEOUTS, *PBDA_SIGNAL_TIMEOUTS;

typedef struct _BDA_TEMPLATE_CONNECTION
{
    ULONG FromNodeType;
    ULONG FromNodePinType;
    ULONG ToNodeType;
    ULONG ToNodePinType;
} BDA_TEMPLATE_CONNECTION, *PBDA_TEMPLATE_CONNECTION;

typedef enum MEDIA_SAMPLE_CONTENT
{
    MEDIA_TRANSPORT_PACKET,
    MEDIA_ELEMENTARY_STREAM,
    MEDIA_MPEG2_PSI,
    MEDIA_TRANSPORT_PAYLOAD
} MEDIA_SAMPLE_CONTENT;

typedef struct
{
    ULONG ulPID;
    MEDIA_SAMPLE_CONTENT MediaSampleContent;
} PID_MAP;

typedef enum MUX_PID_TYPE
{
    PID_OTHER = -1,
    PID_ELEMENTARY_STREAM,
    PID_MPEG2_SECTION_PSI_SI,
} MUX_PID_TYPE;

#include <pshpack2.h>
typedef struct _BDA_MUX_PIDLISTITEM
{
    USHORT usPIDNumber;
    USHORT usProgramNumber;
    MUX_PID_TYPE ePIDType;
} BDA_MUX_PIDLISTITEM, *PBDA_MUX_PIDLISTITEM;
#include <poppack.h>

typedef enum BDA_CONDITIONALACCESS_REQUESTTYPE
{
    CONDITIONALACCESS_ACCESS_UNSPECIFIED,
    CONDITIONALACCESS_ACCESS_NOT_POSSIBLE,
    CONDITIONALACCESS_ACCESS_POSSIBLE,
    CONDITIONALACCESS_ACCESS_POSSIBLE_NO_STREAMING_DISRUPTION
} BDA_CONDITIONALACCESS_REQUESTTYPE;

typedef enum BDA_CONDITIONALACCESS_MMICLOSEREASON
{
    CONDITIONALACCESS_UNSPECIFIED,
    CONDITIONALACCESS_CLOSED_ITSELF,
    CONDITIONALACCESS_TUNER_REQUESTED_CLOSE,
    CONDITIONALACCESS_DIALOG_TIMEOUT,
    CONDITIONALACCESS_DIALOG_FOCUS_CHANGE,
    CONDITIONALACCESS_DIALOG_USER_DISMISSED,
    CONDITIONALACCESS_DIALOG_USER_NOT_AVAILABLE
} BDA_CONDITIONALACCESS_MMICLOSEREASON;

typedef enum BDA_CONDITIONALACCESS_SESSION_RESULT
{
    CONDITIONALACCESS_SUCCESSFULL,
    CONDITIONALACCESS_ENDED_NOCHANGE,
    CONDITIONALACCESS_ABORTED
} BDA_CONDITIONALACCESS_SESSION_RESULT;

typedef enum BDA_DISCOVERY_STATE
{
    BDA_DISCOVERY_UNSPECIFIED,
    BDA_DISCOVERY_REQUIRED,
    BDA_DISCOVERY_COMPLETE
} BDA_DISCOVERY_STATE;

typedef enum ApplicationTypeType
{
    SCTE28_ConditionalAccess,
    SCTE28_POD_Host_Binding_Information,
    SCTE28_IPService,
    SCTE28_NetworkInterface_SCTE55_2,
    SCTE28_NetworkInterface_SCTE55_1,
    SCTE28_CopyProtection,
    SCTE28_Diagnostic,
    SCTE28_Undesignated,
    SCTE28_Reserved,
} ApplicationTypeType;

typedef enum GuardInterval
{
    BDA_GUARD_NOT_SET = -1,
    BDA_GUARD_NOT_DEFINED,
    BDA_GUARD_1_32,
    BDA_GUARD_1_16,
    BDA_GUARD_1_8,
    BDA_GUARD_1_4,
    BDA_GUARD_1_128,
    BDA_GUARD_19_128,
    BDA_GUARD_19_256,
    BDA_GUARD_MAX,
} GuardInterval;

typedef enum TransmissionMode
{
    BDA_XMIT_MODE_NOT_SET = -1,
    BDA_XMIT_MODE_NOT_DEFINED,
    BDA_XMIT_MODE_2K,
    BDA_XMIT_MODE_8K,
    BDA_XMIT_MODE_4K,
    BDA_XMIT_MODE_2K_INTERLEAVED,
    BDA_XMIT_MODE_4K_INTERLEAVED,
    BDA_XMIT_MODE_1K,
    BDA_XMIT_MODE_16K,
    BDA_XMIT_MODE_32K,
    BDA_XMIT_MODE_MAX,
} TransmissionMode;

typedef enum SpectralInversion
{
    BDA_SPECTRAL_INVERSION_NOT_SET = -1,
    BDA_SPECTRAL_INVERSION_NOT_DEFINED,
    BDA_SPECTRAL_INVERSION_AUTOMATIC,
    BDA_SPECTRAL_INVERSION_NORMAL,
    BDA_SPECTRAL_INVERSION_INVERTED,
    BDA_SPECTRAL_INVERSION_MAX
} SpectralInversion;

typedef enum BinaryConvolutionCodeRate
{
    BDA_BCC_RATE_NOT_SET = -1,
    BDA_BCC_RATE_NOT_DEFINED,
    BDA_BCC_RATE_1_2,
    BDA_BCC_RATE_2_3,
    BDA_BCC_RATE_3_4,
    BDA_BCC_RATE_3_5,
    BDA_BCC_RATE_4_5,
    BDA_BCC_RATE_5_6,
    BDA_BCC_RATE_5_11,
    BDA_BCC_RATE_7_8,
    BDA_BCC_RATE_1_4,
    BDA_BCC_RATE_1_3,
    BDA_BCC_RATE_2_5,
    BDA_BCC_RATE_6_7,
    BDA_BCC_RATE_8_9,
    BDA_BCC_RATE_9_10,
    BDA_BCC_RATE_MAX,
} BinaryConvolutionCodeRate;

typedef enum Polarisation
{
    BDA_POLARISATION_NOT_SET = -1,
    BDA_POLARISATION_NOT_DEFINED,
    BDA_POLARISATION_LINEAR_H,
    BDA_POLARISATION_LINEAR_V,
    BDA_POLARISATION_CIRCULAR_L,
    BDA_POLARISATION_CIRCULAR_R,
    BDA_POLARISATION_MAX,
} Polarisation;

typedef enum FECMethod
{
    BDA_FEC_METHOD_NOT_SET = -1,
    BDA_FEC_METHOD_NOT_DEFINED,
    BDA_FEC_VITERBI,
    BDA_FEC_RS_204_188,
    BDA_FEC_LDPC,
    BDA_FEC_BCH,
    BDA_FEC_RS_147_130,
    BDA_FEC_MAX,
} FECMethod;

typedef enum ModulationType
{
    BDA_MOD_NOT_SET = -1,
    BDA_MOD_NOT_DEFINED,
    BDA_MOD_16QAM,
    BDA_MOD_32QAM,
    BDA_MOD_64QAM,
    BDA_MOD_80QAM,
    BDA_MOD_96QAM,
    BDA_MOD_112QAM,
    BDA_MOD_128QAM,
    BDA_MOD_160QAM,
    BDA_MOD_192QAM,
    BDA_MOD_224QAM,
    BDA_MOD_256QAM,
    BDA_MOD_320QAM,
    BDA_MOD_384QAM,
    BDA_MOD_448QAM,
    BDA_MOD_512QAM,
    BDA_MOD_640QAM,
    BDA_MOD_768QAM,
    BDA_MOD_896QAM,
    BDA_MOD_1024QAM,
    BDA_MOD_QPSK,
    BDA_MOD_BPSK,
    BDA_MOD_OQPSK,
    BDA_MOD_8VSB,
    BDA_MOD_16VSB,
    BDA_MOD_ANALOG_AMPLITUDE,
    BDA_MOD_ANALOG_FREQUENCY,
    BDA_MOD_8PSK,
    BDA_MOD_RF,
    BDA_MOD_16APSK,
    BDA_MOD_32APSK,
    BDA_MOD_NBC_QPSK,
    BDA_MOD_NBC_8PSK,
    BDA_MOD_DIRECTV,
    BDA_MOD_ISDB_T_TMCC,
    BDA_MOD_ISDB_S_TMCC,
    BDA_MOD_MAX,
} ModulationType;

typedef enum RollOff
{
    BDA_ROLL_OFF_NOT_SET = -1,
    BDA_ROLL_OFF_NOT_DEFINED,
    BDA_ROLL_OFF_20,
    BDA_ROLL_OFF_25,
    BDA_ROLL_OFF_35,
    BDA_ROLL_OFF_MAX,
} RollOff;

typedef enum Pilot
{
    BDA_PILOT_NOT_SET = -1,
    BDA_PILOT_NOT_DEFINED,
    BDA_PILOT_OFF,
    BDA_PILOT_ON,
    BDA_PILOT_MAX,
} Pilot;

#include "wine/winheader_exit.h"

#endif /* _BDATYPES_ */

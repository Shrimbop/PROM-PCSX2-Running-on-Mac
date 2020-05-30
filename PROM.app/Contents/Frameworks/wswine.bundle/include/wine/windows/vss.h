/*** Autogenerated by WIDL 4.12.1 from /Users/gcenx/Downloads/CROSSOVER19.0.1/sources/wine/include/vss.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __vss_h__
#define __vss_h__

#ifdef __i386_on_x86_64__
#pragma clang default_addr_space(push, ptr32)
#pragma clang storage_addr_space(push, ptr32)
#endif
/* Forward declarations */

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef GUID VSS_ID;
typedef WCHAR *VSS_PWSZ;
typedef LONGLONG VSS_TIMESTAMP;
typedef enum _VSS_APPLICATION_LEVEL {
    VSS_APP_AUTO = -1,
    VSS_APP_UNKNOWN = 0,
    VSS_APP_SYSTEM = 1,
    VSS_APP_BACK_END = 2,
    VSS_APP_FRONT_END = 3,
    VSS_APP_SYSTEM_RM = 4
} VSS_APPLICATION_LEVEL;
typedef enum _VSS_BACKUP_TYPE {
    VSS_BT_UNDEFINED = 0,
    VSS_BT_FULL = 1,
    VSS_BT_INCREMENTAL = 2,
    VSS_BT_DIFFERENTIAL = 3,
    VSS_BT_LOG = 4,
    VSS_BT_COPY = 5,
    VSS_BT_OTHER = 6
} VSS_BACKUP_TYPE;
typedef enum _VSS_BACKUP_TYPE *PVSS_BACKUP_TYPE;
typedef enum _VSS_RESTORE_TYPE {
    VSS_RTYPE_UNDEFINED = 0,
    VSS_RTYPE_BY_COPY = 1,
    VSS_RTYPE_IMPORT = 2,
    VSS_RTYPE_OTHER = 3
} VSS_RESTORE_TYPE;
typedef enum _VSS_RESTORE_TYPE *PVSS_RESTORE_TYPE;
typedef enum _VSS_WRITER_STATE {
    VSS_WS_UNKNOWN = 0,
    VSS_WS_STABLE = 1,
    VSS_WS_WAITING_FOR_FREEZE = 2,
    VSS_WS_WAITING_FOR_THAW = 3,
    VSS_WS_WAITING_FOR_POST_SNAPSHOT = 4,
    VSS_WS_WAITING_FOR_BACKUP_COMPLETE = 5,
    VSS_WS_FAILED_AT_IDENTIFY = 6,
    VSS_WS_FAILED_AT_PREPARE_BACKUP = 7,
    VSS_WS_FAILED_AT_PREPARE_SNAPSHOT = 8,
    VSS_WS_FAILED_AT_FREEZE = 9,
    VSS_WS_FAILED_AT_THAW = 10,
    VSS_WS_FAILED_AT_POST_SNAPSHOT = 11,
    VSS_WS_FAILED_AT_BACKUP_COMPLETE = 12,
    VSS_WS_FAILED_AT_PRE_RESTORE = 13,
    VSS_WS_FAILED_AT_POST_RESTORE = 14,
    VSS_WS_FAILED_AT_BACKUPSHUTDOWN = 15,
    VSS_WS_COUNT = 16
} VSS_WRITER_STATE;
typedef enum _VSS_WRITER_STATE *PVSS_WRITER_STATE;
typedef enum _VSS_OBJECT_TYPE {
    VSS_OBJECT_UNKNOWN = 0,
    VSS_OBJECT_NONE = 1,
    VSS_OBJECT_SNAPSHOT_SET = 2,
    VSS_OBJECT_SNAPSHOT = 3,
    VSS_OBJECT_PROVIDER = 4,
    VSS_OBJECT_TYPE_COUNT = 5
} VSS_OBJECT_TYPE;
typedef enum _VSS_OBJECT_TYPE *PVSS_OBJECT_TYPE;
typedef enum _VSS_SNAPSHOT_STATE {
    VSS_SS_UNKNOWN = 0,
    VSS_SS_PREPARING = 1,
    VSS_SS_PROCESSING_PREPARE = 2,
    VSS_SS_PREPARED = 3,
    VSS_SS_PROCESSING_PRECOMMIT = 4,
    VSS_SS_PRECOMMITTED = 5,
    VSS_SS_PROCESSING_COMMIT = 6,
    VSS_SS_COMMITTED = 7,
    VSS_SS_PROCESSING_POSTCOMMIT = 8,
    VSS_SS_PROCESSING_PREFINALCOMMIT = 9,
    VSS_SS_PREFINALCOMMITTED = 10,
    VSS_SS_PROCESSING_POSTFINALCOMMIT = 11,
    VSS_SS_CREATED = 12,
    VSS_SS_ABORTED = 13,
    VSS_SS_DELETED = 14,
    VSS_SS_POSTCOMMITTED = 15,
    VSS_SS_COUNT = 16
} VSS_SNAPSHOT_STATE;
typedef enum _VSS_SNAPSHOT_STATE *PVSS_SNAPSHOT_STATE;
typedef struct _VSS_SNAPSHOT_PROP {
    VSS_ID m_SnapshotId;
    VSS_ID m_SnapshotSetId;
    LONG m_lSnapshotsCount;
    VSS_PWSZ m_pwszSnapshotDeviceObject;
    VSS_PWSZ m_pwszOriginalVolumeName;
    VSS_PWSZ m_pwszOriginatingMachine;
    VSS_PWSZ m_pwszServiceMachine;
    VSS_PWSZ m_pwszExposedName;
    VSS_PWSZ m_pwszExposedPath;
    VSS_ID m_ProviderId;
    LONG m_lSnapshotAttributes;
    VSS_TIMESTAMP m_tsCreationTimestamp;
    VSS_SNAPSHOT_STATE m_eStatus;
} VSS_SNAPSHOT_PROP;
typedef struct _VSS_SNAPSHOT_PROP *PVSS_SNAPSHOT_PROP;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#ifdef __i386_on_x86_64__
#pragma clang default_addr_space(pop)
#pragma clang storage_addr_space(pop)
#endif
#endif /* __vss_h__ */

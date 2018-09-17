#ifndef OS_H
#define OS_H
/* File version information [BSW00402] */
#define OS_MODULE_ID (1U)
#define OS_VENDOR_ID (11U)
#define OS_AR_MAJOR_VERSION (4U)
#define OS_AR_MINOR_VERSION (0U)
#define OS_AR_PATCH_VERSION (2U)
#define OS_AR_RELEASE_MAJOR_VERSION (4U)
#define OS_AR_RELEASE_MINOR_VERSION (0U)
#define OS_AR_RELEASE_REVISION_VERSION (2U)
#define OS_SW_MAJOR_VERSION (5U)
#define OS_SW_MINOR_VERSION (1U)
#define OS_SW_PATCH_VERSION (0U)

#include <Std_Types.h>  /* [$UKS 649] : Includes Std_Types.h EHI 93361 */

typedef sint32 Os_jmp_buf[16];

#define OS_MEMMAP_DECLARATIONS (FALSE)
#define OS_MEMMAP_DEFINITIONS  (FALSE)

typedef uint8_least Os_ResourceCountType;
typedef uint32 Os_StackTraceType;
typedef uint32 Os_StackValueType;
typedef uint32 Os_StackSizeType;

typedef enum {OS_BUDGET = 0U, OS_ECC_START, OS_ECC_RESUME, OS_ECC_WAIT} Os_StackOverrunType; /* [$UKS 1236] [$UKS 1228] [$UKS 1235] */

#define OS_EXTENDED_STATUS  /* [$UKS 7] [$UKS 761] */
#define OS_ORTI_BUILD
#define OS_SCALABILITY_CLASS_1 /* [$UKS 762] [$UKS 763] [$UKS 764] [$UKS 765] */

/* OSApplications */
typedef uint8_least ApplicationType; /* [$UKS 411] */
#define INVALID_OSAPPLICATION ((ApplicationType)0U)  /* [$UKS 413] */

typedef void (*Os_AppErrorHookFunctionType)(StatusType e); /* [$UKS 450] */
typedef uint32 Os_tmaskType;

typedef enum {PRO_IGNORE = 0U, PRO_TERMINATETASKISR, PRO_TERMINATEAPPL, PRO_TERMINATEAPPL_RESTART, PRO_SHUTDOWN} ProtectionReturnType; /* [$UKS 589] [$UKS 590] [$UKS 591] */

typedef uint16 CoreIdType;  /* [$UKS 1608] */
typedef uint16 SpinlockIdType;  /* [$UKS 1605] */
#ifndef STATUSTYPEDEFINED
  #define STATUSTYPEDEFINED
  typedef unsigned char StatusType; /* [$UKS 468] */
  #define E_OK ((StatusType)0U)
#endif /* STATUSTYPEDEFINED */
#define E_OS_ACCESS ((StatusType)1U)
#define E_OS_CALLEVEL ((StatusType)2U)
#define E_OS_ID ((StatusType)3U)
#define E_OS_LIMIT ((StatusType)4U)
#define E_OS_NOFUNC ((StatusType)5U)
#define E_OS_RESOURCE ((StatusType)6U)
#define E_OS_STATE ((StatusType)7U)
#define E_OS_VALUE ((StatusType)8U)
#define E_OS_SERVICEID ((StatusType)9U)
#define E_OS_ILLEGAL_ADDRESS ((StatusType)10U)
#define E_OS_MISSINGEND ((StatusType)11U)
#define E_OS_DISABLEDINT ((StatusType)12U)
#define E_OS_STACKFAULT ((StatusType)13U)
#define E_OS_PROTECTION_MEMORY ((StatusType)14U)
#define E_OS_PROTECTION_TIME ((StatusType)15U)
#define E_OS_PROTECTION_ARRIVAL ((StatusType)16U)
#define E_OS_PROTECTION_LOCKED ((StatusType)17U)
#define E_OS_PROTECTION_EXCEPTION ((StatusType)18U)
#define E_OS_CORE ((StatusType)19U)
#define E_OS_SPINLOCK ((StatusType)20U)
#define E_OS_INTERFERENCE_DEADLOCK ((StatusType)21U)
#define E_OS_NESTING_DEADLOCK ((StatusType)22U)
#define E_OS_SYS_NO_RESTART ((StatusType)23U)
#define E_OS_SYS_RESTART ((StatusType)24U)
#define E_OS_SYS_OVERRUN ((StatusType)25U)
typedef P2VAR(StatusType, TYPEDEF, OS_VAR) Os_StatusRefType;

/* Timing */
typedef unsigned int TickType; /* [$UKS 276] */
typedef P2VAR(TickType, TYPEDEF, OS_VAR) TickRefType; /* [$UKS 277] */
typedef uint32 PhysicalTimeType; /* [$UKS  842] */
typedef unsigned int Os_StopwatchTickType; /* [$UKS 535] */
typedef P2VAR(Os_StopwatchTickType, TYPEDEF, OS_VAR) Os_StopwatchTickRefType;
typedef signed int Os_TimeLimitType;

/* AppModes */
typedef uint8_least AppModeType; /* [$UKS 382] */

/* Memory Partitioning */
typedef uint8_least AccessType;  /* [$UKS 594] */
#define OS_ACCESS_READ    (1U)
#define OS_ACCESS_WRITE   (2U)
#define OS_ACCESS_EXECUTE (4U)
#define OS_ACCESS_STACK   (8U)
/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, OSMEMORY_IS_READABLE ,OSMEMORY_IS_WRITEABLE ,OSMEMORY_IS_EXECUTABLE ,OSMEMORY_IS_STACKSPACE) */
#define OSMEMORY_IS_READABLE(x)   (0U != (x & OS_ACCESS_READ))    /* [$UKS 597] */
#define OSMEMORY_IS_WRITEABLE(x)  (0U != (x & OS_ACCESS_WRITE))   /* [$UKS 598] */
#define OSMEMORY_IS_EXECUTABLE(x) (0U != (x & OS_ACCESS_EXECUTE)) /* [$UKS 599] */
#define OSMEMORY_IS_STACKSPACE(x) (0U != (x & OS_ACCESS_STACK))   /* [$UKS 600] */
typedef P2CONST(uint8, TYPEDEF, OS_VAR) MemoryStartAddressType; /* [$UKS 971] */
typedef unsigned int MemorySizeType; /* [$UKS 972] */

typedef enum {RESTART = 1U, NO_RESTART} RestartType;  /* [$UKS 414] */
typedef enum {APPLICATION_ACCESSIBLE = 0U, APPLICATION_RESTARTING, APPLICATION_TERMINATED} ApplicationStateType;  /* [$UKS 1314] */
typedef P2VAR(ApplicationStateType, TYPEDEF, OS_VAR) ApplicationStateRefType;  /* [$UKS 1315] */
typedef enum {ACCESS = 0U, NO_ACCESS} ObjectAccessType;  /* [$UKS 415] */
typedef enum {OBJECT_TASK = 0U, OBJECT_ISR, OBJECT_ALARM, OBJECT_RESOURCE, OBJECT_COUNTER, OBJECT_SCHEDULETABLE} ObjectTypeType;  /* [$UKS 416] */
typedef CONSTP2CONST(void, TYPEDEF, OS_VAR) Os_AnyType;

typedef uint8_least TrustedFunctionIndexType; /* [$UKS 969] */
typedef P2VAR(void, TYPEDEF, OS_VAR) TrustedFunctionParameterRefType; /* [$UKS 970] */
#define INVALID_FUNCTION ((TrustedFunctionIndexType)-1)

/* Metering */
typedef struct {
  Os_StackValueType stackbase;  /* [$UKS 1234] */
  Os_StackSizeType stackusage;
  Os_StackSizeType stackmax;
} Os_MeterInfoType;
typedef P2VAR(Os_MeterInfoType, TYPEDEF, OS_VAR) Os_MeterInfoRefType;
/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, DeclareEvent) */
#define DeclareEvent(x) /* [$UKS 143] */ /*lint -e(19) : DeclareEvent has no content */
typedef uint8 EventMaskType;  /* [$UKS 141] */
typedef P2VAR(EventMaskType, TYPEDEF, OS_VAR) EventMaskRefType; /* [$UKS 142] */


/* ISRs [$UKS 94] */
typedef uint16 Os_imaskType;
//#ifdef _lint
// static Os_imaskType OS_PMR=0U; /*lint -esym(528,OS_PMR) -esym(551,OS_PMR) allow to be unreferenced */
//#else
 #define OS_PMR ((*(volatile Os_imaskType *) (0xFFFF6448UL)))
//#endif /* _lint */
/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, Os_syncm) */
/* Lint/MISRA checking has a problem with the compiler intrinsic functions so
 * obscure this when lint checking */
#ifdef _lint
 #define Os_syncm()
#else
 #define Os_syncm() {__asm("	syncm");}
#endif /* _lint */

typedef struct {
  Os_MeterInfoType meter;
} Os_ISRDynType;
typedef void (*Os_IsrEntryFunctionType)(void);
typedef struct {
  Os_IsrEntryFunctionType entry_function;
  CONSTP2VAR(Os_ISRDynType, OS_VAR, OS_CONST) dynamic;
  Os_imaskType imask;
  uint16 id;
} Os_ISRType;
typedef P2CONST(Os_ISRType, TYPEDEF, OS_VAR) ISRType;  /* [$UKS 107] */
#define INVALID_ISR ((ISRType)0)  /* [$UKS 108] */
typedef P2VAR(ISRType, TYPEDEF, OS_VAR) ISRRefType;

/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, ISR ,DeclareISR) */
/* [MISRA 2004 Rule 19.13] */ /*lint -save -esym(961, 19.13) */
#define ISR(x) void Os_Entry_##x(void) /* [$UKS 106] [$UKS 98] */
/*lint -restore */
#define DeclareISR(x) /* [$UKS  1185] */ /*lint -e(19) : DeclareISR has no content */
#define OS_IPL (16U)

/* Tasks */
typedef unsigned int Os_bitmask;
typedef struct {
  Os_bitmask bits;
} Os_psetType;
typedef unsigned int Os_tpmaskType;
typedef uint8_least Os_ActivationCountType;
typedef struct {
  Os_MeterInfoType meter;
  Os_ActivationCountType activation_count;
  Os_ResourceCountType resource_count;
} Os_TaskDynType;
typedef void (*Os_TaskEntryFunctionType)(void);

typedef struct {
  CONSTP2VAR(Os_TaskDynType, OS_VAR, OS_CONST) dynamic;
  Os_TaskEntryFunctionType entry_function;
  Os_psetType pset;
  Os_tpmaskType tpmask;
  Os_tpmaskType base_tpmask;
  Os_ActivationCountType activation_count;
  CONSTP2CONST(void, OS_CONST, OS_CONST) activation_fifo;
  uint16 id;
} Os_TaskType;
typedef P2CONST(Os_TaskType, TYPEDEF, OS_VAR) TaskType;  /* [$UKS 55] */
#define INVALID_TASK  (TaskType)0 /* [$UKS 92] */
typedef P2VAR(TaskType, TYPEDEF, OS_VAR) TaskRefType; /* [$UKS 56] */
enum Os_TaskStateType {SUSPENDED = 0U, READY, WAITING, RUNNING};  /* [$UKS 43] [$UKS 47] */
typedef enum Os_TaskStateType TaskStateType;  /* [$UKS 57] */
typedef P2VAR(TaskStateType, TYPEDEF, OS_VAR) TaskStateRefType; /* [$UKS 58] */

typedef struct {
  CONSTP2VAR(TaskType, OS_VAR, OS_CONST) start;
  CONSTP2VAR(TaskType, OS_VAR, OS_CONST) end;
  const uint8_least dyn_index;
  const Os_tpmaskType base_tpmask;
} Os_TaskFifoControl;

/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, TASK ,DeclareTask) */
/* [MISRA 2004 Rule 19.13] */ /*lint -save -esym(961, 19.13) */
#define TASK(x) void Os_Entry_##x(void) /* [$UKS 50] */
/*lint -restore */
#define DeclareTask(x) /* [$UKS 60] */ /*lint -e(19) : DeclareTask has no content */

/* Resources */
typedef struct {
  Os_ResourceCountType access_count;
  TaskType locker;  /* [$UKS 614] */
  union {
    Os_tpmaskType tpmask;
  } saved_priority; /* [MISRA 2004 Rule 18.4] */ /*lint !e960 */
} Os_ResourceDynType;
typedef struct {
  CONSTP2VAR(Os_ResourceDynType, OS_VAR, OS_CONST) dynamic;
  Os_tpmaskType tpmask;
  uint16 id;
} Os_ResourceType;
typedef P2CONST(Os_ResourceType, TYPEDEF, OS_CONST) ResourceType;  /* [$UKS 202] */
/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, DeclareResource) */
#define DeclareResource(x) /* [$UKS 203] */ /*lint -e(19) : DeclareResource has no content */

/* Alarms */
typedef struct {
  TickType maxallowedvalue;
  TickType ticksperbase;
  TickType mincycle;
} AlarmBaseType;  /* [$UKS 278] */
typedef P2VAR(AlarmBaseType, TYPEDEF, OS_VAR) AlarmBaseRefType; /* [$UKS 279] */
typedef struct {
  boolean running;
  TickType match;
  TickType period;
} Os_AlarmDynType;
typedef struct {
  uint8 config;
} Os_AlarmType;
typedef uint8_least AlarmType;  /* [$UKS 280] */
/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, DeclareAlarm ,ALARMCALLBACK) */
#define DeclareAlarm(x) /* [$UKS 281] */ /*lint -e(19) : DeclareAlarm has no content */

typedef void (*Os_AlarmCallbackType)(void);
/* [MISRA 2004 Rule 19.13] */ /*lint -save -esym(961, 19.13) */
#define ALARMCALLBACK(x) FUNC(void, OS_CALLOUT_CODE) Os_Cbk_Alarm_##x(void) /* [$UKS 274] */
/*lint -restore */

/* Counters */
typedef struct {
  boolean Running;
  boolean Pending;
  TickType Delay;
} Os_CounterStatusType;  /* [$UKS 249] */
typedef P2VAR(Os_CounterStatusType, TYPEDEF, OS_VAR) Os_CounterStatusRefType; /* [$UKS 250] */

typedef TickType (*Os_HwCounterNowType)(void);  /* [$UKS 260] */
typedef void (*Os_HwCounterSetType)(TickType Value);  /* [$UKS 261] */
typedef void (*Os_HwCounterStateType)(Os_CounterStatusRefType State); /* [$UKS 262] */
typedef void (*Os_HwCounterCancelType)(void); /* [$UKS 263] */
typedef StatusType (*Os_CounterIncrAdvType)(void);

typedef struct {
  union {
    struct s_swd { /* [$UKS 211] */
      TickType count;
    } sw;
    struct s_hwd { /* [$UKS 212] */
      TickType match;
      boolean running;
    } hw;
  } type_dependent; /* [MISRA 2004 Rule 18.4] */ /*lint !e960 */
} Os_CounterDynType;
typedef struct {
  CONSTP2VAR(Os_CounterDynType, OS_VAR, OS_CONST) dynamic;
  Os_CounterIncrAdvType advincr;
  Os_HwCounterNowType now; /* [$UKS 260] */
  Os_HwCounterSetType set; /* [$UKS 261] */
  Os_HwCounterStateType state; /* [$UKS 262] */
  AlarmBaseType base;
} Os_CounterType;
typedef P2CONST(Os_CounterType, TYPEDEF, OS_CONST) CounterType;  /* [$UKS 223] */
/* [MISRA 2004 Rule 19.7] */ /*lint -estring(961, DeclareCounter) */
#define DeclareCounter(x) /* [$UKS  1183] */ /*lint -e(19) : DeclareCounter has no content */

/* ScheduleTables */
enum Os_ScheduleTableStatusType {SCHEDULETABLE_STOPPED = 0U, SCHEDULETABLE_NEXT, SCHEDULETABLE_WAITING, SCHEDULETABLE_RUNNING, SCHEDULETABLE_RUNNING_AND_SYNCHRONOUS};
typedef enum Os_ScheduleTableStatusType ScheduleTableStatusType; /* [$UKS 327] */
typedef P2VAR(ScheduleTableStatusType, TYPEDEF, OS_VAR) ScheduleTableStatusRefType;  /* [$UKS 328] */
typedef enum {OS_SYNC_NONE, OS_SYNC_IMPLICIT, OS_SYNC_EXPLICIT} Os_ScheduleTableSyncType;
typedef enum {OS_SYNC_ASYNC, OS_SYNC_ADVANCING, OS_SYNC_RETARDING, OS_SYNC_INSYNC} Os_ScheduleTableSyncStateType;

struct Os_structScheduleTableDynType;
typedef struct {
  CONSTP2VAR(struct Os_structScheduleTableDynType, OS_VAR, OS_CONST) dynamic;
  CounterType counter;
  boolean repeat;
  uint16 id;
  uint16 config;
  uint16 initial;
} Os_ScheduleTableType;
typedef P2CONST(Os_ScheduleTableType, TYPEDEF, OS_CONST) ScheduleTableType;  /* [$UKS 326] */
typedef P2VAR(ScheduleTableType, TYPEDEF, OS_VAR) ScheduleTableRefType;

typedef struct Os_structScheduleTableDynType {
  TickType match;
  ScheduleTableType next;
  ScheduleTableStatusType state;
  uint16_least config;
} Os_ScheduleTableDynType;

void Os_Entry_OsTask_0(void);
#define ActivateTask(x)	E_OK
#define SuspendOSInterrupts() do { } while(0)
#define ResumeOSInterrupts() do { } while(0)
#define TerminateTask() do { } while(0)
#define StartScheduleTableRel(x,y) E_OK
#define StopScheduleTable(x) E_OK
#define GetResource(x) 0
#define ReleaseResource(x) 0
#define IncrementCounter(Rte_TickCounter) 0
#endif /* OS_H */

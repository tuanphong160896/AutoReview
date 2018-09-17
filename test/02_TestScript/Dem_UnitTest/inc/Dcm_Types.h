#ifndef DCM_TYPES_H
#define DCM_TYPES_H

#include "Std_Types.h"


typedef uint8 Dcm_OpStatusType;

#ifndef DCM_INITIAL
#define DCM_INITIAL 0x00    /* Indicates the initial call to the operation */
#endif

#ifndef DCM_PENDING
#define DCM_PENDING 0x01    /* Indicates that a pending return has been done on the previous call of the operation */
#endif

#ifndef DCM_CANCEL
#define DCM_CANCEL  0x02    /* Indicates that the DCM requests to cancel the pending operation */
#endif

#ifndef DCM_FORCE_RCRRP_OK
#define DCM_FORCE_RCRRP_OK  0x03    /* Confirm a response pending transmission */
#endif

#endif

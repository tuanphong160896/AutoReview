// ----------------------------------------------------------------------------
// COPYRIGHT RESERVED, 2009, Robert Bosch GmbH. All rights reserved.  The
// reproduction, distribution and utilization of this document as well as the
// communication of its contents to others without explicit authorization is
// prohibited.  Offenders will be held liable for the payment of damages.  All
// rights reserved in the event of the grant of a patent, utility model or
// design.
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
//! \file
//! \brief Common Exclusive Area Handling
//!
//! $Source: Config/SchM/SchM_Default.h $
//! $Author: Geiger Juergen (CDG-SMT/ESB1) (GGE2SI) $
//! $Revision: 1.1 $
//! $Date: 2010/10/21 13:21:25IST $
//!
//! To ease Configuring Exclusive Area Handling the component specific handling
//! is mapped to a common handling. Only in case if a component specific
//! handling is required the component specific file "SchM_<MSN>.h" has to be
//! adapted.
//! Design specification: AUTOSAR_SWS_BSW_Scheduler.pdf Version 3.1 Rev0001
// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
// History:
//   $Log: Config/SchM/SchM_Default.h  $
//   Revision 1.1 2010/10/21 13:21:25IST Geiger Juergen (CDG-SMT/ESB1) (GGE2SI) 
//   Initial revision
//   Member added to project d:/MKS_Data/Projects/BSW/Dev/Dev_BSW_PF_V850xx4/Dev_BSW_PF_V850xx4.pj
//   Revision 1.1 2010/08/31 12:50:01MESZ Geiger Juergen (CDG-SMT/ESB1) (GGE2SI) 
//   Initial revision
//   Member added to project d:/MKS_Data/Projects/BSW/Dev/Dev_BSW_PF_V850xx4/Dev_BSW_PF_V850xx4.pj
// ----------------------------------------------------------------------------


#ifndef SCHM_DEFAULT_H
#define SCHM_DEFAULT_H

extern void DI(void);           /* V850_req 595 */
extern void EI(void);           /* V850_req 596 */

// ---- Includes --------------------------------------------------------------

//TODO: Remove the following error statement after configuring this file.
//#error "Please configure file SchM_Default.h"

// The integrator shall implement the common services SCHM_ENTER_DEFAULT and
// SCHM_EXIT_DEFAULT.

#define SCHM_ENTER_DEFAULT()    DI() /* TODO: */

#define SCHM_EXIT_DEFAULT()     EI() /* TODO: */


#endif /* SCHM_DEFAULT_H */

// -------- END OF FILE -------------------------------------------------------

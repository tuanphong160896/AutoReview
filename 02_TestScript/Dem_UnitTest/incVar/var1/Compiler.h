 /*
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2016. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * Based on AUTOSAR_SWS_CompilerAbstraction.pdf; AR4.2; Rev 2 and BSW_CodingGuidelines_Cur_v.1.10.pdf
 **********************************************************************************************************************
 */

/*TRACE[SWS_COMPILER_00047]: protection against multiple inclusions.*/
#ifndef COMPILER_H
#define COMPILER_H

/*5.1 File structure*/
#include "Compiler_Cfg.h"

/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* TRACE[Rule BSW_VersionInfo_002]: Module Vendor Identifier. */
/* TRACE[SRS_BSW_00374]  */
#define COMPILER_VENDOR_ID 0x0006u

/* TRACE[Rule BSW_VersionInfo_003]: Module Identifier. */
/* TRACE[SRS_BSW_00374]  */
#define COMPILER_MODULE_ID 0x00C6u

/* TRACE[Rule BSW_VersionInfo_004]: Software Version Number and AUTOSAR Specification Version Number. */
/* TRACE[SRS_BSW_00374]  */
#define COMPILER_SW_MAJOR_VERSION 0x01u
#define COMPILER_SW_MINOR_VERSION 0x00u
#define COMPILER_SW_PATCH_VERSION 0x00u
#define COMPILER_AR_RELEASE_MAJOR_VERSION 0x04u
#define COMPILER_AR_RELEASE_MINOR_VERSION 0x02u
#define COMPILER_AR_RELEASE_REVISION_VERSION 0x02u

/*
 **********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************
 */

/*TRACE[SWS_COMPILER_00046]:The memory class AUTOMATIC shall be provided as empty definition,
                     used for the declaration of local pointers. */
#define AUTOMATIC

/*TRACE[SWS_COMPILER_0005]:This memory class shall be used within type definitions,
                        where no memory qualifier can be specified  */
#define TYPEDEF

/*TRACE[SWS_COMPILER_00051]: Definition of NULL pointer                     */
/* Deviation Diag */
#ifdef BSWSIM
    #define NULL_PTR  (0)
#else
    #define NULL_PTR  ((void *)0)
 #endif

/*TRACE[SWS_COMPILER_00057]:  Inline keyword                             */
#define INLINE  inline

/*TRACE[SWS_COMPILER_00060]: Local inline keyword       */
#define LOCAL_INLINE   static inline

/*
 **********************************************************************************************************************
 * Macros for Functions
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * TRACE[SWS_COMPILER_00001]: Macro for declaration and definition of functions.
 *
 * \param in     rettype:  Return type of the function
 * \param in     memclass: Classification of the function itself
 * \return       None
 * \note        SWS_COMPILER_00058: No nesting of Compiler Abstraction macros in parameter list.
 *              Instead, use a previously defined type as return type or use FUNC_P2CONST/FUNC_P2VAR.
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define FUNC(rettype, memclass)  rettype

/*
 **********************************************************************************************************************
 * TRACE[SWS_COMPILER_00061]: Macro for declaration and definition of functions returning a pointer to a constant.
 *
 * \param       rettype:   Return type of the function
 * \param       ptrclass:  Defines the classification of the pointer's distance
 * \param       memclass:  Classification of the function itself
 * \return      None
 * \note        SWS_COMPILER_00062: No nesting of Compiler Abstraction macros in this parameter list.
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define FUNC_P2CONST(rettype, ptrclass, memclass)  const rettype *

/*
 **********************************************************************************************************************
 * TRACE[SWS_COMPILER_00063]:  Macro for declaration and definition of functions returning a pointer to a variable.
 *
 * \param       rettype:   Return type of the function
 * \param       ptrclass:  Defines the classification of the pointer's distance
 * \param       memclass:  Classification of the function itself
 * \return      None
 * \note        SWS_COMPILER_00064: No nesting of Compiler Abstraction macros in this parameter list.
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define FUNC_P2VAR(rettype, ptrclass, memclass)  rettype *
/*
 **********************************************************************************************************************
 * Macros for Pointers
 **********************************************************************************************************************
 */

/*
 *********************************************************************************************************************
 * TRACE[SWS_COMPILER_00006]:  Macro for Declaration and definition of pointers in RAM, pointing to Variables.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointer's variable itself
 * \param       ptrclass: Defines the classification of the pointer's distance
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define P2VAR(ptrtype, memclass, ptrclass)  ptrtype *

/*
 *********************************************************************************************************************
 * TRACE[SWS_COMPILER_00013]:  Macro for Declaration and definition of pointers in RAM, pointing to Constants.
 *
 * \param       ptrtype:  Type of the referenced constant
 * \param       memclass: Classification of the pointer's variable itself
 * \param       ptrclass: Defines the classification of the pointer's distance
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define P2CONST(ptrtype, memclass, ptrclass)  const ptrtype *

/*
 *********************************************************************************************************************
 * TRACE[SWS_COMPILER_00031]:  Macro for Declaration and definition of constant pointers accessing variables.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointer's constant itself
 * \param       ptrclass: Defines the classification of the pointer's distance
 * \return      None
 *********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define CONSTP2VAR(ptrtype, memclass, ptrclass)  ptrtype * const

/*
 *********************************************************************************************************************
 * TRACE[SWS_COMPILER_00032]:  Macro for Declaration and definition of constant pointers accessing constants.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointer's constant itself
 * \param       ptrclass: Defines the classification of the pointer's distance
 * \return      None
 ********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define CONSTP2CONST(ptrtype, memclass, ptrclass)  const ptrtype * const

/*
 *******************************************************************************************************************
 * TRACE[SWS_COMPILER_00039]:  Macro for type definition of pointers to function.
 *
 * \param       rettype:  Return type of the function
 * \param       ptrclass: Defines the classification of the pointer's distance
 * \param       fctname:  Function name respectively name of the defined type
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define P2FUNC(rettype, ptrclass, fctname)  rettype (*fctname)

/*
 **********************************************************************************************************************
 * SWS_COMPILER_00065:  Macro for type definition of constant pointers to function.
 *
 * \param       rettype:  Return type of the function
 * \param       ptrclass: Defines the classification of the pointer's distance
 * \param       fctname:  Function name respectively name of the defined type
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define CONSTP2FUNC(rettype, ptrclass, fctname)  rettype (* const fctname)

/*
 **********************************************************************************************************************
 * Keywords for constants
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * TRACE[SWS_COMPILER_00023]:  Macro for declaration and definition of constants.
 *
 * \param       consttype: Type of the constant
 * \param       memclass:  Classification of the constant itself
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define CONST(type, memclass)  const type

/*
 **********************************************************************************************************************
 * Keywords for variables
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * SWS_COMPILER_00026:  Macro for declaration and definition of variables.
 *
 * \param       vartype:   Type of the variable
 * \param       memclass:  Classification of the variable itself
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: Here it is not possible to use brackets from conceptional reasons. */
#define VAR(type, memclass)  type

#endif /* COMPILER_H */


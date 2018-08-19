/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

/*******************************************************************************
**                      Module section mapping                                **
*******************************************************************************/
/*
 * The symbol 'START_WITH_IF' is undefined.
 *
 * Thus, the preprocessor continues searching for defined symbols
 * This first #ifdef makes integration of delivered parts of MemMap.h
 * easier because every supplier starts with #elif
 */
#if defined (START_WITH_IF)

/* -------------------------------------------------------------------------- */
/*             PDUR (PDU Router)                                              */
/* -------------------------------------------------------------------------- */
#elif defined (PDUR_START_SEC_CODE)
   #undef      PDUR_START_SEC_CODE
   /* TO-DO: insert pragma to locate code in segment PDUR_CODE_ROM. */
#elif defined (PDUR_STOP_SEC_CODE)
   #undef      PDUR_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE

#elif defined (PDUR_START_SEC_VAR_UNSPECIFIED)
   #undef      PDUR_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (PDUR_STOP_SEC_VAR_UNSPECIFIED)
   #undef      PDUR_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

#elif defined (PDUR_START_SEC_CONST_UNSPECIFIED)
   #undef      PDUR_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (PDUR_STOP_SEC_CONST_UNSPECIFIED)
   #undef      PDUR_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

/*******************************************************************************
**                      Module LIN from Vendor 6 (Bosch)                      **
*******************************************************************************/

/*******************************************************************************
**                      Module LIN from Vendor 6 (Bosch)                      **
*******************************************************************************/

/* -------------------------------------------------------------------------- */
/* RAM variables not initialized                                              */
/* -------------------------------------------------------------------------- */
#elif defined (LIN_START_SEC_VAR_NO_INIT_8BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_8BIT
    #undef      LIN_START_SEC_VAR_NO_INIT_8BIT
#elif defined (LIN_STOP_SEC_VAR_NO_INIT_8BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_8BIT
    #undef      LIN_STOP_SEC_VAR_NO_INIT_8BIT

#elif defined (LIN_START_SEC_VAR_NO_INIT_16BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_16BIT
    #undef      LIN_START_SEC_VAR_NO_INIT_16BIT
#elif defined (LIN_STOP_SEC_VAR_NO_INIT_16BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_16BIT
    #undef      LIN_STOP_SEC_VAR_NO_INIT_16BIT

#elif defined (LIN_START_SEC_VAR_NO_INIT_32BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_32BIT
    #undef      LIN_START_SEC_VAR_NO_INIT_32BIT
#elif defined (LIN_STOP_SEC_VAR_NO_INIT_32BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_32BIT
    #undef      LIN_STOP_SEC_VAR_NO_INIT_32BIT

#elif defined (LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef      LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED
#elif defined (LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef      LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED

/* -------------------------------------------------------------------------- */
/* RAM variables frequently used or accessed bitwise                          */
/* -------------------------------------------------------------------------- */

#elif defined (LIN_ST_SEC_VAR_FAST_8BIT)
    #define DEFAULT_START_SEC_VAR_FAST_8BIT
    #undef      LIN_ST_SEC_VAR_FAST_8BIT
#elif defined (LIN_SP_SEC_VAR_FAST_8BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_8BIT
    #undef      LIN_SP_SEC_VAR_FAST_8BIT

#elif defined (LIN_START_SEC_VAR_FAST_16BIT)
    #define DEFAULT_START_SEC_VAR_FAST_16BIT
    #undef      LIN_START_SEC_VAR_FAST_16BIT
#elif defined (LIN_STOP_SEC_VAR_FAST_16BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
    #undef      LIN_STOP_SEC_VAR_FAST_16BIT

#elif defined (LIN_START_SEC_VAR_FAST_32BIT)
    #define DEFAULT_START_SEC_VAR_FAST_32BIT
    #undef      LIN_START_SEC_VAR_FAST_32BIT
#elif defined (LIN_STOP_SEC_VAR_FAST_32BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
    #undef      LIN_STOP_SEC_VAR_FAST_32BIT

#elif defined (LIN_ST_VAR_FAST_UNSPEC)
    #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
    #undef      LIN_ST_VAR_FAST_UNSPEC
#elif defined (LIN_SP_VAR_FAST_UNSPEC)
    #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
    #undef      LIN_SP_VAR_FAST_UNSPEC

/* --------------------------------------------------------------------------*/
/*  Rom Const                                                                */
/* --------------------------------------------------------------------------*/

#elif defined (LIN_START_SEC_CONST_8BIT)
    #define DEFAULT_START_SEC_CONST_8BIT
    #undef      LIN_START_SEC_CONST_8BIT
#elif defined (LIN_STOP_SEC_CONST_8BIT)
    #define DEFAULT_STOP_SEC_CONST_8BIT
    #undef      LIN_STOP_SEC_CONST_8BIT

#elif defined (LIN_START_SEC_CONST_16BIT)
    #define DEFAULT_START_SEC_CONST_16BIT
    #undef      LIN_START_SEC_CONST_16BIT
#elif defined (LIN_STOP_SEC_CONST_16BIT)
    #define DEFAULT_STOP_SEC_CONST_16BIT
    #undef      LIN_STOP_SEC_CONST_16BIT

#elif defined (LIN_START_SEC_CONST_32BIT)
    #define DEFAULT_START_SEC_CONST_32BIT
    #undef      LIN_START_SEC_CONST_32BIT
#elif defined (LIN_STOP_SEC_CONST_32BIT)
    #define DEFAULT_STOP_SEC_CONST_32BIT
    #undef      LIN_STOP_SEC_CONST_32BIT

#elif defined (LIN_ST_CONST_UNSPEC)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED
    #undef      LIN_ST_CONST_UNSPEC
#elif defined (LIN_SP_CONST_UNSPEC)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
    #undef      LIN_SP_CONST_UNSPEC


/* -------------------------------------------------------------------------- */
/*  Code section                                                              */
/* -------------------------------------------------------------------------- */
#elif defined (LIN_ST_SEC_CODE)
    #define DEFAULT_START_SEC_CODE
    #undef      LIN_ST_SEC_CODE
#elif defined (LIN_SP_SEC_CODE)
    #define DEFAULT_STOP_SEC_CODE
    #undef      LIN_SP_SEC_CODE


/* --------------------------------------------------------------------------*/
/*  Rom Const for Post-Build data                                            */
/* --------------------------------------------------------------------------*/
#elif defined (LIN_ST_CONST_UNSPEC_PB)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED_PB
    #undef      LIN_ST_CONST_UNSPEC_PB
#elif defined (LIN_SP_CONST_UNSPEC_PB)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED_PB
    #undef      LIN_SP_CONST_UNSPEC_PB






/*******************************************************************************
**                      Module LINIF                                          **
*******************************************************************************/

/* -------------------------------------------------------------------------- */
/* RAM variables not initialized                                              */
/* -------------------------------------------------------------------------- */
#elif defined (LINIF_START_SEC_VAR_NO_INIT_8BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_8BIT
    #undef      LINIF_START_SEC_VAR_NO_INIT_8BIT
#elif defined (LINIF_STOP_SEC_VAR_NO_INIT_8BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_8BIT
    #undef      LINIF_STOP_SEC_VAR_NO_INIT_8BIT

#elif defined (LINIF_START_SEC_VAR_NO_INIT_16BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_16BIT
    #undef      LINIF_START_SEC_VAR_NO_INIT_16BIT
#elif defined (LINIF_STOP_SEC_VAR_NO_INIT_16BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_16BIT
    #undef      LINIF_STOP_SEC_VAR_NO_INIT_16BIT

#elif defined (LINIF_START_SEC_VAR_NO_INIT_32BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_32BIT
    #undef      LINIF_START_SEC_VAR_NO_INIT_32BIT
#elif defined (LINIF_STOP_SEC_VAR_NO_INIT_32BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_32BIT
    #undef      LINIF_STOP_SEC_VAR_NO_INIT_32BIT

#elif defined (LINIF_START_SEC_VAR_NO_INIT_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef      LINIF_START_SEC_VAR_NO_INIT_UNSPECIFIED
#elif defined (LINIF_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef      LINIF_STOP_SEC_VAR_NO_INIT_UNSPECIFIED

/* -------------------------------------------------------------------------- */
/* RAM variables frequently used or accessed bitwise                          */
/* -------------------------------------------------------------------------- */

#elif defined (LINIF_START_SEC_VAR_FAST_8BIT)
    #define DEFAULT_START_SEC_VAR_FAST_8BIT
    #undef      LINIF_START_SEC_VAR_FAST_8BIT
#elif defined (LINIF_STOP_SEC_VAR_FAST_8BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_8BIT
    #undef      LINIF_STOP_SEC_VAR_FAST_8BIT

#elif defined (LINIF_START_SEC_VAR_FAST_16BIT)
    #define DEFAULT_START_SEC_VAR_FAST_16BIT
    #undef      LINIF_START_SEC_VAR_FAST_16BIT
#elif defined (LINIF_STOP_SEC_VAR_FAST_16BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
    #undef      LINIF_STOP_SEC_VAR_FAST_16BIT

#elif defined (LINIF_START_SEC_VAR_FAST_32BIT)
    #define DEFAULT_START_SEC_VAR_FAST_32BIT
    #undef      LINIF_START_SEC_VAR_FAST_32BIT
#elif defined (LINIF_STOP_SEC_VAR_FAST_32BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
    #undef      LINIF_STOP_SEC_VAR_FAST_32BIT

#elif defined (LINIF_START_SEC_VAR_FAST_UNSPEC)
    #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
    #undef      LINIF_START_SEC_VAR_FAST_UNSPEC
#elif defined (LINIF_STOP_SEC_VAR_FAST_UNSPEC)
    #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
    #undef      LINIF_STOP_SEC_VAR_FAST_UNSPEC

/* --------------------------------------------------------------------------*/
/*  Rom Const                                                                */
/* --------------------------------------------------------------------------*/

#elif defined (LINIF_START_SEC_CONST_8BIT)
    #define DEFAULT_START_SEC_CONST_8BIT
    #undef      LINIF_START_SEC_CONST_8BIT
#elif defined (LINIF_STOP_SEC_CONST_8BIT)
    #define DEFAULT_STOP_SEC_CONST_8BIT
    #undef      LINIF_STOP_SEC_CONST_8BIT

#elif defined (LINIF_START_SEC_CONST_16BIT)
    #define DEFAULT_START_SEC_CONST_16BIT
    #undef      LINIF_START_SEC_CONST_16BIT
#elif defined (LINIF_STOP_SEC_CONST_16BIT)
    #define DEFAULT_STOP_SEC_CONST_16BIT
    #undef      LINIF_STOP_SEC_CONST_16BIT

#elif defined (LINIF_START_SEC_CONST_32BIT)
    #define DEFAULT_START_SEC_CONST_32BIT
    #undef      LINIF_START_SEC_CONST_32BIT
#elif defined (LINIF_STOP_SEC_CONST_32BIT)
    #define DEFAULT_STOP_SEC_CONST_32BIT
    #undef      LINIF_STOP_SEC_CONST_32BIT

#elif defined (LINIF_START_SEC_CONST_UNSPEC)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED
    #undef      LINIF_START_SEC_CONST_UNSPEC
#elif defined (LINIF_STOP_SEC_CONST_UNSPEC)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
    #undef      LINIF_STOP_SEC_CONST_UNSPEC


/* -------------------------------------------------------------------------- */
/*  Code section                                                              */
/* -------------------------------------------------------------------------- */
#elif defined (LINIF_START_SEC_CODE)
    #define DEFAULT_START_SEC_CODE
    #undef      LINIF_START_SEC_CODE
#elif defined (LINIF_STOP_SEC_CODE)
    #define DEFAULT_STOP_SEC_CODE
    #undef      LINIF_STOP_SEC_CODE


/* --------------------------------------------------------------------------*/
/*  Rom Const for Post-Build data                                            */
/* --------------------------------------------------------------------------*/
#elif defined (LINIF_START_SEC_CONST_UNSPEC_PB)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED_PB
    #undef      LINIF_START_SEC_CONST_UNSPEC_PB
#elif defined (LINIF_STOP_SEC_CONST_UNSPEC_PB)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED_PB
    #undef      LINIF_STOP_SEC_CONST_UNSPEC_PB






/* --------------------------------------------------------------------------*/

    #elif defined (LINIF_START_SEC_VAR_8BIT)
            #define DEFAULT_START_SEC_CONST_UNSPECIFIED
           #undef      LINIF_START_SEC_VAR_8BIT
        #elif defined (LINIF_STOP_SEC_VAR_8BIT)
            #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
           #undef      LINIF_STOP_SEC_VAR_8BIT
/* --------------------------------------------------------------------------*/
/* -------------------------------------------------------------------------- */
/* End of module section mapping                                              */
/* -------------------------------------------------------------------------- */

/*******************************************************************************
**                      Module LINSM                                          **
*******************************************************************************/

/* -------------------------------------------------------------------------- */
/* RAM variables not initialized                                              */
/* -------------------------------------------------------------------------- */
#elif defined (LINSM_START_SEC_VAR_NO_INIT_8BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_8BIT
    #undef      LINSM_START_SEC_VAR_NO_INIT_8BIT
#elif defined (LINSM_STOP_SEC_VAR_NO_INIT_8BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_8BIT
    #undef      LINSM_STOP_SEC_VAR_NO_INIT_8BIT

#elif defined (LINSM_START_SEC_VAR_NO_INIT_16BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_16BIT
    #undef      LINSM_START_SEC_VAR_NO_INIT_16BIT
#elif defined (LINSM_STOP_SEC_VAR_NO_INIT_16BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_16BIT
    #undef      LINSM_STOP_SEC_VAR_NO_INIT_16BIT

#elif defined (LINSM_START_SEC_VAR_NO_INIT_32BIT)
    #define DEFAULT_START_SEC_VAR_NO_INIT_32BIT
    #undef      LINSM_START_SEC_VAR_NO_INIT_32BIT
#elif defined (LINSM_STOP_SEC_VAR_NO_INIT_32BIT)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_32BIT
    #undef      LINSM_STOP_SEC_VAR_NO_INIT_32BIT

#elif defined (LINSM_START_SEC_VAR_NO_INIT_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef      LINSM_START_SEC_VAR_NO_INIT_UNSPECIFIED
#elif defined (LINSM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
    #undef      LINSM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED

/* -------------------------------------------------------------------------- */
/* RAM variables frequently used or accessed bitwise                          */
/* -------------------------------------------------------------------------- */

#elif defined (LINSM_START_SEC_VAR_FAST_8BIT)
    #define DEFAULT_START_SEC_VAR_FAST_8BIT
    #undef      LINSM_START_SEC_VAR_FAST_8BIT
#elif defined (LINSM_STOP_SEC_VAR_FAST_8BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_8BIT
    #undef      LINSM_STOP_SEC_VAR_FAST_8BIT

#elif defined (LINSM_START_SEC_VAR_FAST_16BIT)
    #define DEFAULT_START_SEC_VAR_FAST_16BIT
    #undef      LINSM_START_SEC_VAR_FAST_16BIT
#elif defined (LINSM_STOP_SEC_VAR_FAST_16BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
    #undef      LINSM_STOP_SEC_VAR_FAST_16BIT

#elif defined (LINSM_START_SEC_VAR_FAST_32BIT)
    #define DEFAULT_START_SEC_VAR_FAST_32BIT
    #undef      LINSM_START_SEC_VAR_FAST_32BIT
#elif defined (LINSM_STOP_SEC_VAR_FAST_32BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
    #undef      LINSM_STOP_SEC_VAR_FAST_32BIT

#elif defined (LINSM_START_SEC_VAR_FAST_UNSPEC)
    #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
    #undef      LINSM_START_SEC_VAR_FAST_UNSPEC
#elif defined (LINSM_STOP_SEC_VAR_FAST_UNSPEC)
    #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
    #undef      LINSM_STOP_SEC_VAR_FAST_UNSPEC

/* --------------------------------------------------------------------------*/
/*  Rom Const                                                                */
/* --------------------------------------------------------------------------*/

#elif defined (LINSM_START_SEC_CONST_8BIT)
    #define DEFAULT_START_SEC_CONST_8BIT
    #undef      LINSM_START_SEC_CONST_8BIT
#elif defined (LINSM_STOP_SEC_CONST_8BIT)
    #define DEFAULT_STOP_SEC_CONST_8BIT
    #undef      LINSM_STOP_SEC_CONST_8BIT

#elif defined (LINSM_START_SEC_CONST_16BIT)
    #define DEFAULT_START_SEC_CONST_16BIT
    #undef      LINSM_START_SEC_CONST_16BIT
#elif defined (LINSM_STOP_SEC_CONST_16BIT)
    #define DEFAULT_STOP_SEC_CONST_16BIT
    #undef      LINSM_STOP_SEC_CONST_16BIT

#elif defined (LINSM_START_SEC_CONST_32BIT)
    #define DEFAULT_START_SEC_CONST_32BIT
    #undef      LINSM_START_SEC_CONST_32BIT
#elif defined (LINSM_STOP_SEC_CONST_32BIT)
    #define DEFAULT_STOP_SEC_CONST_32BIT
    #undef      LINSM_STOP_SEC_CONST_32BIT

#elif defined (LINSM_START_SEC_CONST_UNSPEC)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED
    #undef      LINSM_START_SEC_CONST_UNSPEC
#elif defined (LINSM_STOP_SEC_CONST_UNSPEC)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
    #undef      LINSM_STOP_SEC_CONST_UNSPEC


/* -------------------------------------------------------------------------- */
/*  Code section                                                              */
/* -------------------------------------------------------------------------- */
#elif defined (LINSM_START_SEC_CODE)
    #define DEFAULT_START_SEC_CODE
    #undef      LINSM_START_SEC_CODE
#elif defined (LINSM_STOP_SEC_CODE)
    #define DEFAULT_STOP_SEC_CODE
    #undef      LINSM_STOP_SEC_CODE


/* --------------------------------------------------------------------------*/
/*  Rom Const for Post-Build data                                            */
/* --------------------------------------------------------------------------*/
#elif defined (LINSM_START_SEC_CONST_UNSPEC_PB)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED_PB
    #undef      LINSM_START_SEC_CONST_UNSPEC_PB
#elif defined (LINSM_STOP_SEC_CONST_UNSPEC_PB)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED_PB
    #undef      LINSM_STOP_SEC_CONST_UNSPEC_PB






/* --------------------------------------------------------------------------*/

    #elif defined (LINSM_START_SEC_VAR_8BIT)
            #define DEFAULT_START_SEC_CONST_UNSPECIFIED
           #undef      LINSM_START_SEC_VAR_8BIT
        #elif defined (LINSM_STOP_SEC_VAR_8BIT)
            #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
           #undef      LINSM_STOP_SEC_VAR_8BIT
/* --------------------------------------------------------------------------*/

/*******************************************************************************
**                      Module COMM                                           **
*******************************************************************************/
/* EasyCASE ( 25
   RAM Variables not initialized */
/* -------------------------------------------------------------------------- */
/* RAM variables not initialized                                              */
/* -------------------------------------------------------------------------- */
#elif defined (COMM_START_SEC_VAR_NOINIT_8BIT)
    #define DEFAULT_START_SEC_VAR_NOINIT_8BIT
    #undef     COMM_START_SEC_VAR_NOINIT_8BIT
#elif defined (COMM_STOP_SEC_VAR_NOINIT_8BIT)
    #define DEFAULT_STOP_SEC_VAR_NOINIT_8BIT
    #undef      COMM_STOP_SEC_VAR_NOINIT_8BIT

#elif defined (COMM_START_SEC_VAR_NOINIT_16BIT)
    #define DEFAULT_START_SEC_VAR_NOINIT_16BIT
    #undef      COMM_START_SEC_VAR_NOINIT_16BIT
#elif defined (COMM_STOP_SEC_VAR_NOINIT_16BIT)
    #define DEFAULT_STOP_SEC_VAR_NOINIT_16BIT
    #undef      COMM_STOP_SEC_VAR_NOINIT_16BIT

#elif defined (COMM_START_SEC_VAR_NOINIT_32BIT)
    #define DEFAULT_START_SEC_VAR_NOINIT_32BIT
    #undef     COMM_START_SEC_VAR_NOINIT_32BIT
#elif defined (COMM_STOP_SEC_VAR_NOINIT_32BIT)
    #define DEFAULT_STOP_SEC_VAR_NOINIT_32BIT
    #undef      COMM_STOP_SEC_VAR_NOINIT_32BIT

#elif defined (COMM_START_SEC_VAR_NOINIT_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_NOINIT_UNSPECIFIED
    #undef      COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #undef      COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 26
   RAM variables frequently accessed bitwise */
/* -------------------------------------------------------------------------- */
/* RAM variables frequently used or accessed bitwise                          */
/* -------------------------------------------------------------------------- */

#elif defined (COMM_START_SEC_VAR_FAST_8BIT)
    #define DEFAULT_START_SEC_VAR_FAST_8BIT
    #undef      COMM_START_SEC_VAR_FAST_8BIT
#elif defined (COMM_STOP_SEC_VAR_FAST_8BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_8BIT
    #undef      COMM_STOP_SEC_VAR_FAST_8BIT

#elif defined (COMM_START_SEC_VAR_FAST_16BIT)
    #define DEFAULT_START_SEC_VAR_FAST_16BIT
    #undef      COMM_START_SEC_VAR_FAST_16BIT
#elif defined (COMM_STOP_SEC_VAR_FAST_16BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_16BIT
    #undef      COMM_STOP_SEC_VAR_FAST_16BIT

#elif defined (COMM_START_SEC_VAR_FAST_32BIT)
    #define DEFAULT_START_SEC_VAR_FAST_32BIT
    #undef      COMM_START_SEC_VAR_FAST_32BIT
#elif defined (COMM_STOP_SEC_VAR_FAST_32BIT)
    #define DEFAULT_STOP_SEC_VAR_FAST_32BIT
    #undef      COMM_STOP_SEC_VAR_FAST_32BIT

#elif defined (COMM_START_SEC_VAR_FAST_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
    #undef     COMM_START_SEC_VAR_FAST_UNSPECIFIED
#elif defined (COMM_STOP_SEC_VAR_FAST_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
    #undef      COMM_STOP_SEC_VAR_FAST_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 27
   Global or static variable initialised after reset */
/* --------------------------------------------------------------------------*/
/*  Global or static variable initialised after reset                        */
/* --------------------------------------------------------------------------*/

#elif defined (COMM_START_SEC_VAR_8BIT)
    #define DEFAULT_START_SEC_VAR_8BIT
    #undef      COMM_START_SEC_VAR_8BIT
#elif defined (COMM_STOP_SEC_VAR_8BIT)
    #define DEFAULT_STOP_SEC_VAR_8BIT
    #undef      COMM_STOP_SEC_VAR_8BIT

#elif defined (COMM_START_SEC_VAR_16BIT)
    #define DEFAULT_START_SEC_VAR_16BIT
    #undef      COMM_START_SEC_VAR_16BIT
#elif defined (COMM_STOP_SEC_VAR_16BIT)
    #define DEFAULT_STOP_SEC_VAR_16BIT
    #undef      COMM_STOP_SEC_VAR_16BIT

#elif defined (COMM_START_SEC_VAR_32BIT)
    #define DEFAULT_START_SEC_VAR_32BIT
    #undef      COMM_START_SEC_VAR_32BIT
#elif defined (COMM_STOP_SEC_VAR_32BIT)
    #define DEFAULT_STOP_SEC_VAR_32BIT
    #undef      COMM_STOP_SEC_VAR_32BIT

#elif defined (COMM_START_SEC_VAR_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_UNSPECIFIED
    #undef      COMM_START_SEC_VAR_UNSPECIFIED
#elif defined (COMM_STOP_SEC_VAR_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED
    #undef      COMM_STOP_SEC_VAR_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 28
   Rom Const */
/* --------------------------------------------------------------------------*/
/*  Rom Const                                                                */
/* --------------------------------------------------------------------------*/

#elif defined (COMM_START_SEC_CONST_8BIT)
    #define DEFAULT_START_SEC_CONST_8BIT
    #undef      COMM_START_SEC_CONST_8BIT
#elif defined (COMM_STOP_SEC_CONST_8BIT)
    #define DEFAULT_STOP_SEC_CONST_8BIT
    #undef      COMM_STOP_SEC_CONST_8BIT

#elif defined (COMM_START_SEC_CONST_16BIT)
    #define DEFAULT_START_SEC_CONST_16BIT
    #undef      COMM_START_SEC_CONST_16BIT
#elif defined (COMM_STOP_SEC_CONST_16BIT)
    #define DEFAULT_STOP_SEC_CONST_16BIT
    #undef      COMM_STOP_SEC_CONST_16BIT

#elif defined (COMM_START_SEC_CONST_32BIT)
    #define DEFAULT_START_SEC_CONST_32BIT
    #undef      COMM_START_SEC_CONST_32BIT
#elif defined (COMM_STOP_SEC_CONST_32BIT)
    #define DEFAULT_STOP_SEC_CONST_32BIT
    #undef      COMM_STOP_SEC_CONST_32BIT

#elif defined (COMM_START_SEC_CONST_UNSPECIFIED)
    #define DEFAULT_START_SEC_CONST_UNSPECIFIED
    #undef      COMM_START_SEC_CONST_UNSPECIFIED
#elif defined (COMM_STOP_SEC_CONST_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED
    #undef      COMM_STOP_SEC_CONST_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 29
   Global or static variable initialised after Power ON reset */
/* --------------------------------------------------------------------------*/
/*  Global or static variable initialised after Power ON reset               */
/* --------------------------------------------------------------------------*/

#elif defined (COMM_START_SEC_VAR_POWER_ON_INIT_8BIT)
    #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_8BIT
    #undef      COMM_START_SEC_VAR_POWER_ON_INIT_8BIT
#elif defined (COMM_STOP_SEC_VAR_POWER_ON_INIT_8BIT)
    #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_8BIT
    #undef      COMM_STOP_SEC_VAR_POWER_ON_INIT_8BIT

#elif defined (COMM_START_SEC_VAR_POWER_ON_INIT_16BIT)
    #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_16BIT
    #undef      COMM_START_SEC_VAR_POWER_ON_INIT_16BIT
#elif defined (COMM_STOP_SEC_VAR_POWER_ON_INIT_16BIT)
    #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_16BIT
    #undef      COMM_STOP_SEC_VAR_POWER_ON_INIT_16BIT

#elif defined (COMM_START_SEC_VAR_POWER_ON_INIT_32BIT)
    #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_32BIT
    #undef      COMM_START_SEC_VAR_POWER_ON_INIT_32BIT
#elif defined (COMM_STOP_SEC_VAR_POWER_ON_INIT_32BIT)
    #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_32BIT
    #undef      COMM_STOP_SEC_VAR_POWER_ON_INIT_32BIT

#elif defined (COMM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef      COMM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#elif defined (COMM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
    #undef      COMM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 30
   Code section */
/* -------------------------------------------------------------------------- */
/*  Code section                                                              */
/* -------------------------------------------------------------------------- */
#elif defined (COMM_START_SEC_CODE)
    #define DEFAULT_START_SEC_CODE
    #undef      COMM_START_SEC_CODE
#elif defined (COMM_STOP_SEC_CODE)
    #define DEFAULT_STOP_SEC_CODE
    #undef      COMM_STOP_SEC_CODE
/* EasyCASE ) */
/* EasyCASE ( 31
   Rom Const for Post-Build data */
/* --------------------------------------------------------------------------*/
/*  Rom Const for Post-Build data                                            */
/* --------------------------------------------------------------------------*/

#elif defined (COMM_START_CONFIG_DATA_8BIT)
    #define DEFAULT_START_CONFIG_DATA_8BIT
    #undef      COMM_START_CONFIG_DATA_8BIT
#elif defined (COMM_STOP_CONFIG_DATA_8BIT)
    #define DEFAULT_STOP_CONFIG_DATA_8BIT
    #undef      COMM_STOP_CONFIG_DATA_8BIT

#elif defined (COMM_START_CONFIG_DATA_16BIT)
    #define DEFAULT_START_CONFIG_DATA_16BIT
    #undef      COMM_START_CONFIG_DATA_16BIT
#elif defined (COMM_STOP_CONFIG_DATA_16BIT)
    #define DEFAULT_STOP_CONFIG_DATA_16BIT
    #undef      COMM_STOP_CONFIG_DATA_16BIT

#elif defined (COMM_START_CONFIG_DATA_32BIT)
    #define DEFAULT_START_CONFIG_DATA_32BIT
    #undef      COMM_START_CONFIG_DATA_32BIT
#elif defined (COMM_STOP_CONFIG_DATA_32BIT)
    #define DEFAULT_STOP_CONFIG_DATA_32BIT
    #undef      COMM_STOP_CONFIG_DATA_32BIT

#elif defined (COMM_START_CONFIG_DATA_UNSPECIFIED)
    #define DEFAULT_START_CONFIG_DATA_UNSPECIFIED
    #undef      COMM_START_CONFIG_DATA_UNSPECIFIED
#elif defined (COMM_STOP_CONFIG_DATA_UNSPECIFIED)
    #define DEFAULT_STOP_CONFIG_DATA_UNSPECIFIED
    #undef      COMM_STOP_CONFIG_DATA_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 32
   global or static variables accessible from a calibration tool */
/* -------------------------------------------------------------------------- */
/* global or static variables accessible from a calibration tool              */
/* -------------------------------------------------------------------------- */
#elif defined (COMM_START_SEC_INTERNAL_VAR_8BIT)
    #define DEFAULT_START_SEC_INTERNAL_VAR_8BIT
    #undef     COMM_START_SEC_INTERNAL_VAR_8BIT
#elif defined (COMM_STOP_SEC_INTERNAL_VAR_8BIT)
    #define DEFAULT_STOP_SEC_INTERNAL_VAR_8BIT
    #undef      COMM_STOP_SEC_INTERNAL_VAR_8BIT

#elif defined (COMM_START_SEC_INTERNAL_VAR_16BIT)
    #define DEFAULT_START_SEC_INTERNAL_VAR_16BIT
    #undef     COMM_START_SEC_INTERNAL_VAR_16BIT
#elif defined (COMM_STOP_SEC_INTERNAL_VAR_16BIT)
    #define DEFAULT_STOP_SEC_INTERNAL_VAR_16BIT
    #undef      COMM_STOP_SEC_INTERNAL_VAR_16BIT

#elif defined (COMM_START_SEC_INTERNAL_VAR_32BIT)
    #define DEFAULT_START_SEC_INTERNAL_VAR_32BIT
    #undef     COMM_START_SEC_INTERNAL_VAR_32BIT
#elif defined (COMM_STOP_SEC_INTERNAL_VAR_32BIT)
    #define DEFAULT_STOP_SEC_INTERNAL_VAR_32BIT
    #undef      COMM_STOP_SEC_INTERNAL_VAR_32BIT

#elif defined (COMM_START_SEC_INTERNAL_VAR_UNSPECIFIED)
    #define DEFAULT_START_SEC_INTERNAL_VAR_UNSPECIFIED
    #undef     COMM_START_SEC_INTERNAL_VAR_UNSPECIFIED
#elif defined (COMM_STOP_SEC_INTERNAL_VAR_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_INTERNAL_VAR_UNSPECIFIED
    #undef      COMM_STOP_SEC_INTERNAL_VAR_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 33
   calibration constants */
/* -------------------------------------------------------------------------- */
/* calibration constants                                                      */
/* -------------------------------------------------------------------------- */
#elif defined (COMM_START_SEC_CALIB_8BIT)
    #define DEFAULT_START_SEC_CALIB_8BIT
    #undef     COMM_START_SEC_CALIB_8BIT
#elif defined (COMM_STOP_SEC_CALIB_8BIT)
    #define DEFAULT_STOP_SEC_CALIB_8BIT
    #undef      COMM_STOP_SEC_CALIB_8BIT

#elif defined (COMM_START_SEC_CALIB_16BIT)
    #define DEFAULT_START_SEC_CALIB_16BIT
    #undef     COMM_START_SEC_CALIB_16BIT
#elif defined (COMM_STOP_SEC_CALIB_16BIT)
    #define DEFAULT_STOP_SEC_CALIB_16BIT
    #undef      COMM_STOP_SEC_CALIB_16BIT

#elif defined (COMM_START_SEC_CALIB_32BIT)
    #define DEFAULT_START_SEC_CALIB_32BIT
    #undef     COMM_START_SEC_CALIB_32BIT
#elif defined (COMM_STOP_SEC_CALIB_32BIT)
    #define DEFAULT_STOP_SEC_CALIB_32BIT
    #undef      COMM_STOP_SEC_CALIB_32BIT

#elif defined (COMM_START_SEC_CALIB_UNSPECIFIED)
    #define DEFAULT_START_SEC_CALIB_UNSPECIFIED
    #undef     COMM_START_SEC_CALIB_UNSPECIFIED
#elif defined (COMM_STOP_SEC_CALIB_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_CALIB_UNSPECIFIED
    #undef      COMM_STOP_SEC_CALIB_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 34
   cartography constants */
/* -------------------------------------------------------------------------- */
/* cartography constants                                             */
/* -------------------------------------------------------------------------- */
#elif defined (COMM_START_SEC_CARTO_8BIT)
    #define DEFAULT_START_SEC_CARTO_8BIT
    #undef     COMM_START_SEC_CARTO_8BIT
#elif defined (COMM_STOP_SEC_CARTO_8BIT)
    #define DEFAULT_STOP_SEC_CARTO_8BIT
    #undef      COMM_STOP_SEC_CARTO_8BIT

#elif defined (COMM_START_SEC_CARTO_16BIT)
    #define DEFAULT_START_SEC_CARTO_16BIT
    #undef     COMM_START_SEC_CARTO_16BIT
#elif defined (COMM_STOP_SEC_CARTO_16BIT)
    #define DEFAULT_STOP_SEC_CARTO_16BIT
    #undef      COMM_STOP_SEC_CARTO_16BIT

#elif defined (COMM_START_SEC_CARTO_32BIT)
    #define DEFAULT_START_SEC_CARTO_32BIT
    #undef     COMM_START_SEC_CARTO_32BIT
#elif defined (COMM_STOP_SEC_CARTO_32BIT)
    #define DEFAULT_STOP_SEC_CARTO_32BIT
    #undef      COMM_STOP_SEC_CARTO_32BIT

#elif defined (COMM_START_SEC_CARTO_UNSPECIFIED)
    #define DEFAULT_START_SEC_CARTO_UNSPECIFIED
    #undef     COMM_START_SEC_CARTO_UNSPECIFIED
#elif defined (COMM_STOP_SEC_CARTO_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_CARTO_UNSPECIFIED
    #undef      COMM_STOP_SEC_CARTO_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 35
   RAM buffers of variables saved in non volatile memory Zone 1 */
/* -------------------------------------------------------------------------- */
/* RAM buffers of variables saved in non volatile memory                      */
/* -------------------------------------------------------------------------- */
#elif defined (COMM_START_SEC_VAR_SAVED_ZONE1_8BIT)
    #define DEFAULT_START_SEC_VAR_SAVED_ZONE1_8BIT
    #undef     COMM_START_SEC_VAR_SAVED_ZONE1_8BIT
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE1_8BIT)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE1_8BIT
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE1_8BIT

#elif defined (COMM_START_SEC_VAR_SAVED_ZONE1_16BIT)
    #define DEFAULT_SEC_VAR_SAVED_ZONE1_16BIT
    #undef      COMM_START_SEC_VAR_SAVED_ZONE1_16BIT
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE1_16BIT)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE1_16BIT
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE1_16BIT

#elif defined (COMM_START_SEC_VAR_SAVED_ZONE1_32BIT)
    #define DEFAULT_START_SEC_VAR_SAVED_ZONE1_32BIT
    #undef     COMM_START_SEC_VAR_SAVED_ZONE1_32BIT
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE1_32BIT)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE1_32BIT
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE1_32BIT

#elif defined (COMM_START_SEC_VAR_SAVED_ZONE1_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_SAVED_ZONE1_UNSPECIFIED
    #undef      COMM_START_SEC_VAR_SAVED_ZONE1_UNSPECIFIED
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE1_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE1_UNSPECIFIED
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE1_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 36
   RAM buffers of variables saved in non volatile memory Zone 2 */
#elif defined (COMM_START_SEC_VAR_SAVED_ZONE2_8BIT)
    #define DEFAULT_START_SEC_VAR_SAVED_ZONE2_8BIT
    #undef     COMM_START_SEC_VAR_SAVED_ZONE2_8BIT
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE2_8BIT)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE2_8BIT
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE2_8BIT

#elif defined (COMM_START_SEC_VAR_SAVED_ZONE2_16BIT)
    #define DEFAULT_SEC_VAR_SAVED_ZONE2_16BIT
    #undef      COMM_START_SEC_VAR_SAVED_ZONE2_16BIT
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE2_16BIT)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE2_16BIT
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE2_16BIT

#elif defined (COMM_START_SEC_VAR_SAVED_ZONE2_32BIT)
    #define DEFAULT_START_SEC_VAR_SAVED_ZONE2_32BIT
    #undef     COMM_START_SEC_VAR_SAVED_ZONE2_32BIT
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE2_32BIT)
    #define DEFAULT_STOP_SEC_VAR_SAVED_ZONE2_32BIT
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE2_32BIT

#elif defined (COMM_START_SEC_VAR_SAVED_ZONE2_UNSPECIFIED)
    #define DEFAULT_START_SEC_VAR_SAVED_ZONE2_UNSPECIFIED
    #undef      COMM_START_SEC_VAR_SAVED_ZONE2_UNSPECIFIED
#elif defined (COMM_STOP_SEC_VAR_SAVED_ZONE2_UNSPECIFIED)
    #define DEFAULT_STOP_SEC_SEC_VAR_SAVED_ZONE2_UNSPECIFIED
    #undef      COMM_STOP_SEC_VAR_SAVED_ZONE2_UNSPECIFIED
/* EasyCASE ) */
/* EasyCASE ( 84
   Fast Code */
/* --------------------------------------------------------------------------*/
/*  Fast Code                                                        */
/* --------------------------------------------------------------------------*/

#elif defined (COMM_START_SEC_CODE_FAST_1)
    #define DEFAULT_START_SEC_CODE_FAST_1
    #undef      COMM_START_SEC_CODE_FAST_1
#elif defined (COMM_STOP_SEC_CODE_FAST_1)
    #define DEFAULT_STOP_SEC_CODE_FAST_1
#undef      COMM_STOP_SEC_CODE_FAST_1
/* EasyCASE ) */
/* EasyCASE ( 85
   Slow Code */
/* --------------------------------------------------------------------------*/
/*  Slow Code                                                        */
/* --------------------------------------------------------------------------*/
#elif defined (COMM_START_SEC_CODE_SLOW)
    #define DEFAULT_START_SEC_CODE_SLOW
    #undef      COMM_START_SEC_CODE_SLOW
#elif defined (COMM_STOP_SEC_CODE_SLOW)
    #define DEFAULT_STOP_SEC_CODE_SLOW
    #undef      COMM_STOP_SEC_CODE_SLOW
/* EasyCASE ) */
/* EasyCASE ( 86
   Library Code */
/* --------------------------------------------------------------------------*/
/*  Library Code                                                     */
/* --------------------------------------------------------------------------*/
#elif defined (COMM_START_SEC_CODE_LIB)
    #define DEFAULT_START_SEC_CODE_LIB
    #undef      COMM_START_SEC_CODE_LIB
#elif defined (COMM_STOP_SEC_CODE_LIB)
    #define DEFAULT_STOP_SEC_CODE_LIB
    #undef      COMM_STOP_SEC_VAR_CODE_LIB
/* EasyCASE ) */
/* EasyCASE ) */

/* -------------------------------------------------------------------------- */
/* End of module section mapping                                              */
/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/*             Bfx (Bit manipulation functions)                               */
/* -------------------------------------------------------------------------- */
#elif defined (BFX_START_SEC_CODE)
   #undef      BFX_START_SEC_CODE
   /* TO-DO: insert pragma to locate code in segment */
#elif defined (BFX_STOP_SEC_CODE)
   #undef      BFX_STOP_SEC_CODE
   #define DEFAULT_STOP_SEC_CODE

#elif defined (BFX_START_SEC_VAR_UNSPECIFIED)
   #undef      BFX_START_SEC_VAR_UNSPECIFIED
   #define DEFAULT_START_SEC_VAR_UNSPECIFIED
#elif defined (BFX_STOP_SEC_VAR_UNSPECIFIED)
   #undef      BFX_STOP_SEC_VAR_UNSPECIFIED
   #define DEFAULT_STOP_SEC_VAR_UNSPECIFIED

#elif defined (BFX_START_SEC_CONST_UNSPECIFIED)
   #undef      BFX_START_SEC_CONST_UNSPECIFIED
   #define DEFAULT_START_SEC_CONST_UNSPECIFIED
#elif defined (BFX_STOP_SEC_CONST_UNSPECIFIED)
   #undef      BFX_STOP_SEC_CONST_UNSPECIFIED
   #define DEFAULT_STOP_SEC_CONST_UNSPECIFIED

#else
  //#error "MemMap.h: No valid section define found"
#endif  /* START_WITH_IF */

/*******************************************************************************
**                      RTE section mapping                               **
*******************************************************************************/
/* general start of #elif chain whith #if                                     */
#if defined (START_WITH_IF)

/* -------------------------------------------------------------------------- */
/* RAM variables initialized from ROM on reset                                */
/* -------------------------------------------------------------------------- */
#elif defined (RTE_START_SEC_VAR_8BIT)
   #undef      RTE_START_SEC_VAR_8BIT
   /* TO-DO: insert pragma to locate data in segment RAM_8BIT */
#elif defined (RTE_STOP_SEC_VAR_8BIT)
   #undef      RTE_STOP_SEC_VAR_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_16BIT)
   #undef      RTE_START_SEC_VAR_16BIT
   /* TO-DO: insert pragma to locate data in segment RAM_16BIT */
#elif defined (RTE_STOP_SEC_VAR_16BIT)
   #undef      RTE_STOP_SEC_VAR_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_32BIT)
   #undef      RTE_START_SEC_VAR_32BIT
   /* TO-DO: insert pragma to locate data in segment RAM_32BIT */
#elif defined (RTE_STOP_SEC_VAR_32BIT)
   #undef      RTE_STOP_SEC_VAR_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_UNSPECIFIED)
   #undef      RTE_START_SEC_VAR_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment RAM_UNSPECIFIED */
#elif defined (RTE_STOP_SEC_VAR_UNSPECIFIED)
   #undef      RTE_STOP_SEC_VAR_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* RAM variables not initialized                                              */
/* -------------------------------------------------------------------------- */
#elif defined (RTE_START_SEC_VAR_NO_INIT_8BIT)
   #undef      RTE_START_SEC_VAR_NO_INIT_8BIT
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_8BIT */
#elif defined (RTE_STOP_SEC_VAR_NO_INIT_8BIT)
   #undef      RTE_STOP_SEC_VAR_NO_INIT_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_NO_INIT_16BIT)
   #undef      RTE_START_SEC_VAR_NO_INIT_16BIT
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_16BIT */
#elif defined (RTE_STOP_SEC_VAR_NO_INIT_16BIT)
   #undef      RTE_STOP_SEC_VAR_NO_INIT_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_NO_INIT_32BIT)
   #undef      RTE_START_SEC_VAR_NO_INIT_32BIT
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_32BIT */
#elif defined (RTE_STOP_SEC_VAR_NO_INIT_32BIT)
   #undef      RTE_STOP_SEC_VAR_NO_INIT_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_NO_INIT_UNSPECIFIED)
   #undef      RTE_START_SEC_VAR_NO_INIT_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_UNSPECIFIED */
#elif defined (RTE_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
   #undef      RTE_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* RAM variables frequently used or accessed bitwise                          */
/* -------------------------------------------------------------------------- */
#elif defined (RTE_START_SEC_VAR_FAST_8BIT)
   #undef      RTE_START_SEC_VAR_FAST_8BIT
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_8BIT */
#elif defined (RTE_STOP_SEC_VAR_FAST_8BIT)
   #undef      RTE_STOP_SEC_VAR_FAST_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_FAST_16BIT)
   #undef      RTE_START_SEC_VAR_FAST_16BIT
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_16BIT */
#elif defined (RTE_STOP_SEC_VAR_FAST_16BIT)
   #undef      RTE_STOP_SEC_VAR_FAST_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_FAST_32BIT)
   #undef      RTE_START_SEC_VAR_FAST_32BIT
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_32BIT */
#elif defined (RTE_STOP_SEC_VAR_FAST_32BIT)
   #undef      RTE_STOP_SEC_VAR_FAST_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      RTE_START_SEC_VAR_FAST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_UNSPECIFIED */
#elif defined (RTE_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      RTE_STOP_SEC_VAR_FAST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* ROM constants                                                              */
/* -------------------------------------------------------------------------- */
#elif defined (RTE_START_SEC_CONST_8BIT)
   #undef      RTE_START_SEC_CONST_8BIT
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_8BIT */
#elif defined (RTE_STOP_SEC_CONST_8BIT)
   #undef      RTE_STOP_SEC_CONST_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_CONST_16BIT)
   #undef      RTE_START_SEC_CONST_16BIT
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_16BIT */
#elif defined (RTE_STOP_SEC_CONST_16BIT)
   #undef      RTE_STOP_SEC_CONST_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_CONST_32BIT)
   #undef      RTE_START_SEC_CONST_32BIT
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_32BIT */
#elif defined (RTE_STOP_SEC_CONST_32BIT)
   #undef      RTE_STOP_SEC_CONST_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_CONST_UNSPECIFIED)
   #undef      RTE_START_SEC_CONST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_UNSPECIFIED */
#elif defined (RTE_STOP_SEC_CONST_UNSPECIFIED)
   #undef      RTE_STOP_SEC_CONST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* ROM FAR constants                                                          */
/* -------------------------------------------------------------------------- */
#elif defined (RTE_START_SEC_CONST_8BIT_FAR)
   #undef      RTE_START_SEC_CONST_8BIT_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_8BIT */
#elif defined (RTE_STOP_SEC_CONST_8BIT_FAR)
   #undef      RTE_STOP_SEC_CONST_8BIT_FAR
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_CONST_16BIT_FAR)
   #undef      RTE_START_SEC_CONST_16BIT_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_16BIT */
#elif defined (RTE_STOP_SEC_CONST_16BIT_FAR)
   #undef      RTE_STOP_SEC_CONST_16BIT_FAR
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_CONST_32BIT_FAR)
   #undef      RTE_START_SEC_CONST_32BIT_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_32BIT */
#elif defined (RTE_STOP_SEC_CONST_32BIT_FAR)
   #undef      RTE_STOP_SEC_CONST_32BIT_FAR
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (RTE_START_SEC_CONST_UNSPECIFIED_FAR)
   #undef      RTE_START_SEC_CONST_UNSPECIFIED_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_UNSPECIFIED */
#elif defined (RTE_STOP_SEC_CONST_UNSPECIFIED_FAR)
   #undef      RTE_STOP_SEC_CONST_UNSPECIFIED_FAR
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* ROM code                                                                   */
/* -------------------------------------------------------------------------- */
#elif defined (RTE_START_SEC_CODE)
   #undef      RTE_START_SEC_CODE
   /* TO-DO: insert pragma to locate code in segment RTE_CODE_ROM */
#elif defined (RTE_STOP_SEC_CODE)
   #undef      RTE_STOP_SEC_CODE
   /* TO-DO: insert pragma to locate code in default segment */

/* -------------------------------------------------------------------------- */
/* End of default section mapping                                             */
/* -------------------------------------------------------------------------- */
#endif  /* START_WITH_IF */



/*******************************************************************************
**                      Default section mapping                               **
*******************************************************************************/
/* general start of #elif chain whith #if                                     */
#if defined (START_WITH_IF)

/* -------------------------------------------------------------------------- */
/* RAM variables initialized from ROM on reset                                */
/* -------------------------------------------------------------------------- */
#elif defined (DEFAULT_START_SEC_VAR_8BIT)
   #undef      DEFAULT_START_SEC_VAR_8BIT
   /* TO-DO: insert pragma to locate data in segment RAM_8BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_16BIT)
   #undef      DEFAULT_START_SEC_VAR_16BIT
   /* TO-DO: insert pragma to locate data in segment RAM_16BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_32BIT)
   #undef      DEFAULT_START_SEC_VAR_32BIT
   /* TO-DO: insert pragma to locate data in segment RAM_32BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment RAM_UNSPECIFIED */
#elif defined (DEFAULT_STOP_SEC_VAR_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* RAM variables not initialized                                              */
/* -------------------------------------------------------------------------- */
#elif defined (DEFAULT_START_SEC_VAR_NO_INIT_8BIT)
   #undef      DEFAULT_START_SEC_VAR_NO_INIT_8BIT
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_8BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_NO_INIT_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_NO_INIT_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_NO_INIT_16BIT)
   #undef      DEFAULT_START_SEC_VAR_NO_INIT_16BIT
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_16BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_NO_INIT_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_NO_INIT_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_NO_INIT_32BIT)
   #undef      DEFAULT_START_SEC_VAR_NO_INIT_32BIT
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_32BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_NO_INIT_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_NO_INIT_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_NO_INIT_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_NO_INIT_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment NOINIT_RAM_UNSPECIFIED */
#elif defined (DEFAULT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* RAM variables frequently used or accessed bitwise                          */
/* -------------------------------------------------------------------------- */
#elif defined (DEFAULT_START_SEC_VAR_FAST_8BIT)
   #undef      DEFAULT_START_SEC_VAR_FAST_8BIT
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_8BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_8BIT)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_FAST_16BIT)
   #undef      DEFAULT_START_SEC_VAR_FAST_16BIT
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_16BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_16BIT)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_FAST_32BIT)
   #undef      DEFAULT_START_SEC_VAR_FAST_32BIT
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_32BIT */
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_32BIT)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_VAR_FAST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment FAST_RAM_UNSPECIFIED */
#elif defined (DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_VAR_FAST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* ROM constants                                                              */
/* -------------------------------------------------------------------------- */
#elif defined (DEFAULT_START_SEC_CONST_8BIT)
   #undef      DEFAULT_START_SEC_CONST_8BIT
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_8BIT */
#elif defined (DEFAULT_STOP_SEC_CONST_8BIT)
   #undef      DEFAULT_STOP_SEC_CONST_8BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_CONST_16BIT)
   #undef      DEFAULT_START_SEC_CONST_16BIT
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_16BIT */
#elif defined (DEFAULT_STOP_SEC_CONST_16BIT)
   #undef      DEFAULT_STOP_SEC_CONST_16BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_CONST_32BIT)
   #undef      DEFAULT_START_SEC_CONST_32BIT
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_32BIT */
#elif defined (DEFAULT_STOP_SEC_CONST_32BIT)
   #undef      DEFAULT_STOP_SEC_CONST_32BIT
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_CONST_UNSPECIFIED)
   #undef      DEFAULT_START_SEC_CONST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in segment CONST_ROM_UNSPECIFIED */
#elif defined (DEFAULT_STOP_SEC_CONST_UNSPECIFIED)
   #undef      DEFAULT_STOP_SEC_CONST_UNSPECIFIED
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* ROM FAR constants                                                          */
/* -------------------------------------------------------------------------- */
#elif defined (DEFAULT_START_SEC_CONST_8BIT_FAR)
   #undef      DEFAULT_START_SEC_CONST_8BIT_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_8BIT */
#elif defined (DEFAULT_STOP_SEC_CONST_8BIT_FAR)
   #undef      DEFAULT_STOP_SEC_CONST_8BIT_FAR
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_CONST_16BIT_FAR)
   #undef      DEFAULT_START_SEC_CONST_16BIT_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_16BIT */
#elif defined (DEFAULT_STOP_SEC_CONST_16BIT_FAR)
   #undef      DEFAULT_STOP_SEC_CONST_16BIT_FAR
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_CONST_32BIT_FAR)
   #undef      DEFAULT_START_SEC_CONST_32BIT_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_32BIT */
#elif defined (DEFAULT_STOP_SEC_CONST_32BIT_FAR)
   #undef      DEFAULT_STOP_SEC_CONST_32BIT_FAR
   /* TO-DO: insert pragma to locate data in default segment */

#elif defined (DEFAULT_START_SEC_CONST_UNSPECIFIED_FAR)
   #undef      DEFAULT_START_SEC_CONST_UNSPECIFIED_FAR
   /* TO-DO: insert pragma to locate data in segment CONST_FAR_ROM_UNSPECIFIED */
#elif defined (DEFAULT_STOP_SEC_CONST_UNSPECIFIED_FAR)
   #undef      DEFAULT_STOP_SEC_CONST_UNSPECIFIED_FAR
   /* TO-DO: insert pragma to locate data in default segment */

/* -------------------------------------------------------------------------- */
/* ROM code                                                                   */
/* -------------------------------------------------------------------------- */
#elif defined (DEFAULT_START_SEC_CODE)
   #undef      DEFAULT_START_SEC_CODE
   /* TO-DO: insert pragma to locate code in segment DEFAULT_CODE_ROM */
#elif defined (DEFAULT_STOP_SEC_CODE)
   #undef      DEFAULT_STOP_SEC_CODE
   /* TO-DO: insert pragma to locate code in default segment */

/* -------------------------------------------------------------------------- */
/* End of default section mapping                                             */
/* -------------------------------------------------------------------------- */
#endif  /* START_WITH_IF */


/*** End of file **************************************************************/

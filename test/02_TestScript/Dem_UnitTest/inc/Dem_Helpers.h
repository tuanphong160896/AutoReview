/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


#ifndef DEM_HELPERS_H
#define DEM_HELPERS_H


#define DEM_A_MAX_AB(a,b)    do { if ( (a) < (b) )\
                                  {(a) = (b);}\
                             } while (0)

#define DEM_A_MIN_AB(a,b)    do { if ( (a) > (b) )\
                                  {(a) = (b);}\
                             } while (0)

#define DEM_MIN(a, b)        ( ((a) < (b)) ? (a) : (b) )

#define DEM_MAX(a, b)        ( ((a) > (b)) ? (a) : (b) )

#define DEM_BOOLIFY(X)  ((X)!=(0))

#define DEM_BOOL2BIT(X) (((X)!=FALSE)?(1u):(0u))


#endif


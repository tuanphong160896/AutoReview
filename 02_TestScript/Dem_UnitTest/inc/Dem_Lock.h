/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


#ifndef DEM_LOCK_H
#define DEM_LOCK_H


#include "Dem_Cfg_Main.h"
#include "Dem_Cfg_Events.h"
#include "Dem_Main.h"


#if (DEM_CFG_BUILDTARGET != DEM_CFG_BUILDTARGET_DEMTESTSUITE)

   #include "Dem_Cfg_SchM.h"

   #define DEM_ENTERLOCK_MON()              SchM_Enter_Dem_Monitoring()
   #define DEM_EXITLOCK_MON()               SchM_Exit_Dem_Monitoring()

   #define DEM_ENTERLOCK_DCM()              SchM_Enter_Dem_Dcm()
   #define DEM_EXITLOCK_DCM()               SchM_Exit_Dem_Dcm()

   #define DEM_ASSERT_ISLOCKED()            do {} while (0)
   #define DEM_ASSERT_ISNOTLOCKED()         do {} while (0)

#else

#include "rba_SimCUnit.h"
#include "DemTest_Stub4IntLock.h"

DEM_INLINE void DEM_ENTERLOCK_MON (void)
{
    DEM_EnterLock__Stub_V(__FILE__);
}

DEM_INLINE void DEM_EXITLOCK_MON (void)
{
    DEM_ExitLock__Stub_V(__FILE__);
}

DEM_INLINE void DEM_ENTERLOCK_DCM (void)
{
#if(DEM_CFG_LOCK_ALLFAILUREINFO == DEM_CFG_LOCK_ALLFAILUREINFO_ON)
	if( Dem_OpMoIsAllFailureInfoLocked() ||  Dem_OpMoIsInitialized() )
#else
		if ( Dem_OpMoIsInitialized() )
#endif
		{
			DEM_EnterLock__Stub_V(__FILE__);
		}
		else
		{
	        assertTrue(Dem_OpMoIsInitialized());
		}
}


DEM_INLINE void DEM_EXITLOCK_DCM (void)
{
#if(DEM_CFG_LOCK_ALLFAILUREINFO == DEM_CFG_LOCK_ALLFAILUREINFO_ON)
	if( Dem_OpMoIsAllFailureInfoLocked() ||  Dem_OpMoIsInitialized() )
#else
		if ( Dem_OpMoIsInitialized() )
#endif
		{
			DEM_ExitLock__Stub_V(__FILE__);
		}

		else
		{
	        assertTrue(Dem_OpMoIsInitialized());
		}
}



#define DEM_ASSERT_ISLOCKED()    DEM_AssertIsLocked(__FILE__, __LINE__)
#define DEM_ASSERT_ISNOTLOCKED()    DEM_AssertIsNotLocked(__FILE__, __LINE__)

#endif


#endif


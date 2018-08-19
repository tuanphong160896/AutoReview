/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

#ifndef DEMTEST_STATUSCHANGECOLLECTOR_H
#define DEMTEST_STATUSCHANGECOLLECTOR_H

#include "Dem_Types.h"
#include "Dem_Cfg_EventId.h"
#include "Dem_Cfg_DtcId.h"


struct DemTest_StatusChangeInfo
{
    uint8 StatusOld;
    uint8 StatusNew;
};


//to avoid aborts with CCHECKER
#ifdef __cplusplus

#include <list>
#include <map>
#include <string>
#include <iostream>

class StatusChangeCollector
{
private:
    bool isActive;
    std::map<std::string,DemTest_StatusChangeInfo> collectedStatusChanges;
    std::string getIndexStr(std::string FncName, uint32 objIdentifier);
public:

    /* objIdentifier is either the DTC-code or the eventId */
    void SetStatusChangeCollectorActive(boolean Status) { isActive = Status;}
    void AddFncCall (std::string FncName, uint32 objIdentifier, uint8 StatusOld, uint8 StatusNew);
    void ClearAllFncCalls (void);
    bool areExpectedNoOfFunctionsCalled(uint32 FuncListsize);
    bool isFunctionCalled (std::string FuncName, uint32 objIdentifier, uint8 StatusOld, uint8 StatusNew);
    bool areFunctionsCalled (std::list<std::string>* FuncNameList, uint32 objIdentifier, uint8 StatusOld, uint8 StatusNew);

};

extern StatusChangeCollector DemTest_EvtStatusChangeCollector;
extern StatusChangeCollector DemTest_DtcStatusChangeCollector;

#else

//give some dummy C declaration for CChcker
typedef uint8 StatusChangeCollector;

#endif //__cplusplus


#endif



#ifndef DEM_PRJ_DISTURBANCEMEMORY_H
#define DEM_PRJ_DISTURBANCEMEMORY_H


#include "Dem_cfg_DistMem.h"
#include "Dem_Types.h"

#if(DEM_CFG_DIST_MEM_CALLBACK_ON_DISTURBANCE)


typedef struct
{
    /*a project specific data that is required to be stored in addition to the default disturbance memory data. For e.g the data stored during disturbances*/
    uint8 FDC;

} Dem_DistMemPrjDataType;
/*size in bytes of the elements returened by function Dem_GetDistMemPrjData*/
#define DEM_CFG_DIST_MEM_PRJ_DATA_SIZE 1u



/*function used to read the data from disturbance memory e.g. for Dcm service*/
/*The project has to take care of typecasting and convertion whereever it is required*/
void Dem_GetNextDisturbanceMemProjData(uint8 distIdx, uint8* DestBuffer);


/* Project specfic Callback*/
void  Dem_PrjDistMemCallbackOnDisturbance(Dem_EventIdType EventId);

#endif //DEM_CFG_DIST_MEM_CALLBACK_ON_DISTURBANCE

#endif //#DEM_PRJ_DISTURBANCEMEMORY_H

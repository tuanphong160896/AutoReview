/* ETAS RTE generator specific RTE header file */
/* Content is visible in all RTE files         */

#ifndef RTE_USERCFG_H
#define RTE_USERCFG_H

#define RTE_RESOURCE_IMPL_INTLOCK_ALL				0
#define RTE_RESOURCE_IMPL_INTLOCK_OS				1
#define RTE_RESOURCE_IMPL_RB_COMMONLOCK 			2
#define RTE_RESOURCE_IMPL_RB_CORELOCAL_INTLOCK 		3
#define RTE_RESOURCE_IMPL_RESOURCE 					4
#define RTE_RESOURCE_IMPL							RTE_RESOURCE_IMPL_INTLOCK_OS

#define RTE_SUSPEND_RESUME_ALL_INTERRUPTS_IMPL_INTLOCK			0
#define RTE_SUSPEND_RESUME_ALL_INTERRUPTS_IMPL_RB_COMMON_LOCK	1
#define RTE_SUSPEND_RESUME_ALL_INTERRUPTS_IMPL 					RTE_SUSPEND_RESUME_ALL_INTERRUPTS_IMPL_INTLOCK

#define RTE_SUSPEND_RESUME_OS_INTERRUPTS_IMPL_INTLOCK 			0
#define RTE_SUSPEND_RESUME_OS_INTERRUPTS_IMPL_RB_COMMON_LOCK	1
#define RTE_SUSPEND_RESUME_OS_INTERRUPTS_IMPL					RTE_SUSPEND_RESUME_OS_INTERRUPTS_IMPL_INTLOCK

#define Rte_SuspendOSInterrupts() do { } while(0)
#define Rte_ResumeOSInterrupts() do { } while(0)
/*
typedef struct {
   int         task;
   int         acnt;
} Rte_REContainerType;

typedef Rte_REContainerType * const Rte_REContainerRefType;*/
		//P2CONST(Rte_REContainerType, AUTOMATIC, RTE_CONST) Rte_REContainerRefType;

#endif /* RTE_USERCFG_H */

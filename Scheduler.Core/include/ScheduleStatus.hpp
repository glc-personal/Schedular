#ifndef SCHEDULESTATUS_H
#define SCHEDULESTATUS_H

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Schedule Status Enum
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Core {

        enum class ScheduleStatus {
            Scheduled,
            AlreadyScheduled,
            NotScheduled,
        };
    }
}

#endif // SCHEDULESTATUS_H

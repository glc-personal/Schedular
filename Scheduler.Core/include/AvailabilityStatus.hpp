#ifndef AVAILABILITYSTATUS_H
#define AVAILABILITYSTATUS_H

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Availability Status Enum
 *  Summary: Possible availability statuses.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        enum class AvailabilityStatus {
            Available,
            NotAvailable,
            PotentiallyAvailable,
        };
    }
}

#endif // AVAILABILITYSTATUS_H

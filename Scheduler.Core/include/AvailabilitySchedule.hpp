#ifndef AVAILABILITYSCHEDULE_H
#define AVAILABILITYSCHEDULE_H

#include "ScheduleBase.hpp"
#include "ScheduleStatus.hpp"
#include "Day.hpp"
#include "Week.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * AvailabilitySchedule
 *  Summary: Schedule for time available on a per week basis.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        class AvailabilitySchedule : public ScheduleBase {
        public:
            /*
             * ---------------------------------------------------------------------------------------- 
             * AvailabilitySchedule Constructor
             * ---------------------------------------------------------------------------------------- 
             */
            AvailabilitySchedule(const Day& first_day_of_the_week);

            /*
             * ---------------------------------------------------------------------------------------- 
             * AvailabilitySchedule Deconstructor
             * ---------------------------------------------------------------------------------------- 
             */
            ~AvailabilitySchedule();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get Methods
             * ---------------------------------------------------------------------------------------- 
             */
            Week GetWeek();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set Methods
             * ---------------------------------------------------------------------------------------- 
             */

        private:
            Week week;
        };
    }
}

#endif // AVAILABILITYSCHEDULE_H

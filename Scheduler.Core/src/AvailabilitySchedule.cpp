#include "AvailabilitySchedule.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * AvailabilitySchedule
 *  Summary: Schedule for time available on a per week basis.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        /*
         * ---------------------------------------------------------------------------------------- 
         * AvailabilitySchedule Constructor
         * ---------------------------------------------------------------------------------------- 
         */
        AvailabilitySchedule::AvailabilitySchedule(const Day& first_day_of_the_week) 
            : ScheduleBase(7, first_day_of_the_week) {
            week = Week(first_day_of_the_week);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * AvailabilitySchedule Destructor
         * ---------------------------------------------------------------------------------------- 
         */
        AvailabilitySchedule::~AvailabilitySchedule() {}


        /*
         * ---------------------------------------------------------------------------------------- 
         * GetWeek
         *  Summary: Get the week this schedule is for.
         *
         *  Input:
         *  Output: Week the schedule is for.
         * ---------------------------------------------------------------------------------------- 
         */
        Week AvailabilitySchedule::GetWeek() {
            return week;
        }
    }
}

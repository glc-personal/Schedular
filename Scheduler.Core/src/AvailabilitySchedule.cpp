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
        AvailabilitySchedule::AvailabilitySchedule() : ScheduleBase() {}
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

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetFirstDay 
         *  Summary: Set the week this schedule is for based on the first day.
         *
         *  Input: First day for the schedule
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::SetFirstDay(const Day& day) {
            week = Week(day);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAvailability
         *  Summary: Mark a quarter hour in the schedule's availability.
         *
         *  Input: A reference to the quarter hour and the AvailabilityStatus to be marked for it.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAvailability(QuarterHour& qh, 
            AvailabilityStatus status) {
            qh.SetAvailabilityStatus(status);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAsAvailable
         *  Summary: Mark a quarter hour in the schedule as available.
         *
         *  Input: A reference to the quarter hour.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAsAvailable(QuarterHour& qh) {
            qh.SetAvailabilityStatus(AvailabilityStatus::Available);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAsNotAvailable
         *  Summary: Mark a quarter hour in the schedule as not available.
         *
         *  Input: A reference to the quarter hour.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAsNotAvailable(QuarterHour& qh) {
            qh.SetAvailabilityStatus(AvailabilityStatus::NotAvailable);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAsPotentiallyAvailable
         *  Summary: Mark a quarter hour in the schedule as potentially available.
         *
         *  Input: A reference to the quarter hour.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAsPotentiallyAvailable(QuarterHour& qh) {
            qh.SetAvailabilityStatus(AvailabilityStatus::PotentiallyAvailable);
        }
    }
}

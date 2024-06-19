#ifndef AVAILABILITYSCHEDULE_H
#define AVAILABILITYSCHEDULE_H

#include "ScheduleBase.hpp"
#include "ScheduleStatus.hpp"
#include "AvailabilityStatus.hpp"
#include "QuarterHour.hpp"
#include "Hour.hpp"
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
            AvailabilitySchedule();
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
            void SetFirstDay(const Day& day);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Mark Availability Methods
             * ---------------------------------------------------------------------------------------- 
             */
            void MarkQuarterHourAvailability(QuarterHour& qh, AvailabilityStatus status);
            void MarkQuarterHourAsAvailable(QuarterHour& qh);
            void MarkQuarterHourAsNotAvailable(QuarterHour& qh);
            void MarkQuarterHourAsPotentiallyAvailable(QuarterHour& qh);
            void MarkHourAvailability(Hour& hour, AvailabilityStatus status);
            void MarkHourAsAvailable(Hour& hour);
            void MarkHourAsNotAvailable(Hour& hour);
            void MarkHourAsPotentiallyAvailable(Hour& hour);

        private:
            Week week;
        };
    }
}

#endif // AVAILABILITYSCHEDULE_H

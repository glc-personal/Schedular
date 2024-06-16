#ifndef QUARTERHOUR_H
#define QUARTERHOUR_H

#include "ScheduleStatus.hpp"

namespace Scheduler {
    namespace Core {

        class QuarterHour {
        public:
            /*
             * ---------------------------------------------------------------------------------------- 
             * Quarter Hour Constructor
             * ---------------------------------------------------------------------------------------- 
             */
            QuarterHour();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Quarter Hour Deconstructor
             * ---------------------------------------------------------------------------------------- 
             */
            ~QuarterHour();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get methods
             * ---------------------------------------------------------------------------------------- 
             */
            ScheduleStatus getBookedStatus() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set methods
             * ---------------------------------------------------------------------------------------- 
             */
            void setBookedStatus(ScheduleStatus status);
            void setAsBooked();
            void setAsNotBooked();

        private:
            ScheduleStatus booked_status;
        };
    }
}

#endif // QUARTERHOUR_H

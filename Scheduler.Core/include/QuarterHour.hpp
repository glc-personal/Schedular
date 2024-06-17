#ifndef QUARTERHOUR_H
#define QUARTERHOUR_H

#include "BookedStatus.hpp"

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
            BookedStatus getBookedStatus() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set methods
             * ---------------------------------------------------------------------------------------- 
             */
            void setBookedStatus(BookedStatus status);
            void setAsBooked();
            void setAsNotBooked();

        private:
            BookedStatus booked_status;
        };
    }
}

#endif // QUARTERHOUR_H

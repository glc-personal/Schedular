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
            BookedStatus GetBookedStatus() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set methods
             * ---------------------------------------------------------------------------------------- 
             */
            void SetBookedStatus(BookedStatus status);
            void SetAsBooked();
            void SetAsNotBooked();

        private:
            BookedStatus booked_status;
        };
    }
}

#endif // QUARTERHOUR_H

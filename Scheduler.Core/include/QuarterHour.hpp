#ifndef QUARTERHOUR_H
#define QUARTERHOUR_H

#include "BookedStatus.hpp"
#include "AvailabilityStatus.hpp"

namespace Scheduler {
    namespace Core {

        class Hour;

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
            Hour* GetParent();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set methods
             * ---------------------------------------------------------------------------------------- 
             */
            void SetBookedStatus(BookedStatus status);
            void SetAsBooked();
            void SetAsNotBooked();
            void SetAvailabilityStatus(AvailabilityStatus status);
            void SetAsAvailable();
            void SetAsNotAvailable();
            void SetAsPotentiallyAvailable();
            void SetParent(Hour* hour);
            

        private:
            BookedStatus booked_status;
            AvailabilityStatus availability_status;
            Hour* parent;
        };
    }
}

#endif // QUARTERHOUR_H

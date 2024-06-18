#include "QuarterHour.hpp"
#include "BookedStatus.hpp"

namespace Scheduler {
    namespace Core {

        /*
         * ---------------------------------------------------------------------------------------- 
         * Quarter Hour Constructor
         * ---------------------------------------------------------------------------------------- 
         */
        QuarterHour::QuarterHour() {
            // Set the booked status by default as not booked.
            booked_status = BookedStatus::NotBooked;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * Quarter Hour Deconstructor
         * ---------------------------------------------------------------------------------------- 
         */
        QuarterHour::~QuarterHour() {}

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetBookedStatus
         *  Summary: Obtain the booked status for this quarter hour.
         *
         *  Input: 
         *  Output: BookedStatus if it has been booked or not.
         * ---------------------------------------------------------------------------------------- 
         */
        BookedStatus QuarterHour::GetBookedStatus() const {
            return booked_status;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetBookedStatus
         *  Summary: Set the booked status for this quarter hour.
         *
         *  Input: BookedStatus if it is to be booked or not
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetBookedStatus(BookedStatus status) {
            booked_status = status;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetAsBooked
         *  Summary: Set the booked status for this quarter hour as booked.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetAsBooked() {
            booked_status = BookedStatus::Booked;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetAsNotBooked
         *  Summary: Set the booked status for this quarter hour as not booked.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetAsNotBooked() {
            QuarterHour::SetBookedStatus(BookedStatus::NotBooked);
        }
    }
}

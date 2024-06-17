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
         * getBookedStatus
         *  Summary: Obtain the booked status for this quarter hour.
         *
         *  Input: 
         *  Output: BookedStatus if it has been booked or not.
         * ---------------------------------------------------------------------------------------- 
         */
        BookedStatus QuarterHour::getBookedStatus() const {
            return booked_status;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * setBookedStatus
         *  Summary: Set the booked status for this quarter hour.
         *
         *  Input: BookedStatus if it is to be booked or not
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::setBookedStatus(BookedStatus status) {
            booked_status = status;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * setAsBooked
         *  Summary: Set the booked status for this quarter hour as booked.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::setAsBooked() {
            QuarterHour::setBookedStatus(BookedStatus::Booked);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * setAsNotBooked
         *  Summary: Set the booked status for this quarter hour as not booked.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::setAsNotBooked() {
            QuarterHour::setBookedStatus(BookedStatus::NotBooked);
        }
    }
}
#include "QuarterHour.hpp"

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
         * GetParent
         *  Summary: Get the parent hour for this quarter hour.
         *
         *  Input: Pointer to the parent hour
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        Hour* QuarterHour::GetParent() {
            return parent;
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

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetAvailabilityStatus
         *  Summary: Set the AvailabilityStatus for this quarter hour.
         *
         *  Input: AvailabilityStatus if it is to be available, not available, or potentially 
         *      available.
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetAvailabilityStatus(AvailabilityStatus status) {
            availability_status = status;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetAsAvailability
         *  Summary: Set the AvailabilityStatus for this quarter hour as Available.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetAsAvailable() {
            availability_status = AvailabilityStatus::Available;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetAsNotAvailable
         *  Summary: Set the AvailabilityStatus for this quarter hour as NotAvailable.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetAsNotAvailable() {
            availability_status = AvailabilityStatus::NotAvailable;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetAsPotentiallyAvailable
         *  Summary: Set the AvailabilityStatus for this quarter hour as PotentiallyAvailable.
         *
         *  Input:
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetAsPotentiallyAvailable() {
            availability_status = AvailabilityStatus::PotentiallyAvailable;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetParent
         *  Summary: Set the parent hour for this quarter hour.
         *
         *  Input: Pointer to the parent hour
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void QuarterHour::SetParent(Hour* hour) {
            parent = hour;
        }

    }
}

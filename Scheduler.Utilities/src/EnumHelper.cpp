#include "EnumHelper.hpp"

namespace Scheduler {
    namespace Utilities {

        /*
         * ---------------------------------------------------------------------------------------- 
         * ToString
         *  Summary: Convert a UserStatus enum to a string.
         *
         *  Input: The UserStatus enum value.
         *  Output: The string representing the UserStatus enum.
         * ---------------------------------------------------------------------------------------- 
         */
        template <>
        std::string EnumHelper::ToString(Scheduler::Core::UserStatus status) {
            switch (status) {
                /*
                 * -------------------------------------------------------------------------------- 
                 * User existance
                 * -------------------------------------------------------------------------------- 
                 */
                case Scheduler::Core::UserStatus::DoesNotExist:
                    return "Does Not Exist";
                case Scheduler::Core::UserStatus::Exists:
                    return "Exists";
                /*
                 * -------------------------------------------------------------------------------- 
                 * User logged in status
                 * -------------------------------------------------------------------------------- 
                 */
                case Scheduler::Core::UserStatus::LoggedIn:
                    return "Logged-In";
                case Scheduler::Core::UserStatus::LoggedOut:
                    return "Logged-Out";

                default:
                    return "Unknown";
            }
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * ToString
         *  Summary: Convert a ScheduleStatus enum to a string.
         *
         *  Input: The ScheduleStatus enum value.
         *  Output: The string representing the ScheduleStatus enum.
         * ---------------------------------------------------------------------------------------- 
         */
        template <>
        std::string EnumHelper::ToString(Scheduler::Core::ScheduleStatus status) {
            switch (status) {
                case Scheduler::Core::ScheduleStatus::Scheduled:
                    return "Scheduled";
                case Scheduler::Core::ScheduleStatus::AlreadyScheduled:
                    return "Already Scheduled";
                case Scheduler::Core::ScheduleStatus::NotScheduled:
                    return "Not Scheduled";
                defualt:
                    return "Unknown";
            }
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * ToString
         *  Summary: Convert a BookedStatus enum to a string.
         *
         *  Input: The BookedStatus enum value.
         *  Output: The string representing the BookedStatus enum.
         * ---------------------------------------------------------------------------------------- 
         */
        template <>
        std::string EnumHelper::ToString(Scheduler::Core::BookedStatus status) {
            switch (status) {
                case Scheduler::Core::BookedStatus::Booked:
                    return "Booked";
                case Scheduler::Core::BookedStatus::NotBooked:
                    return "Not Booked";
                defualt:
                    return "Unknown";
            }
        }
    }
}

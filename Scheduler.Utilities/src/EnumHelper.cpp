#include "EnumHelper.hpp"

namespace Scheduler {
    namespace Utilities {

        /*
         * ---------------------------------------------------------------------------------------- 
         * toString
         *  Summary: Convert a UserStatus enum to a string.
         *
         *  Input: The UserStatus enum value.
         *  Output: The string representing the UserStatus enum.
         * ---------------------------------------------------------------------------------------- 
         */
        template <>
        std::string EnumHelper::toString(Scheduler::Core::UserStatus status) {
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
         * toString
         *  Summary: Convert a ScheduleStatus enum to a string.
         *
         *  Input: The ScheduleStatus enum value.
         *  Output: The string representing the ScheduleStatus enum.
         * ---------------------------------------------------------------------------------------- 
         */
        template <>
        std::string EnumHelper::toString(Scheduler::Core::ScheduleStatus status) {
            switch (status) {
                case Scheduler::Core::ScheduleStatus::Selected:
                    return "Selected";
                case Scheduler::Core::ScheduleStatus::NotSelected:
                    return "Not Selected";
                defualt:
                    return "Unknown";
            }
        }
    }
}

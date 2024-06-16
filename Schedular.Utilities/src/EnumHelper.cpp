#include "EnumHelper.hpp"

namespace Schedular {
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
        std::string EnumHelper::toString(Schedular::Core::UserStatus status) {
            switch (status) {
                /*
                 * -------------------------------------------------------------------------------- 
                 * User existance
                 * -------------------------------------------------------------------------------- 
                 */
                case Schedular::Core::UserStatus::DoesNotExist:
                    return "Does Not Exist";
                case Schedular::Core::UserStatus::Exists:
                    return "Exists";
                /*
                 * -------------------------------------------------------------------------------- 
                 * User logged in status
                 * -------------------------------------------------------------------------------- 
                 */
                case Schedular::Core::UserStatus::LoggedIn:
                    return "Logged-In";
                case Schedular::Core::UserStatus::LoggedOut:
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
        std::string EnumHelper::toString(Schedular::Core::ScheduleStatus status) {
            switch (status) {
                case Schedular::Core::ScheduleStatus::Selected:
                    return "Selected";
                case Schedular::Core::ScheduleStatus::NotSelected:
                    return "Not Selected";
                defualt:
                    return "Unknown";
            }
        }
    }
}

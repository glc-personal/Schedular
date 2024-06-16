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
    }
}

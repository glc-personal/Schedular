#include "UserBase.hpp"

namespace Schedular {
    namespace Core {
        /*
         * ---------------------------------------------------------------------------------------------------- 
         * User Base constructor
         * ---------------------------------------------------------------------------------------------------- 
         */
        UserBase::UserBase(const std::string& first_name, const std::string& last_name, const int id) 
            : first_name(first_name), last_name(last_name), id(id) {
            // Set User Base default flags
            logged_in_status = UserStatus::LoggedOut;
        }

        /*
         * ---------------------------------------------------------------------------------------------------- 
         * User Base deconstructor
         * ---------------------------------------------------------------------------------------------------- 
         */
        UserBase::~UserBase() {}
        
        /*
         * ---------------------------------------------------------------------------------------------------- 
         * Get the user's first name
         *  Input: 
         *  Output: The user's first name as a string.
         * ---------------------------------------------------------------------------------------------------- 
         */
        std::string UserBase::getFirstName() const {
            return first_name;
        }

        /*
         * ---------------------------------------------------------------------------------------------------- 
         * Get the user's last name
         *  Input: 
         *  Output: The user's last name as a string.
         * ---------------------------------------------------------------------------------------------------- 
         */
        std::string UserBase::getLastName() const {
            return last_name;
        }

        /*
         * ---------------------------------------------------------------------------------------------------- 
         * Get the user's name
         *  Input: 
         *  Output: The user's name as a string.
         * ---------------------------------------------------------------------------------------------------- 
         */
        std::string UserBase::getName() const { 
            return first_name + " " + last_name;
        }

        /*
         * ---------------------------------------------------------------------------------------------------- 
         * Get the user's id
         *  Input: 
         *  Output: The user's id as an integer.
         * ---------------------------------------------------------------------------------------------------- 
         */
        int UserBase::getID() const {
            return id;
        }

        /*
         * ---------------------------------------------------------------------------------------------------- 
         * Get the user's logged in status
         *  Input: 
         *  Output: The user's logged in status.
         * ---------------------------------------------------------------------------------------------------- 
         */
        UserStatus UserBase::getLoggedInStatus() const {
            return logged_in_status;
        }
        
        /*
         * ---------------------------------------------------------------------------------------------------- 
         * Set the user's logged in status
         *  Input: The logged in status.
         *  Output:
         * ---------------------------------------------------------------------------------------------------- 
         */
        void UserBase::setLoggedInStatus(UserStatus status) {
            logged_in_status = status;
        }
    }
}


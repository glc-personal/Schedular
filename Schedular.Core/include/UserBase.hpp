#ifndef USER_H
#define USER_H

#include "UserStatus.hpp"
#include <string>

/*
 * -------------------------------------------------------------------------------- 
 * User Base class to represent a user.
 * -------------------------------------------------------------------------------- 
 */
namespace Schedular {
    namespace Core {

        class UserBase {
        public:
            /*
             * ---------------------------------------------------------------------------- 
             * User base constructor
             * ---------------------------------------------------------------------------- 
             */
            UserBase(const std::string& first_name, const std::string& last_name, 
                const int id);

            /*
             * ---------------------------------------------------------------------------- 
             * User base deconstructor
             * ---------------------------------------------------------------------------- 
             */
            virtual ~UserBase();
        
            /*
             * ---------------------------------------------------------------------------- 
             * Get methods
             * ---------------------------------------------------------------------------- 
             */
            std::string getFirstName() const;
            std::string getLastName() const;
            std::string getName() const;
            int getID() const;
            UserStatus getLoggedInStatus() const;
        
            /*
             * ---------------------------------------------------------------------------- 
             * Set methods
             * ---------------------------------------------------------------------------- 
             */
            void setLoggedInStatus(UserStatus status);
        
        private:
            /*
             * ---------------------------------------------------------------------------- 
             * Constants
             * ---------------------------------------------------------------------------- 
             */
            std::string first_name;
            std::string last_name;
            int id;
        
            /* 
             * ---------------------------------------------------------------------------- 
             * Flags
             * ---------------------------------------------------------------------------- 
             */
            UserStatus logged_in_status;
        };
    }
}
#endif // USER_H

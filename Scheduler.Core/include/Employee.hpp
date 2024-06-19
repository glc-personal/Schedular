#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "UserBase.hpp"
#include "AvailabilitySchedule.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Employee class
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        class Employee : public UserBase {
        public:
            /* 
             * ---------------------------------------------------------------------------------------- 
             * Employee Constructor
             * ---------------------------------------------------------------------------------------- 
             */
            Employee(const std::string& first_name, 
                const std::string& last_name,
                const int id);
            /*
             * ---------------------------------------------------------------------------------------- 
             * Employee Deconstructor
             * ---------------------------------------------------------------------------------------- 
             */
            ~Employee();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get Methods
             * ---------------------------------------------------------------------------------------- 
             */
            AvailabilitySchedule GetAvailabilitySchedule() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set Methods
             * ---------------------------------------------------------------------------------------- 
             */
            void SetAvailabilitySchedule(AvailabilitySchedule& schedule);

        private:
            AvailabilitySchedule availability_schedule;
        };
    }
}

#endif // EMPLOYEE_H

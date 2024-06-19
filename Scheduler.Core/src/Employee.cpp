#include "Employee.hpp"
#include "AvailabilitySchedule.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Employee user implementation
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        /*
         * --------------------------------------------------------------------------------------------
         * Employee Constructor
         * --------------------------------------------------------------------------------------------
         */
        Employee::Employee(const std::string& first_name, 
            const std::string& last_name,
            const int id) : UserBase(first_name, last_name, id) {}

        /*
         * --------------------------------------------------------------------------------------------
         * Employee Deconstructor
         * --------------------------------------------------------------------------------------------
         */
        Employee::~Employee() {}

        /*
         * --------------------------------------------------------------------------------------------
         * GetAvailabilitySchedule
         *  Summary: Get the AvailabilitySchedule for the Employee.
         * 
         *  Input:
         *  Output: The AvailabilitySchedule
         * --------------------------------------------------------------------------------------------
         */
        AvailabilitySchedule Employee::GetAvailabilitySchedule() const {
            return availability_schedule;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * SetAvailabilitySchedule
         *  Summary: Set the AvailabilitySchedule for the Employee.
         * 
         *  Input: The AvailabilitySchedule
         *  Output:
         * --------------------------------------------------------------------------------------------
         */
        void Employee::SetAvailabilitySchedule(AvailabilitySchedule& schedule) {
            availability_schedule = schedule;
        }
    }
}

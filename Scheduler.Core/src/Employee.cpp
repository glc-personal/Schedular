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
         * G
         *  Summary:
         *
         *  Input:
         *  Output:
         * --------------------------------------------------------------------------------------------
         */

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

        /*
         * --------------------------------------------------------------------------------------------
         * SetPay
         *  Summary:
         *
         *  Input:
         *  Output:
         * --------------------------------------------------------------------------------------------
         */
        void Employee::SetPay(double amount) {
            pay = amount;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * SetInTraining
         *  Summary:
         *
         *  Input:
         *  Output:
         * --------------------------------------------------------------------------------------------
         */
        void Employee::SetInTraining(bool flag) {
            in_training = flag;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * SetCanTrainFront
         *  Summary:
         *
         *  Input:
         *  Output:
         * --------------------------------------------------------------------------------------------
         */
        void Employee::SetCanTrainFront(bool flag) {
            can_train_front = flag;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * SetCanTrainBack
         *  Summary: Sets the CanTrainBack flag for the Employee.
         *
         *  Input: Boolean flag
         *  Output:
         * --------------------------------------------------------------------------------------------
         */
        void Employee::SetCanTrainBack(bool flag) {
            can_train_back = flag;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * IsInTraining
         *  Summary: Checks if the Employee is being trained.
         *
         *  Input:
         *  Output:
         * --------------------------------------------------------------------------------------------
         */
        bool Employee::IsInTraining() {
            return in_training;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * CanTrainFront
         *  Summary: Checks if the Employee can train other Employees in the front.
         *
         *  Input:
         *  Output: Boolean on whether the Employee can train in the front.
         * --------------------------------------------------------------------------------------------
         */
        bool Employee::CanTrainFront() {
            return can_train_front;
        }

        /*
         * --------------------------------------------------------------------------------------------
         * CanTrainBack
         *  Summary: Checks if the Employee can train other Employees in the back.
         *
         *  Input: 
         *  Output: CanTrainBack flag.
         * --------------------------------------------------------------------------------------------
         */
        bool Employee::CanTrainBack() {
            return can_train_back;
        }
    }
}

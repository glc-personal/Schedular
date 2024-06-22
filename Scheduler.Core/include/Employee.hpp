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
            double GetPay() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set Methods
             * ---------------------------------------------------------------------------------------- 
             */
            void SetAvailabilitySchedule(AvailabilitySchedule& schedule);
            void SetPay(double amount);
            void SetInTraining(bool flag);
            void SetCanTrainFront(bool flag);
            void SetCanTrainBack(bool flag);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Check Methods
             * ---------------------------------------------------------------------------------------- 
             */
            bool IsInTraining();
            bool CanTrainFront();
            bool CanTrainBack();

        private:
            AvailabilitySchedule availability_schedule;
            double pay;
            bool in_training;
            bool can_train_front;
            bool can_train_back;
        };
    }
}

#endif // EMPLOYEE_H

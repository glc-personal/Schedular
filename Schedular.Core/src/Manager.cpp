#include "Manager.hpp"
#include <iostream>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Manager User Implementation
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Schedular {
    namespace Core {
   
        /*
         * ---------------------------------------------------------------------------------------- 
         * Manager Constructor
         * ---------------------------------------------------------------------------------------- 
         */
        Manager::Manager(const std::string& first_name, const std::string& last_name, const int id)
            : UserBase(first_name, last_name, id) {}

        /*
         * ---------------------------------------------------------------------------------------- 
         * Manager Deconstructor
         * ---------------------------------------------------------------------------------------- 
         */
        Manager::~Manager() {}

        /*
         * ---------------------------------------------------------------------------------------- 
         * getEmployees
         *  Summary: Get the Vector of Employees under this Manager.
         * 
         *  Input: 
         *  Output: Vector of Employees under this Manager.
         * ---------------------------------------------------------------------------------------- 
         */
        std::vector<Employee> Manager::getEmployees() const {
            return employees;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * addEmployee
         *  Summary: Add an Employee to the list of Employees under this Manager.
         * 
         *  Input: Employee to be added.
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void Manager::addEmployee(Employee employee) {
            // Add logic to avoid adding employees already in the vectored list.
            employees.push_back(employee);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * removeEmployee
         *  Summary: Remove an Employee from the list of Employees under this Manager.
         * 
         *  Input: ID of the Employee to be removed.
         *  Output: UserStatus for if the Employee was found or not.
         * ---------------------------------------------------------------------------------------- 
         */
        UserStatus Manager::removeEmployee(int id) {
            int index = 0;
            for (const Employee& employee : employees) {
                if (employee.getID() == id) {
                    employees.erase(employees.begin() + index);
                    return UserStatus::Exists;
                }
                index++;
            } 
            return UserStatus::DoesNotExist;
        }

    }
}

#include "Manager.hpp"
#include "Employee.hpp"
#include "UserStatus.hpp"
#include "EnumHelper.hpp"
#include <iostream>

int main() 
{
    std::cout << "Scheduler!" << std::endl;
    // Create a manager
    Scheduler::Core::Manager* manager = new Scheduler::Core::Manager("Sandra", "Timpelton", 1);

    // Create an employee
    Scheduler::Core::Employee* employee = new Scheduler::Core::Employee("Tom", "Villas", 2);

    // Add the employee
    manager->addEmployee(*employee);
    delete employee;

    // Create a new emplyee
    employee = new Scheduler::Core::Employee("Barbra", "Thompson", 3);

    // Add the employee
    manager->addEmployee(*employee);
    delete employee;
 
    // Show the manager's employees
    std::cout << "Manager: " << manager->getName() << std::endl;
    for (const Scheduler::Core::Employee& _ : manager->getEmployees()) {
        std::cout << "\t" << _.getName() << ": " << Scheduler::Utilities::EnumHelper::toString(_.getLoggedInStatus()) << std::endl;
    }

    // Remove an employee
    std::cout << "Manager: " << manager->getName() << std::endl;
    if (manager->removeEmployee(2) == Scheduler::Core::UserStatus::Exists) {
        std::cout << "Employee removed" << std::endl;
        for (const Scheduler::Core::Employee& _ : manager->getEmployees()) {
            std::cout << "\t" << _.getName() << std::endl;
        }
    }
    else {
        std::cout << "Employee could not be found, not removed" << std::endl;
    }

    delete manager;
    return 0;
}

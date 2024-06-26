#include "Manager.hpp"
#include "Employee.hpp"
#include "UserStatus.hpp"
#include "EnumHelper.hpp"
#include "ScheduleBase.hpp"
#include "AvailabilitySchedule.hpp"
#include "Day.hpp"
#include <iostream>
#include <vector>
#include <functional>

int main() 
{
    std::cout << "Scheduler!" << std::endl;
    // Create a manager
    Scheduler::Core::Manager* manager = new Scheduler::Core::Manager("Sandra", "Timpelton", 1);

    // Create an employee
    Scheduler::Core::Employee* employee = new Scheduler::Core::Employee("Tom", "Villas", 2);

    // Add the employee
    manager->addEmployee(*employee);

    // Setup an AvailabilitySchedule for an employee.
    Scheduler::Core::Day today(6, 19, 2024);
    Scheduler::Core::AvailabilitySchedule schedule(today);
    employee->SetAvailabilitySchedule(schedule);
    std::vector< std::reference_wrapper<Scheduler::Core::Day> > days = schedule.GetDays();
    Scheduler::Core::Day& day = days[0].get();
    std::vector< std::reference_wrapper<Scheduler::Core::Hour> > hours = day.GetAllHours();
    Scheduler::Core::Hour& hour = hours[0].get();
    std::vector< std::reference_wrapper<Scheduler::Core::QuarterHour> > qhs = hour.GetAllQuarterHours();
    Scheduler::Core::QuarterHour& qh = qhs[0];
    schedule.MarkQuarterHourAsAvailable(qh);
    employee->SetAvailabilitySchedule(schedule);
    schedule.PrintAsString();

    //delete schedule;
    delete employee;

    // Create a new emplyee
    employee = new Scheduler::Core::Employee("Barbra", "Thompson", 3);

    // Add the employee
    manager->addEmployee(*employee);
    delete employee;
 
    // Show the manager's employees
    std::cout << "Manager: " << manager->getName() << std::endl;
    for (const Scheduler::Core::Employee& _ : manager->getEmployees()) {
        std::cout << "\t" << _.getName() << ": " << Scheduler::Utilities::EnumHelper::ToString(_.getLoggedInStatus()) << std::endl;
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

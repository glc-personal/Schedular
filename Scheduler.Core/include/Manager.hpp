#ifndef MANAGER_H
#define MANAGER_H

#include "UserBase.hpp"
#include "Employee.hpp"
#include "UserStatus.hpp"
#include <vector>
#include <string>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Manager user
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Core {

        class Manager : public UserBase {
        public:
            /*
             * ---------------------------------------------------------------------------------------- 
             * Manager Constructor
             * ---------------------------------------------------------------------------------------- 
             */
            Manager(const std::string& first_name, const std::string& last_name, const int id);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Manager Deconstructor
             * ---------------------------------------------------------------------------------------- 
             */
            ~Manager();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get methods
             * ---------------------------------------------------------------------------------------- 
             */
            std::vector<Employee> getEmployees() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Add methods
             * ---------------------------------------------------------------------------------------- 
             */
            void addEmployee(Employee employee);

           /*
            * ---------------------------------------------------------------------------------------- 
            * Remove methods
            * ---------------------------------------------------------------------------------------- 
            */
           UserStatus removeEmployee(int id);

        private:
            std::vector<Employee> employees; // use a vector over a list because push_back is faster, adding to end of vector is faster
        };
    }
}

#endif // MANAGER_H

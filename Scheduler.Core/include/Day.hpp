#ifndef DAY_H
#define DAY_H

#include "Hour.hpp"
#include "ScheduleStatus.hpp"
#include <string>
#include <ctime>
#include <vector>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Day 
 *  Summary: Named collection of 24 hours.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        class Day {
        public:
            std::string name; 
            Hour hours[24];

            /*
             * ---------------------------------------------------------------------------------------- 
             * Day Constructors
             * ---------------------------------------------------------------------------------------- 
             */
            Day();
            Day(const int month, const int day, const int year);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Day Deconstructors
             * ---------------------------------------------------------------------------------------- 
             */
            ~Day();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get Methods
             * ---------------------------------------------------------------------------------------- 
             */
            Hour GetHour(int nth_hour);
            std::vector<Hour> GetAllHours();
            std::vector<Hour> GetRangeOfHours(int n_hours, int nth_hour);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Operator Overloads
             * ---------------------------------------------------------------------------------------- 
             */
            Day operator+(const int n_days_since);
            Day operator-(const int n_days_before);

        private:
            std::tm date;
        };
    }
}

#endif // DAY_H

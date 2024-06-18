#ifndef DAY_H
#define DAY_H

#include "Hour.hpp"
#include "ScheduleStatus.hpp"
#include <string>
#include <ctime>
#include <vector>
#include <functional>

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
            std::vector<Hour> hours;

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
            std::tm GetTm();
            Hour& GetHour(int nth_hour);
            std::vector< std::reference_wrapper<Hour> > GetAllHours();
            std::vector< std::reference_wrapper<Hour> > GetRangeOfHours(int n_hours, int nth_hour);
            std::string GetDayOfTheWeek() const;
            std::string GetDateAsString() const;

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

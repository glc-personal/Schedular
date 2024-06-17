#include "Day.hpp"
#include "TmToDayOfTheWeek.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Day
 *   Summary: Named collection of hours.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        /*
         * ---------------------------------------------------------------------------------------- 
         * Day Constructors
         * ---------------------------------------------------------------------------------------- 
         */
        Day::Day() {}
        Day::Day(const int month, const int day, const int year) {
            // Initialize the date for this day.
            date.tm_mon = month - 1;
            date.tm_mday = day;
            date.tm_year = year - 1900;
            // Get the day of the week.
            name = Scheduler::Utilities::TmToDayOfTheWeek(date);
            // Initialize the 24 hours.
            for (int i = 0; i < 24; i++) {
                hours[i] = Hour();
            }
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * Day Deconstructors
         * ---------------------------------------------------------------------------------------- 
         */
        Day::~Day() {}

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetHour
         *  Summary: Get the Hour.
         *
         *  Input: The integer representation of the hour (1 first hour, 24 last hour).
         *  Output: The nth hour.
         * ---------------------------------------------------------------------------------------- 
         */
        Hour Day::GetHour(int nth_hour) {
            return hours[nth_hour-1];
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetAllHours
         *  Summary: Get all the hours in the day.
         *
         *  Input:
         *  Output: All hours in the day.
         * ---------------------------------------------------------------------------------------- 
         */
        std::vector<Hour> Day::GetAllHours() {
            std::vector<Hour> all;
            all.reserve(24);
            for (int i = 0; i < 24; i++) {
                all[i] = hours[i];
            }
            return all;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetRangeOfHours
         *  Summary: Get n of the hours in the day starting from the nth hour.
         *
         *  Input: The number of hours starting from the nth hour
         *  Output: N hours from the day.
         * ---------------------------------------------------------------------------------------- 
         */
        std::vector<Hour> Day::GetRangeOfHours(int n_hours, int nth_hour) {
            // Clip the number of hours if necessary. 
            if (n_hours + nth_hour > 24) {
                n_hours = 24 - nth_hour;
            }
            std::vector<Hour> range;
            range.reserve(n_hours);
            for (int i = 0; i < n_hours; i++) {
                range[i] = hours[i+nth_hour-1];
            }
            return range;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * +
         *  Summary: Get the Day n days from the Day instance.
         *
         *  Input: The number of days from the Day instance.
         *  Output: The Day n days from the Day instance.
         * ---------------------------------------------------------------------------------------- 
         */
        Day Day::operator+(const int n_days_since) {
            // Convert to unix time (tm -> time_t).
            std::time_t time = std::mktime(&date);
            // Add the extra time (n_days_since * 86400 seconds). There are 86400 seconds in a day.
            time += n_days_since * 86400; 
            // Convert back to a tm struct.
            std::tm* new_date = std::localtime(&time);
            Day day = Day(new_date->tm_mon, new_date->tm_mday, new_date->tm_year);
            return day;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * -
         *  Summary: Get the Day n days before the Day instance.
         *
         *  Input: The number of days before the Day instance.
         *  Output: The Day n days before the Day instance.
         * ---------------------------------------------------------------------------------------- 
         */
        Day Day::operator-(const int n_days_before) {
            // Convert to unix time (tm -> time_t).
            std::time_t time = std::mktime(&date);
            // Subtract the extra time (n_days_since * 86400 seconds). There are 86400 seconds in a day.
            time -= n_days_before * 86400; 
            // Convert back to a tm struct.
            std::tm* new_date = std::localtime(&time);
            Day day = Day(new_date->tm_mon, new_date->tm_mday, new_date->tm_year);
            return day;
        }
    }
}

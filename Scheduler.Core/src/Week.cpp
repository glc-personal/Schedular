#include "Week.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Week
 *  Summary: Collection of 7 consecutive days.
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Core {

        /*
         * ---------------------------------------------------------------------------------------- 
         * Week Constructor
         * ---------------------------------------------------------------------------------------- 
         */
        Week::Week() {}
        Week::Week(const Day& first_day_of_the_week) {
            this->SetDays(first_day_of_the_week);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * Week Deconstructor
         * ---------------------------------------------------------------------------------------- 
         */
        Week::~Week() {};

        /*
         * ---------------------------------------------------------------------------------------- 
         *  GetDays
         *   Summary: Get the days of the week.
         *
         *   Input:
         *   Output: Days of the Week
         * ---------------------------------------------------------------------------------------- 
         */
        Day* Week::GetDays() const {
            static Day week_days[7];
            for (int i = 0; i < 7; i++) {
                week_days[i] = days[i];
            }
            return week_days;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetFirstDay
         *  Summary: Get the first day of the week
         *
         *  Input:
         *  Output: First Day of the Week
         * ---------------------------------------------------------------------------------------- 
         */
        Day Week::GetFirstDay() const {
            return first_day;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetLastDay
         *  Summary: Get the last day of the week.
         *
         *  Input:
         *  Output: Last Day of the Week.
         * ---------------------------------------------------------------------------------------- 
         */
        Day Week::GetLastDay() const {
            return last_day;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetDays
         *  Summary: Set the days for the Week.
         *
         *  Input: First Day of the Week.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void Week::SetDays(const Day& first_day_of_the_week) {
            first_day = first_day_of_the_week;
            days[0] = first_day;
            // Initialize the Week.
            for (int i = 1; i < 7; i++) {
                days[i] = first_day + i;
            }
            last_day = days[6];
        }
    }
}

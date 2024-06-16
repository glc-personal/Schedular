#ifndef DAY_H
#define DAY_H

#include "Hour.hpp"
#include "ScheduleStatus.hpp"
#include <string>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Day Structure
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        struct Day {
            std::string name; 
            Hour hours[24];

            /*
             * ---------------------------------------------------------------------------------------- 
             * Day Constructors
             * ---------------------------------------------------------------------------------------- 
             */
            Day() {}
            Day(const std::string day_name) : name(day_name) {
                for (int i = 0; i < 24; i++) {
                    hours[i].first_half_hour.selected_status = ScheduleStatus::NotSelected;
                    hours[i].second_half_hour.selected_status = ScheduleStatus::NotSelected;
                }
            }
        };
    }
}

#endif // DAY_H

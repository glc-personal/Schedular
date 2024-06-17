#include "TmToDayOfTheWeek.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * TmToDayOfTheWeek
 *  Summary: Convert ctime tm struct to day of the week.
 *
 *  Input: ctime tm struct
 *  Output: Day of the week
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Utilities {
    
        std::string TmToDayOfTheWeek(std::tm tm) {
            const char* days_of_the_week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
            // Get the days since Sunday. 
            int days_since_sunday = tm.tm_wday;
            return days_of_the_week[days_since_sunday];
        }
    }
}

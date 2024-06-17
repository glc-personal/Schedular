#ifndef TMTODAYOFTHEWEEK_H
#define TMTODAYOFTHEWEEK_H

#include <ctime>
#include <string>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * TmToDayOfTheWeek
 *  Summary: Convert a ctime tm structure to a day of the week.
 *
 *  Input: ctime tm struct
 *  Output: Day of the week
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Utilities {
    
        std::string TmToDayOfTheWeek(std::tm tm);
    }
}

#endif // TMTODAYOFTHEWEEK_H

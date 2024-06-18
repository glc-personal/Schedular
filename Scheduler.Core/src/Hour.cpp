#include "Hour.hpp"
#include <iostream>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Hour
 *  Summary: Collection of four quarter hours.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        /*
         * ---------------------------------------------------------------------------------------- 
         * Hour Constructor
         * ---------------------------------------------------------------------------------------- 
         */
        Hour::Hour() {
            // Initialize the four quarter hours.
            for (int i = 0; i < 4; i++) {
                quarter_hours.push_back(QuarterHour());
            }
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * Hour Deconstructor
         * ---------------------------------------------------------------------------------------- 
         */
        Hour::~Hour() {}

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetQuarterHour
         *  Summary: Get the nth quarter hour.
         * 
         *  Input: The nth quarter hour integer value.
         *  Output: The nth Quarter Hour.
         * ---------------------------------------------------------------------------------------- 
         */
        QuarterHour& Hour::GetQuarterHour(int nth_quarter_hour) {
            return quarter_hours[nth_quarter_hour-1];
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetAllQuarterHours
         *  Summary: Get all quarter hours.
         * 
         *  Input:
         *  Output: All Quarter Hours.
         * ---------------------------------------------------------------------------------------- 
         */
        std::vector< std::reference_wrapper<QuarterHour> > Hour::GetAllQuarterHours() {
            std::vector< std::reference_wrapper<QuarterHour> > all;
            for (int i = 0; i < 4; i++) {
                all.push_back(std::ref(quarter_hours[i]));
            }
            return all;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * GetRangeOfQuarterHours
         *  Summary: Get n quarter hours from the nth quarter hour.
         * 
         *  Input: The number of quarter hours in the range from the nth quarter hour integer value.
         *  Output: N Quarter Hours from the nth Quarter Hour.
         * ---------------------------------------------------------------------------------------- 
         */
        std::vector< std::reference_wrapper<QuarterHour> > Hour::GetRangeOfQuarterHours(int n_quarter_hours, 
            int nth_quarter_hour) {
            // Clip the number of quarter hours returned if necessary.
            if (n_quarter_hours + nth_quarter_hour > 4) {
                n_quarter_hours = 4 - nth_quarter_hour;
            }
            std::vector< std::reference_wrapper<QuarterHour> > range;
            range.reserve(n_quarter_hours);
            for (int i = 0; i < n_quarter_hours; i++) {
                range.push_back(std::ref(quarter_hours[i+nth_quarter_hour-1]));
            }
            return range;
        }

    }
}

#ifndef HOUR_H
#define HOUR_H

#include "QuarterHour.hpp"
#include <vector>
#include <functional>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Hour 
 *  Summary: Collection of four quarter hours.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        class Hour {
        public:
            /*
             * ---------------------------------------------------------------------------------------- 
             * Variables
             * ---------------------------------------------------------------------------------------- 
             */
            std::vector<QuarterHour> quarter_hours;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Hour Constructor
             * ---------------------------------------------------------------------------------------- 
             */
            Hour();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Hour Deconstructor
             * ---------------------------------------------------------------------------------------- 
             */
            ~Hour();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get Methods
             * ---------------------------------------------------------------------------------------- 
             */
            QuarterHour& GetQuarterHour(int nth_quarter_hour);
            std::vector< std::reference_wrapper<QuarterHour> > GetAllQuarterHours();
            std::vector< std::reference_wrapper<QuarterHour> > GetRangeOfQuarterHours(int n_quarter_hours, int nth_quarter_hour);
 
            /*
             * ---------------------------------------------------------------------------------------- 
             * Set Methods
             * ---------------------------------------------------------------------------------------- 
             */

        private:
        };
    }
}

#endif // HOUR_H

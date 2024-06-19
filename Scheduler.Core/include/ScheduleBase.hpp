#ifndef SCHEDULEBASE_H
#define SCHEDULEBASE_H

#include "Day.hpp"
#include "ScheduleStatus.hpp"
#include <vector>
#include <functional>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Schedule Base
 *  Summary: N days worth of booked and not booked time.
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Core {

        class ScheduleBase {
        public:
            /*
             * ---------------------------------------------------------------------------------------- 
             * ScheduleBase Constructor
             * ---------------------------------------------------------------------------------------- 
             */
            ScheduleBase();
            ScheduleBase(int n_days, const Day& start_day);

            /*
             * ---------------------------------------------------------------------------------------- 
             * ScheduleBase Deconstructor
             * ---------------------------------------------------------------------------------------- 
             */
            virtual ~ScheduleBase();

            /*
             * ---------------------------------------------------------------------------------------- 
             * Get Methods
             * ---------------------------------------------------------------------------------------- 
             */
            int GetDayCount() const;
            Day& GetDay(int nth_day);
            std::vector< std::reference_wrapper<Day> > GetDays();
            Hour& GetHourFromDay(int nth_hour, Day& day);
            std::vector< std::reference_wrapper<Hour> > GetHoursFromDay(Day& day);
            ScheduleStatus GetSubmissionStatus() const;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Set Methods
             * ---------------------------------------------------------------------------------------- 
             */
            void SetSubmissionStatus(ScheduleStatus status);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Book and Unbook Methods
             * ---------------------------------------------------------------------------------------- 
             */
            //ScheduleStatus BookQuarterHour();
            ScheduleStatus BookHour(Hour& hour);
            //ScheduleStatus BookRangeOfHours(std::vector< std::reference_wrapper<Hour> > hours);

            /*
             * ---------------------------------------------------------------------------------------- 
             * Print Methods
             * ---------------------------------------------------------------------------------------- 
             */
            void PrintAsString();

        private:
            /*
             * ---------------------------------------------------------------------------------------- 
             * 
             * ---------------------------------------------------------------------------------------- 
             */
            std::vector<Day> days;

            /*
             * ---------------------------------------------------------------------------------------- 
             * Flags
             * ---------------------------------------------------------------------------------------- 
             */
            ScheduleStatus submission_status;
        };
    }
}

#endif // SCHEDULEBASE_H

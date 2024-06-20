#include "ScheduleBase.hpp"
#include "Day.hpp"
#include "EnumHelper.hpp"
#include <iostream>
#include <functional>

namespace Scheduler {
    namespace Core {

        /*
         * ----------------------------------------------------------------------------------------
         * ScheduleBase Constructor
         * ----------------------------------------------------------------------------------------
         */
        ScheduleBase::ScheduleBase() {}
        ScheduleBase::ScheduleBase(int n_days, const Day& start_day) {
            // Initialize the days of the week.
            days.push_back(start_day);
            for (int i = 1; i < n_days; i++) {
                days.push_back(days[0] + i);
            }
        }

        /*
         * ----------------------------------------------------------------------------------------
         * ScheduleBase Deconstructor
         * ----------------------------------------------------------------------------------------
         */
        ScheduleBase::~ScheduleBase() {}

        /*
         * ----------------------------------------------------------------------------------------
         * GetDayCount
         *  Summary: Obtain the number of days in the schedule.
         *
         *  Input:
         *  Output: Number of days in the schedule.
         * ----------------------------------------------------------------------------------------
         */
        int ScheduleBase::GetDayCount() const {
            return days.size();
        }

        /*
         * ----------------------------------------------------------------------------------------
         * GetDay
         *  Summary: Obtain the nth day in the schedule.
         *
         *  Input:
         *  Output: Nth day in the schedule.
         * ----------------------------------------------------------------------------------------
         */
        Day& ScheduleBase::GetDay(int nth_day) {
            return days[nth_day-1];
        }

        /*
         * ----------------------------------------------------------------------------------------
         * GetDays
         *  Summary: Obtain the days in the schedule.
         *
         *  Input:
         *  Output: Days in the schedule.
         * ----------------------------------------------------------------------------------------
         */
        std::vector< std::reference_wrapper<Day> > ScheduleBase::GetDays() {
            std::vector< std::reference_wrapper<Day> > days_reference;
            days_reference.reserve(days.size());
            for (int i = 0; i < days.size(); i++) {
                days_reference[i] = days[i];
            }
            return days_reference;
        }

        /*
         * ----------------------------------------------------------------------------------------
         * GetHourFromDay
         *  Summary: Obtain the nth hour in the schedule from a day.
         *
         *  Input:
         *  Output: Nth hour in the schedule from a day.
         * ----------------------------------------------------------------------------------------
         */
        Hour& ScheduleBase::GetHourFromDay(int nth_hour, Day& day) {
            return day.GetHour(nth_hour);
        }

        /*
         * ----------------------------------------------------------------------------------------
         * GetHoursFromDay
         *  Summary: Obtain references to the hours in the schedule from a day.
         *
         *  Input:
         *  Output: Reference to all the hours in the schedule from a day.
         * ----------------------------------------------------------------------------------------
         */
        std::vector< std::reference_wrapper<Hour> > ScheduleBase::GetHoursFromDay(Day& day) {
            std::vector< std::reference_wrapper<Hour> > hours;
            for (int i = 0; i < 24; i++) {
                hours.push_back(day.GetHour(i+1));
            }
            return hours;
        }

        /*
         * ----------------------------------------------------------------------------------------
         * GetSubmissionStatus
         *  Summary: Obtain the submission status of the Schedule
         *
         *  Input:
         *  Output: ScheduleStatus for the submission status.
         * ----------------------------------------------------------------------------------------
         */
        ScheduleStatus ScheduleBase::GetSubmissionStatus() const {
            return submission_status;
        }

        /*
         * ----------------------------------------------------------------------------------------
         * SetSubmissionStatus
         *  Summary: Set the submission status of the Schedule
         *
         *  Input: Submission status for the Schedule
         *  Output: 
         * ----------------------------------------------------------------------------------------
         */
        void ScheduleBase::SetSubmissionStatus(ScheduleStatus status) {
            submission_status = status;
        }

        /*
         * ----------------------------------------------------------------------------------------
         * BookHour
         *  Summary: Book a single hour of the schedule.
         *
         *  Input: The nth hour to be booked on the nth day.
         *  Output: ScheduleStatus
         * ----------------------------------------------------------------------------------------
         */
        ScheduleStatus ScheduleBase::BookHour(Hour& hour) {
            std::vector< std::reference_wrapper<QuarterHour> > qhs = hour.GetAllQuarterHours();
            for (QuarterHour& qh : qhs) {
                qh.SetAsBooked();
            }
            return ScheduleStatus::Scheduled;
        }

        /*
         * ----------------------------------------------------------------------------------------
         * 
         *  Summary:
         *
         *  Input: 
         *  Output: 
         * ----------------------------------------------------------------------------------------
         */

    }
}

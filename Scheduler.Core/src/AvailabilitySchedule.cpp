#include "AvailabilitySchedule.hpp"
#include <iostream>
#include "EnumHelper.hpp"

/*
 * ---------------------------------------------------------------------------------------------------- 
 * AvailabilitySchedule
 *  Summary: Schedule for time available on a per week basis.
 * ---------------------------------------------------------------------------------------------------- 
 */

namespace Scheduler {
    namespace Core {

        /*
         * ---------------------------------------------------------------------------------------- 
         * AvailabilitySchedule Constructor
         * ---------------------------------------------------------------------------------------- 
         */
        AvailabilitySchedule::AvailabilitySchedule() : ScheduleBase() {}
        AvailabilitySchedule::AvailabilitySchedule(const Day& first_day_of_the_week) 
            : ScheduleBase(7, first_day_of_the_week) {
            week = Week(first_day_of_the_week);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * AvailabilitySchedule Destructor
         * ---------------------------------------------------------------------------------------- 
         */
        AvailabilitySchedule::~AvailabilitySchedule() {}


        /*
         * ---------------------------------------------------------------------------------------- 
         * GetWeek
         *  Summary: Get the week this schedule is for.
         *
         *  Input:
         *  Output: Week the schedule is for.
         * ---------------------------------------------------------------------------------------- 
         */
        Week AvailabilitySchedule::GetWeek() {
            return week;
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * SetFirstDay 
         *  Summary: Set the week this schedule is for based on the first day.
         *
         *  Input: First day for the schedule
         *  Output: 
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::SetFirstDay(const Day& day) {
            week = Week(day);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAvailability
         *  Summary: Mark a quarter hour in the schedule's availability.
         *
         *  Input: A reference to the quarter hour and the AvailabilityStatus to be marked for it.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAvailability(QuarterHour& qh, 
            AvailabilityStatus status) {
            qh.SetAvailabilityStatus(status);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAsAvailable
         *  Summary: Mark a quarter hour in the schedule as available.
         *
         *  Input: A reference to the quarter hour.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAsAvailable(QuarterHour& qh) {
            qh.SetAsAvailable();
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAsNotAvailable
         *  Summary: Mark a quarter hour in the schedule as not available.
         *
         *  Input: A reference to the quarter hour.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAsNotAvailable(QuarterHour& qh) {
            qh.SetAvailabilityStatus(AvailabilityStatus::NotAvailable);
        }

        /*
         * ---------------------------------------------------------------------------------------- 
         * MarkQuarterHourAsPotentiallyAvailable
         *  Summary: Mark a quarter hour in the schedule as potentially available.
         *
         *  Input: A reference to the quarter hour.
         *  Output:
         * ---------------------------------------------------------------------------------------- 
         */
        void AvailabilitySchedule::MarkQuarterHourAsPotentiallyAvailable(QuarterHour& qh) {
            qh.SetAvailabilityStatus(AvailabilityStatus::PotentiallyAvailable);
        }

        /*
         * ----------------------------------------------------------------------------------------
         * PrintAsString
         *  Summary: Print the Schedule as a string.
         *
         *  Input: 
         *  Output: 
         * ----------------------------------------------------------------------------------------
         */
        void AvailabilitySchedule::PrintAsString() {
            //std::vector<Day> days = week.GetDaysCopy();
            //std::vector<Day> days = this.GetDays();
            //std::vector< std::reference_wrapper<Day> > days = week.GetDays();
            for (Day& day : days) {
                std::cout << "Day: "<< day.GetDayOfTheWeek() << " ("
                    << day.GetDateAsString() << ")" << std::endl;
                std::vector< std::reference_wrapper<Hour> > hours = day.GetAllHours();
                for (int i = 0; i < 24; i++) {
                    std::cout << "\tHour: " << std::to_string(i) << ":00:00" << std::endl;
                    int j = 0;
                    for (QuarterHour& qh : hours[i].get().GetAllQuarterHours()) {
                        std::cout << "\t\t" << std::to_string(i) << ":" 
                            << std::to_string(j * 15) << ":00" << " - " << std::to_string(i) 
                            << ":" << std::to_string((j+1) * 15) << ":00";
                        j++;
                        if (qh.GetAvailabilityStatus() == AvailabilityStatus::Available) {
                            std::cout << " - ||||||||||||||||||||||||||||||||||||||| - Available";
                        }
                        else if (qh.GetAvailabilityStatus() == AvailabilityStatus::PotentiallyAvailable) {
                            std::cout << " - ||||||||||||||||||||||||||||||||||||||| - Potentially Available";
                        }
                        else if (qh.GetAvailabilityStatus() == AvailabilityStatus::NotAvailable) {
                            std::cout << " -                                         - Not Available";
                        }
                        std::cout << "\n";
                    }
                }
            }

        }
    }
}

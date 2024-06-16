#include "ScheduleBase.hpp"

namespace Scheduler {
    namespace Core {

        /*
         * ----------------------------------------------------------------------------------------
         * ScheduleBase Constructor
         * ----------------------------------------------------------------------------------------
         */
        ScheduleBase::ScheduleBase() {
            // Initialize the days of the week.
            days[0] = Day("Monday");
            days[1] = Day("Tuesday");
            days[2] = Day("Wednesday");
            days[3] = Day("Thursday");
            days[4] = Day("Friday");
            days[5] = Day("Saturday");
            days[6] = Day("Sunday");
        }

        /*
         * ----------------------------------------------------------------------------------------
         * ScheduleBase Deconstructor
         * ----------------------------------------------------------------------------------------
         */
        ScheduleBase::~ScheduleBase() {}

        /*
         * ----------------------------------------------------------------------------------------
         * getSubmissionStatus
         *  Summary: Obtain the submission status of the Schedule
         *
         *  Input:
         *  Output: ScheduleStatus for the submission status.
         * ----------------------------------------------------------------------------------------
         */
        ScheduleStatus ScheduleBase::getSubmissionStatus() const {
            return submission_status;
        }

        /*
         * ----------------------------------------------------------------------------------------
         * setSubmissionStatus
         *  Summary: Set the submission status of the Schedule
         *
         *  Input: Submission status for the Schedule
         *  Output: 
         * ----------------------------------------------------------------------------------------
         */
        void ScheduleBase::setSubmissionStatus(ScheduleStatus status) {
            submission_status = status;
        }
    }
}

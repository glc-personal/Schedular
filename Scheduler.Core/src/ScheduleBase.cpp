#include "ScheduleBase.hpp"

namespace Scheduler {
    namespace Core {

        /*
         * ----------------------------------------------------------------------------------------
         * ScheduleBase Constructor
         * ----------------------------------------------------------------------------------------
         */
        ScheduleBase::ScheduleBase(int n_days) {
            // Initialize the days of the week.
            days = new Day[n_days];
        }

        /*
         * ----------------------------------------------------------------------------------------
         * ScheduleBase Deconstructor
         * ----------------------------------------------------------------------------------------
         */
        ScheduleBase::~ScheduleBase() {
            delete[] days;
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
    }
}

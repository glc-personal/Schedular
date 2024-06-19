#ifndef ENUMHELPER_H
#define ENUMHELPER_H

#include "UserStatus.hpp"
#include "ScheduleStatus.hpp"
#include "BookedStatus.hpp"
#include "AvailabilityStatus.hpp"
#include <string>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Enum Helper 
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Utilities {

        class EnumHelper {
        public:
            /*
             * ----------------------------------------------------------------------------------------
             * To String conversion
             * ----------------------------------------------------------------------------------------
             */
            template<typename T>
            static std::string ToString(T enumValue);
        private:
        };

        /*
         * --------------------------------------------------------------------------------------------
         * To String Methods
         * --------------------------------------------------------------------------------------------
         */
        template <>
        std::string EnumHelper::ToString(Scheduler::Core::UserStatus status);

        template <>
        std::string EnumHelper::ToString(Scheduler::Core::ScheduleStatus status);

        template <>
        std::string EnumHelper::ToString(Scheduler::Core::BookedStatus status);

        template<>
        std::string EnumHelper::ToString(Scheduler::Core::AvailabilityStatus status);
    }
}

#endif // ENUMHELPER_H

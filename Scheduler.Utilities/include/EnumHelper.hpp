#ifndef ENUMHELPER_H
#define ENUMHELPER_H

#include "UserStatus.hpp"
#include "ScheduleStatus.hpp"
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
            static std::string toString(T enumValue);
        private:
        };

        /*
         * --------------------------------------------------------------------------------------------
         * To String Methods
         * --------------------------------------------------------------------------------------------
         */
        template <>
        std::string EnumHelper::toString(Scheduler::Core::UserStatus status);

        template <>
        std::string EnumHelper::toString(Scheduler::Core::ScheduleStatus status);
    }
}

#endif // ENUMHELPER_H

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
namespace Schedular {
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
        std::string EnumHelper::toString(Schedular::Core::UserStatus status);

        template <>
        std::string EnumHelper::toString(Schedular::Core::ScheduleStatus status);
    }
}

#endif // ENUMHELPER_H

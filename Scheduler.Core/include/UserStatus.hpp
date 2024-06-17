#ifndef USERSTATUS_H
#define USERSTATUS_H

/*
 * ---------------------------------------------------------------------------------------------------- 
 * User Status Enumeration
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Scheduler {
    namespace Core {

        enum class UserStatus {
            /*
             * ---------------------------------------------------------------------------------------- 
             * User existance
             * ---------------------------------------------------------------------------------------- 
             */
            DoesNotExist,
            Exists,

            /*
             * ---------------------------------------------------------------------------------------- 
             * User logged in
             * ---------------------------------------------------------------------------------------- 
             */
            LoggedIn,
            LoggedOut,
        };
    }
}

#endif // USERSTATUS_H
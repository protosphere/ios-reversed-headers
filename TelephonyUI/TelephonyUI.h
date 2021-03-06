/*
 * TelephonyUI header file.
 */

#ifndef TELEPHONYUI_H_
#define TELEPHONYUI_H_

#include "CoreTelephony/CTCall.h"
#include <CoreFoundation/CoreFoundation.h>

#if __cplusplus
extern "C" {
#endif

#pragma mark - API

    /*
     * Use 0 for __unknown0.
     */

    CTCallRef TPGetDisplayedCallFromCalls(int __unknown0);

#if __cplusplus
}
#endif

#endif /* TELEPHONYUI_H_ */

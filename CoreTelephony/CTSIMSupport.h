/*
 * CoreTelephony SIM support.
 */

#ifndef CTSIMSUPPORT_H_
#define CTSIMSUPPORT_H_

#include "CoreHeaders.h"

__BEGIN_DECLS

#pragma mark - API

typedef CFStringRef CTSIMStatus;

extern CTSIMStatus kCTSIMSupportSIMStatusBlacklisted;
extern CTSIMStatus kCTSIMSupportSIMStatusChangeNotification;
extern CTSIMStatus kCTSIMSupportSIMStatusCorporateLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusFixedDialingLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusMemoryFailure;
extern CTSIMStatus kCTSIMSupportSIMStatusNetworkLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusNotInserted;
extern CTSIMStatus kCTSIMSupportSIMStatusNotReady;
extern CTSIMStatus kCTSIMSupportSIMStatusOperatorLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusOperatorSubsetLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusPINLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusPUKLocked;
extern CTSIMStatus kCTSIMSupportSIMStatusReady;
extern CTSIMStatus kCTSIMSupportSIMStatusServiceProviderLocked;

CTSIMStatus CTSIMSupportGetSIMStatus();

CFStringRef CTSIMSupportCopyMobileSubscriberIdentity(CFAllocatorRef allocator);
CFStringRef CTSIMSupportCopyMobileSubscriberCountryCode(CFAllocatorRef allocator);
CFStringRef CTSIMSupportCopyMobileSubscriberNetworkCode(CFAllocatorRef allocator);

/* For use with the CoreTelephony notification system. */
extern CFStringRef kCTSIMSupportSIMStatusChangeNotification;

__END_DECLS

#endif /* CTSIMSUPPORT_H_ */
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDataDetector, NSNumberFormatter;

@interface EKEventDescriptionGenerator : NSObject {
    NSDataDetector *_addressDetector;
    struct __CFDateFormatter { } *_dateFormatter;
    int _meCardID;
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (void)_addressBookDidChange:(id)arg1;
- (id)_addressDetector;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (bool)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_arrayHasAfternoonEvents:(id)arg1;
- (bool)_arrayHasMorningEvents:(id)arg1;
- (id)_attendeesForEvent:(id)arg1;
- (bool)_doesEventStartEarly:(id)arg1;
- (bool)_eventIsAlreadyLate:(id)arg1;
- (int)_fetchIdentifierForMeCard;
- (id)_firstNameForMeCard;
- (int)_identifierForMeCard;
- (id)_identifiersForAllCardsLinkedToMeCard;
- (bool)_isDateInWeekend:(id)arg1;
- (id)_locationStringForEvent:(id)arg1;
- (id)_nameForPersonWithIdentifier:(int)arg1;
- (id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(bool)arg2;
- (id)_noonDateForEvents:(id)arg1;
- (bool)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(bool)arg2;
- (bool)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1;
- (id)_randomNumber;
- (struct __CFDateFormatter { }*)_sharedDateFormatter;
- (id)_sharedNumberFormatter;
- (bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(bool)arg2 useExplicitTimes:(bool)arg3 followingComma:(bool)arg4;
- (void)dealloc;
- (id)init;
- (id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1;
- (id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(bool)arg2;
- (id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTokenizer : NSObject {
    int  _cursor;
    NSData * _data;
    const char * _datastring;
    int  _expectedNextTokenType;
    int  _length;
    int  _logCount;
    BOOL  _printedICS;
    char * _token;
    int  _tokenType;
}

@property int logCount;
@property BOOL printedICS;

- (void).cxx_destruct;
- (BOOL)consumeEOL;
- (BOOL)consumeEscaped:(const char *)arg1;
- (BOOL)consumeFolding;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropName;
- (void)consumePropValue;
- (void)consumeWhiteSpace;
- (char *)currentToken;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithData:(id)arg1;
- (int)logCount;
- (char *)nextToken;
- (BOOL)printedICS;
- (void)setLogCount:(int)arg1;
- (void)setPrintedICS:(BOOL)arg1;
- (int)tokenType;

@end

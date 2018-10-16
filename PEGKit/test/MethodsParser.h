#import <PEGKit/PKParser.h>

enum {
    METHODS_TOKEN_KIND_INT = 14,
    METHODS_TOKEN_KIND_CLOSE_CURLY = 15,
    METHODS_TOKEN_KIND_COMMA = 16,
    METHODS_TOKEN_KIND_VOID = 17,
    METHODS_TOKEN_KIND_OPEN_PAREN = 18,
    METHODS_TOKEN_KIND_OPEN_CURLY = 19,
    METHODS_TOKEN_KIND_CLOSE_PAREN = 20,
    METHODS_TOKEN_KIND_SEMI_COLON = 21,
};

@interface MethodsParser : PKParser

@end


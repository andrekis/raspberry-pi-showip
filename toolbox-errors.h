
#ifndef __C_TOOLBOX_ERRORS_H__
#define __C_TOOLBOX_ERRORS_H__

#define TOOLBOX_ERROR_MALLOC -999
#define TOOLBOX_ERROR_CANNOT_DUPLICATE_STRING -998
#define TOOLBOX_ERROR_NOT_INITIALIZED -555
#define TOOLBOX_ERROR_NOT_USING_CORRECTLY -554
#define TOOLBOX_ERROR_MD5_ENCRYPT_ERROR -553
#define TOOLBOX_ERROR_BUFFER_TOO_SMALL -552
#define TOOLBOX_ERROR_NOT_INITIALIZED_OR_GOT_CORRUPTED -551
#define TOOLBOX_ERROR_ALREADY_INITIALIZED -550
#define TOOLBOX_ERROR_REMOTELOGIN_TIMEOUT -549
#define TOOLBOX_ERROR_MUTEX_LOCK_FAILED -548
#define TOOLBOX_ERROR_LINKEDLIST_ELEMENT_WAS_DELETED -547
#define TOOLBOX_ERROR_TERMINATED -546
#define TOOLBOX_ERROR_ALREADY_EXISTS -545
#define TOOLBOX_ERROR_GOT_CORRUPTED -544
#define TOOLBOX_ERROR_WRITING_DISK_FULL -543
#define TOOLBOX_ERROR_NOT_SUPPORTED -542
#define TOOLBOX_ERROR_ENDIANNESS_NOT_SUPPORTED -541
#define TOOLBOX_ERROR_NOT_ENOUGH_MEMORY_IN_DESIGN -540
#define TOOLBOX_ERROR_OUT_OF_RANGE -500
#define TOOLBOX_ERROR_CANNOT_ADD_CHAR_ARRAY_ROW -449
#define TOOLBOX_ERROR_CANNOT_CREATE_SOCKET -448
#define TOOLBOX_ERROR_SOCKET_SEND -447
#define TOOLBOX_ERROR_SOCKET_HANDLE_IS_NULL -446
#define TOOLBOX_ERROR_YOU_PASSED_AN_EMPTY_ARRAY -445
#define TOOLBOX_OVERFLOW_OF_SOME_KIND -444
#define TOOLBOX_ERROR_YOU_PASSED_A_FILENAME_TOO_BIG -443
#define TOOLBOX_ERROR_YOU_PASSED_A_STRING_TOO_BIG -442
#define TOOLBOX_ERROR_YOU_PASSED_A_BUFFER_TOO_SMALL -441
#define TOOLBOX_ERROR_FEATURE_NOT_IMPLEMENTED -333
#define TOOLBOX_ERROR_CANNOT_OPEN_FILE -300
#define TOOLBOX_ERROR_INTERNAL_USAGE_PROBLEM_NULLPOINTER -230
#define TOOLBOX_ERROR_INTERNAL_USAGE_PROBLEM_OVERFLOW -229
#define TOOLBOX_ERROR_INTERNAL_DESIGN_PROBLEM -228
#define TOOLBOX_ERROR_INTERNAL_USAGE_EMPTY_ARRAY -227
#define TOOLBOX_ERROR_INTERNAL_USAGE_CHARARRAY_FAILED -226
#define TOOLBOX_ERROR_INTERNAL_USAGE_LINEPARSER_FAILED -225
#define TOOLBOX_WARNING_CONTINUE_READING -199
#define TOOLBOX_IS_CALLER_ERROR(a) ( a < 0 && a > -10 )
#define TOOLBOX_IS_FUNCTION_SPECIFIC_ERROR(a) ( a < -9 && a > -100 )
#define TOOLBOX_IS_TOOLBOX_SPECIFIC_ERROR(a) ( a < -99 && a > -1000 )

#endif


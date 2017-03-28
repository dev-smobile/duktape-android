

#if defined(__cplusplus)
extern "C" {
#endif

duk_bool_t android__date_parse_string(duk_context* ctx, const char* str);
duk_int_t android__get_local_tzoffset(duk_double_t time);

#if defined(__cplusplus)
}
#endif

#define DUK_USE_DATE_GET_LOCAL_TZOFFSET android__get_local_tzoffset
#define DUK_USE_DATE_PARSE_STRING android__date_parse_string

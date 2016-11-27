#define AuthNameMacro(x) author=$STR_FinMod_Author; displayname=$STR_##x; descriptionshort=$STR_desc_##x; displaynameshort=$STR_s_##x;
#define LibraryMacro(x) \
class Library \
{ \
	libTextDesc = $STR_lib_##x; \
};
#ifndef DLL_EXPORT
#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#define DLL_CALL __cdecl
#else
#define DLL_EXPORT __attribute__ ((visibility ("default")))
#endif
#endif


#include <string>


extern "C" {
    DLL_EXPORT const char* DLL_CALL hello_callback(const char*);
}


static std::string result;


const char* hello_callback(const char* name)
{
    result =
        "{\r\n"
        "   arg = 'Hello, " + std::string(name) + "!';\r\n"
        "   callback(arg);\r\n"
        "}";
    return result.c_str();
}

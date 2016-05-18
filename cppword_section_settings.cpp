#include "cppword_section_settings.h"

CppWord_Section_Settings &CppWord_Section_Settings::null()
{
    static CppWord_Section_Settings nullSettings;

    return nullSettings;
}

CppWord_Section_Settings::CppWord_Section_Settings()
{
    _isValid = false;
}

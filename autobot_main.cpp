#include "autobot_main.h"

int main() {
    wxString tempstr;
    tempstr=wxT("this is test");
    printf(tempstr.mb_str());
    //char* chartemp = "Native String";

    //wxString* teststr = new wxString(chartemp,wxConvUTF8);
    //printf(teststr->mb_str());

    XmlBase testconfig(CONFIG_XML_PATH);
    testconfig.setData("test", "this is test");
}

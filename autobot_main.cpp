#include "autobot_main.h"

int main()
{

 //char* chartemp = "Native String";

    //wxString* teststr = new wxString(chartemp,wxConvUTF8);
    //printf(teststr->mb_str());

    XmlBase * tesmp;
    tesmp = new XmlBase();
    if(tesmp->init("config.xml"))
    {
        printf("ok");
    }
    else
    {
        printf("fail");
    }
    //testconfig.setData("test", "this is test");
}

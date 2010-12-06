#include "autobot_main.h"

int main()
{

 //char* chartemp = "Native String";

    //wxString* teststr = new wxString(chartemp,wxConvUTF8);
    //printf(teststr->mb_str());

    XmlBase * tesmp;
    tesmp = new XmlBase();
    if(tesmp->init("config.xml", "configration"))
    {
        printf("ok");

        tesmp->setElementText(tesmp->getElement("test/temp", 1), "testmassgae");
        tesmp->setElementAttribute(tesmp->getElement("ookd/meaasg"), "name", "2010");
        tesmp->saveXmlFile();
        //tesmp->setElementText(tesmp->getElement("detail/ipaddress"), "test message");
    }
    else
    {
        printf("fail");
    }
    //testconfig.setData("test", "this is test");
}

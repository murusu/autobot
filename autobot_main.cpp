#include "autobot_main.h"

int main()
{

 //char* chartemp = "Native String";

    //wxString* teststr = new wxString(chartemp,wxConvUTF8);
    //printf(teststr->mb_str());

    //XmlBase * tesmp;
    //tesmp = new XmlBase();
    //ConfigXml* tempconfig;
    //tempconfig = new ConfigXml();
    //tempconfig->initConfigXml();

    TaskXml* taskfile;
    taskfile = new TaskXml();
    taskfile->initTaskXml("task_7e6gj82.xml");

    //printf("software version is %s", tempconfig->getVersion());
    //if(tesmp->init("config.xml", "configration"))
    //{
        //printf("ok");

        //tesmp->setElementText(tesmp->getElement("oktest/temp", 2, true), "this is a little test");
        //tesmp->setElementAttribute(tesmp->getElement("ookd/meaasg", 3), "name", "9898");
        //tesmp->saveXmlFile();
        //printf("%s", tesmp->getElementText(tesmp->getElement("/oktest/temp/", 2)));
        //printf("number of element is %d", tesmp->getElementNum("/test/temp/"));
    //}
    //else
    //{
        //printf("fail");
    //}
    //testconfig.setData("test", "this is test");
}

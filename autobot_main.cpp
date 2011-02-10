#include "autobot_main.h"

//#include <wx/msgdlg.h>



IMPLEMENT_APP(AutoBotApp)

bool AutoBotApp::OnInit(void)
{
    m_checker       = NULL;
    m_locale        = NULL;
    m_appui         = NULL;
    m_taskManager   = NULL;

    const wxString name = wxString::Format(_("AutoBotApp-%s"), wxGetUserId().c_str());
    m_checker = new wxSingleInstanceChecker(name);

    if( m_checker->IsAnotherRunning() )
    {
        wxLogError(_("Another program instance is already running, aborting."));
        return false;
    }

    SetupLocale();

    m_appui = new AutoBotMainFrame(NULL);
    m_appui->Show(false);

    m_taskManager = new TaskManager();

    if( !m_taskManager->initTaskManager() )
    {
        wxLogError(_("Initialization fail, aborting."));
        return false;
    }

    m_taskManager->updateTaskList();
    return true;
}

int AutoBotApp::OnExit()
{
    if(m_checker)   delete m_checker;
    if(m_locale)    delete m_locale;
    if(m_taskManager) delete m_taskManager;
    return 0;
}

void AutoBotApp::SetupLocale()
{
    m_locale = new wxLocale();
    m_locale->Init();

    m_locale->AddCatalogLookupPathPrefix(wxT("./lng"));
    m_locale->AddCatalog(m_locale->GetCanonicalName());

    //wxMessageBox(m_locale->GetCanonicalName(), wxT("Confirm"), wxOK );
}

AutoBotMainFrame* AutoBotApp::getMainUI()
{
    return m_appui;
}

TaskManager* AutoBotApp::getTaskManager()
{
    return m_taskManager;
}

//#include <dir.h>

//int main()
//{

 //char* chartemp = "Native String";

    //wxString* teststr = new wxString(chartemp,wxConvUTF8);
    //printf(teststr->mb_str());

    //XmlBase * tesmp;
    //tesmp = new XmlBase();
    //ConfigXml* tempconfig;
    //tempconfig = new ConfigXml();
    //tempconfig->initConfigXml();
/*
    TaskXml* taskfile;
    taskfile = new TaskXml();
    if(!taskfile->initTaskXml("task_rooei3.xml")) printf("fail!");

    for(size_t index = 0; index < 1000; index++)
    {
        char ctime[6];
        sprintf(ctime, "%d", index);

        TiXmlString data = TiXmlString("This is action #") + TiXmlString(ctime);
        taskfile->addAction(data.c_str());
    }

    taskfile->commitData();
*/
    //taskfile->deleteAciton(2);


/*
    LogXml* logfile;
    logfile = new LogXml();
    if(!logfile->initLogXml("log_7e6gj82.xml")) printf("fail!");
    logfile->addLog("2010-12-08 17:25:21", "this is a log test");
    logfile->addLog("2010-12-12 08:54:05", "test! this is a test");
*/
    //mkdir("tempdir");
    //system("mkdir -p parent/child/grandson");

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
/*
    TaskManager* ptaskManager;
    ptaskManager = new TaskManager();
    ptaskManager->initTaskManager();
    while(true)
    {
    }
    */
/*
    BotTask* pbottask;
    pbottask = new BotTask();
    pbottask->initBotTask("11223");
    pbottask->setTaskName("test task");
    pbottask->setTaskTimerType("INTERVAL");
    pbottask->setTaskTimerTime("15");
    pbottask->updateLastRunDate();
    pbottask->commitData();
*/
//}

#ifndef XML_TASK_H_INCLUDED
#define XML_TASK_H_INCLUDED

#include <wx/filefn.h>
#include <wx/datetime.h>
#include "../common/xml_class.h"
#include "../core/global_value.h"

class TaskXml : public XmlBase
{
    public:
        TaskXml();
        ~TaskXml();

        bool initTaskXml(const char * pfilename);
        //void setTaskId(const char * pid);

        void addAction(const char * pcontent);
        void deleteAciton(size_t index);
        void modifyAction(size_t index, const char * pcontent);
        void commitData();

        const char* getTaskName();
        void setTaskName(const char* pname);
        //time_t      getLastRunDate();
        size_t getTaskTimerType();
        void setTaskTimerType(size_t ptimetype);

        size_t getTaskTimerTime();
        void setTaskTimerTime(const char* ptime);
        //void updateLastRunDate();
};

#endif // XML_TASK_H_INCLUDED

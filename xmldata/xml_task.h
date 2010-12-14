#ifndef XML_TASK_H_INCLUDED
#define XML_TASK_H_INCLUDED

#include <wx/filefn.h>
#include <wx/datetime.h>
#include "../common/global_value.h"
#include "../common/xml_class.h"

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
        time_t      getLastRunDate();
        const char* getTaskTimerType();
        const char* getTaskTimerTime();

        void setTaskName(const char* pname);
        void updateLastRunDate();
        void setTaskTimerType(const char* ptype);
        void setTaskTimerTime(const char* ptime);
};

#endif // XML_TASK_H_INCLUDED

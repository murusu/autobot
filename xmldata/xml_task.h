#ifndef XML_TASK_H_INCLUDED
#define XML_TASK_H_INCLUDED

#include "../common/global_value.h"
#include "../common/xml_class.h"

class TaskXml : public XmlBase
{
    public:
        TaskXml();
        ~TaskXml();

        bool initTaskXml(const char * pfilename);
        void setTaskId(const char * pid);

        void addAction(const char * pcontent);
        void deleteAciton(size_t index);
};

#endif // XML_TASK_H_INCLUDED

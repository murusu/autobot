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
};

#endif // XML_TASK_H_INCLUDED

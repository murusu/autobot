#ifndef XML_LOG_H_INCLUDED
#define XML_LOG_H_INCLUDED

#include "../common/global_value.h"
#include "../common/xml_class.h"

class LogXml : public XmlBase
{
    public:
        LogXml();
        ~LogXml();

        bool initLogXml(const char* pfilename);
        void addLog(const char* plogdate, const char* plogcontent);
};


#endif // XML_LOG_H_INCLUDED

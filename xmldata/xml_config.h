#ifndef XML_CONFIG_H_INCLUDED
#define XML_CONFIG_H_INCLUDED

#include "../common/global_value.h"
#include "../common/xml_class.h"

class ConfigXml : public XmlBase
{
    public:
        ConfigXml();
        ~ConfigXml();

        bool initConfigXml();
        const char* getVersion();

    private:
        void createDefaultConfig();
};

#endif // XML_CONFIG_H_INCLUDED

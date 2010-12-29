#ifndef XML_CONFIG_H_INCLUDED
#define XML_CONFIG_H_INCLUDED

#include "../common/xml_class.h"
#include "../core/global_value.h"

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

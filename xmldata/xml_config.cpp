#include "xml_config.h"

ConfigXml::ConfigXml():XmlBase()
{
}

ConfigXml::~ConfigXml()
{
}

bool ConfigXml::initConfigXml()
{
    if(!init(CONFIG_XML_PATH, CONFIG_XML_ROOT_NAME)) return false;

    if(!getElement("version")) createDefaultConfig();
    return true;
}

void ConfigXml::createDefaultConfig()
{
    setElementText(getElement("version", 0, true), CONFIG_VERSION);
    saveXmlFile();
}

const char* ConfigXml::getVersion()
{
    return getElementText(getElement("version"));
}


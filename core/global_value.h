#ifndef GLOBAL_VALUE_H_INCLUDED
#define GLOBAL_VALUE_H_INCLUDED

const char * const CONFIG_VERSION               = "0.10";
const char * const CONFIG_XML_NAME              = "config.xml";
const char * const CONFIG_XML_ROOT_NAME         = "configrations";

const char * const TASK_XML_PATH                = "tasks";
const char * const TASK_XML_ROOT_NAME           = "task";
const char * const LOG_XML_PATH                 = "logs";
const char * const LOG_XML_ROOT_NAME            = "logs";
const char * const LOG_XML_ITEM_NAME            = "log";
const char * const LOG_XML_ITEM_DATE            = "date";
const char * const LOG_XML_ITEM_CONTENT         = "content";

const char * const TASK_XML_ACTION              = "actions/action";
const char * const TASK_XML_ACTION_CONTENT      = "content";
const char * const TASK_XML_LAST_RUN_DATE       = "activity";
const char * const TASK_XML_TIMER               = "timer";
const char * const TASK_XML_NAME                = "name";
const char * const TASK_XML_TIMER_TYPE          = "type";
const char * const TASK_XML_TIMER_TIME          = "time";
const char * const TASK_XML_TIMER_PARAM         = "timer/param";

const size_t TASK_XML_PREFIX_LEN                = 5;
const size_t TASK_XML_NAME_LEN                  = 5;

//Task Timer Type
const size_t TIMMER_INTERVAL                    = 1;
const size_t TIMMER_SPECIFY                     = 2;
const size_t TIMMER_DAILY_INTERVAL              = 3;
const size_t TIMMER_WEEKLY_INTERVAL             = 4;
const size_t TIMMER_MONTHLY_INTERVAL            = 5;

const size_t TASK_WAITFORRUNING                 = 1;
const size_t TASK_RUNNING                       = 2;
const size_t TASK_STOP                          = 3;
const size_t TASK_WAITFORRETRY                  = 4;

//Task ACtion Type
const size_t ACTION_HTTP                        = 1;
const size_t ACTION_RUN_PROGRAM                 = 2;



#endif // GLOBAL_VALUE_H_INCLUDED

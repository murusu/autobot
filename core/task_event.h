#ifndef TASK_EVENT_H_INCLUDED
#define TASK_EVENT_H_INCLUDED

#include <wx/event.h>


class wxTaskEvent : public wxNotifyEvent
{
    public:
        wxTaskEvent(wxEventType commandType = wxEVT_NULL, int id = 0):
            wxNotifyEvent(commandType, id) {}
        wxTaskEvent(const wxTaskEvent& event):
            wxNotifyEvent(event) {}
        virtual wxEvent *Clone() const {
            return new wxTaskEvent(*this);
        }

    DECLARE_DYNAMIC_CLASS(wxTaskEvent);
};

typedef void (wxEvtHandler::*wxTaskEventFunction) (wxTaskEvent&);

BEGIN_DECLARE_EVENT_TYPES()
    DECLARE_EVENT_TYPE(wxEVT_TASK_START, 701)
    DECLARE_EVENT_TYPE(wxEVT_TASK_END, 702)
    DECLARE_EVENT_TYPE(wxEVT_TASK_ERROR, 703)
END_DECLARE_EVENT_TYPES()

#define EVT_TASK_START(fn) DECLARE_EVENT_TABLE_ENTRY( \
    wxEVT_TASK_START, 0, -1, (wxObjectEventFunction) \
    (wxEventFunction) (wxTaskEventFunction) & fn, \
    (wxObject *) NULL ),
#define EVT_TASK_END(fn) DECLARE_EVENT_TABLE_ENTRY( \
    wxEVT_TASK_END, 0, -1, (wxObjectEventFunction) \
    (wxEventFunction) (wxTaskEventFunction) & fn, \
    (wxObject *) NULL ),
#define EVT_TASK_ERROR(fn) DECLARE_EVENT_TABLE_ENTRY( \
    wxEVT_TASK_ERROR, 0, -1, (wxObjectEventFunction) \
    (wxEventFunction) (wxTaskEventFunction) & fn, \
    (wxObject *) NULL ),

#define wxTaskEventHandler(func) \
    (wxObjectEventFunction)(wxEventFunction)wxStaticCastEvent(wxTaskEventFunction, &func)


#endif // TASK_EVENT_H_INCLUDED

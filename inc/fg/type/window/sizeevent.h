#ifndef FG_TYPE_WINDOW_SIZEEVENT_H
#define FG_TYPE_WINDOW_SIZEEVENT_H

typedef struct FgWindowSizeEvent FgWindowSizeEvent;

typedef void( * FgWindowSizeEventHandler )(
    const FgWindowSizeEvent *
    , void *
);

#endif  // FG_TYPE_WINDOW_SIZEEVENT_H

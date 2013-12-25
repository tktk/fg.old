#ifndef FG_TYPE_WINDOW_CLOSEEVENT_H
#define FG_TYPE_WINDOW_CLOSEEVENT_H

typedef struct FgWindowCloseEvent FgWindowCloseEvent;

typedef void( * FgWindowCloseEventHandler )(
    const FgWindowCloseEvent *
    , void *
);

#endif  // FG_TYPE_WINDOW_CLOSEEVENT_H

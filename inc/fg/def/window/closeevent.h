#ifndef FG_DEF_WINDOW_CLOSEEVENT_H
#define FG_DEF_WINDOW_CLOSEEVENT_H

typedef struct FgWindowCloseEvent FgWindowCloseEvent;

typedef void( * FgWindowCloseEventHandler )(
    const FgWindowCloseEvent *
    , void *
);

#endif  // FG_DEF_WINDOW_CLOSEEVENT_H

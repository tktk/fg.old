#ifndef FG_TYPE_WINDOW_POSITIONEVENT_H
#define FG_TYPE_WINDOW_POSITIONEVENT_H

typedef struct FgWindowPositionEvent FgWindowPositionEvent;

typedef void( * FgWindowPositionEventHandler )(
    const FgWindowPositionEvent *
    , void *
);

#endif  // FG_TYPE_WINDOW_POSITIONEVENT_H

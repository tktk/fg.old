#ifndef FG_TYPE_WINDOW_MOUSEMOTIONEVENT_H
#define FG_TYPE_WINDOW_MOUSEMOTIONEVENT_H

typedef struct FgWindowMouseMotionEvent FgWindowMouseMotionEvent;

typedef void( * FgWindowMouseMotionEventHandler )(
    const FgWindowMouseMotionEvent *
    , void *
);

#endif  // FG_TYPE_WINDOW_MOUSEMOTIONEVENT_H

#ifndef FG_DEF_WINDOW_KEYEVENT_H
#define FG_DEF_WINDOW_KEYEVENT_H

typedef struct FgWindowKeyEvent FgWindowKeyEvent;

typedef void( * FgWindowKeyEventHandler )(
    const FgWindowKeyEvent *
    , void *
);

#endif  // FG_DEF_WINDOW_KEYEVENT_H

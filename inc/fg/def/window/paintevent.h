#ifndef FG_DEF_WINDOW_PAINTEVENT_H
#define FG_DEF_WINDOW_PAINTEVENT_H

typedef struct FgWindowPaintEvent FgWindowPaintEvent;

typedef void( * FgWindowPaintEventHandler )(
    const FgWindowPaintEvent *
    , void *
);

#endif  // FG_DEF_WINDOW_PAINTEVENT_H

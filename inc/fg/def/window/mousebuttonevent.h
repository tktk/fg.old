﻿#ifndef FG_DEF_WINDOW_MOUSEBUTTONEVENT_H
#define FG_DEF_WINDOW_MOUSEBUTTONEVENT_H

typedef struct FgWindowMouseButtonEvent FgWindowMouseButtonEvent;

typedef void( * FgWindowMouseButtonEventHandler )(
    const FgWindowMouseButtonEvent *
    , void *
);

#endif  // FG_DEF_WINDOW_MOUSEBUTTONEVENT_H

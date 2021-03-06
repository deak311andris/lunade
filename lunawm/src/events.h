#ifndef EVENTS_H
#define EVENTS_H
#include "wmanager.h"

void OnCreateNotify(WindowManager *, XCreateWindowEvent);
void OnDestroyNotify(WindowManager *, XDestroyWindowEvent);
void OnReparentNotify(WindowManager *, XReparentEvent);

void OnConfigureRequest(WindowManager *, XConfigureRequestEvent);
void OnMapRequest(WindowManager *, XMapRequestEvent);
void OnUnmapRequest(WindowManager *, XUnmapEvent);

#endif

#include "awtk.h"
#include "../common/navigator.h"

static ret_t on_quit(void* ctx, event_t* evt) {
  return tk_quit();
}

static ret_t on_open(void* ctx, event_t* evt) {
  navigator_to((const char*)ctx);

  return RET_OK;
}

ret_t home_page_init(widget_t* win, void* ctx) {
  widget_child_on(win, "open1", EVT_CLICK, on_open, "window1");
  widget_child_on(win, "open2", EVT_CLICK, on_open, "window2");
  widget_child_on(win, "quit", EVT_CLICK, on_quit, win);

  return RET_OK;
}

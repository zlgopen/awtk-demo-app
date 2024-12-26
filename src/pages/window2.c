#include "awtk.h"
#include "../common/navigator.h"

static ret_t on_close(void* ctx, event_t* evt) {
  return widget_close_window(WIDGET(ctx));
}

ret_t window2_init(widget_t* win, void* ctx) {
  widget_child_on(win, "close", EVT_CLICK, on_close, win);
  return RET_OK;
}

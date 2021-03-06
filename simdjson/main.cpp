#include <napi.h>
#include "bindings.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return simdjson::Init(env, exports);
}

NODE_API_MODULE(simdjson, InitAll)
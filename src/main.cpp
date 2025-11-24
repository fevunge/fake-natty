#include "crow/http_response.h"
#include "crow/json.h"
#include <optional>

#define CROW_MAIN
#include "crow.h"


int main() {
  crow::SimpleApp app;
  CROW_ROUTE(app, "/")([](){
    return "fevunge";
  });
  app.port(8080).multithreaded();
  return 0;
}

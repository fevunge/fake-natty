#include "crow/http_response.h"
#include "crow/json.h"
#include <optional>

#define CROW_MAIN
#include "crow.h"


int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")([](){
    auto page = crow::mustache::load("static/index.html");
    return page.render();
  });

  app.port(8080).multithreaded().run();

  return 0;
}

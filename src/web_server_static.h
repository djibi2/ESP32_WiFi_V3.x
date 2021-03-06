#ifndef _EMONESP_WEB_SERVER_STATIC_H
#define _EMONESP_WEB_SERVER_STATIC_H

#include <MongooseHttpServer.h>

bool web_static_handle(MongooseHttpServerRequest *request);

/*
class StaticFileWebHandler: public AsyncWebHandler
{
  private:
    bool _getFile(AsyncWebServerRequest *request, StaticFile **file = NULL);
  protected:
  public:
    StaticFileWebHandler();
    virtual bool canHandle(AsyncWebServerRequest *request) override final;
    virtual void handleRequest(AsyncWebServerRequest *request) override final;
};

class StaticFileResponse: public AsyncWebServerResponse
{
  private:
    String _header;
    StaticFile *_content;

    const char *ptr;
    size_t length;

    size_t writeData(AsyncWebServerRequest *request);
    size_t write(AsyncWebServerRequest *request);

  public:
    StaticFileResponse(int code, StaticFile *file);
    void _respond(AsyncWebServerRequest *request);
    size_t _ack(AsyncWebServerRequest *request, size_t len, uint32_t time);
    bool _sourceValid() const { return true; }

};
*/

#endif // _EMONESP_WEB_SERVER_STATIC_H

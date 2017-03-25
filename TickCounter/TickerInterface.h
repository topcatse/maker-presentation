#ifndef TICKER_INTERFACE_H_
#define TICKER_INTERFACE_H_

class ITickReceiver
{
public:
  virtual ~ITickReceiver() {}

  virtual void onTick() = 0;
};

class ITicker
{
public:
    virtual ~ITicker() {}

    virtual void start() = 0;
    virtual void stop() = 0;
};

#endif // TICKER_INTERFACE_H_

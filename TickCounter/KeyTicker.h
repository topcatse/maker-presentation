#ifndef KEYTICKER_H_
#define KEYTICKER_H_

#include "TickerInterface.h"
#include <thread>
#include <iostream>

class KeyTicker : public ITicker
{
public:
  KeyTicker(ITickReceiver* tickReceiver)
    : m_tickReceiver(tickReceiver)
    , m_run(false)
  {
  }

  void start() override
  {
    m_run = true;
    m_worker = std::thread( [=] {work();} );
  }

  void stop() override
  {
    m_run = false;
    m_worker.join();
  }
  
private:
  void work()
  {
    while (m_run)
    {
      std::cin.get();
      
      if (m_tickReceiver)
        m_tickReceiver->onTick();
    }
  }

  ITickReceiver* m_tickReceiver;
  volatile bool m_run;
  std::thread m_worker;
};

#endif


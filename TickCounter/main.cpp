#include <iostream>
#include <memory>
#include <chrono>

#include <spdlog/spdlog.h>

#include "TickerInterface.h"
#include "KeyTicker.h"
 
using namespace std;

class TickReceiver : public ITickReceiver
{
public:
    TickReceiver() : m_counter(0) {}
    
    void onTick() override
    {
        
        ++m_counter;
        cout << m_counter;
    }

private:
    int m_counter;
};

int main(int argc, char* argv[])
{
    auto console = spdlog::stdout_color_mt("console");
    
    console->info("Hello World!");
    
    TickReceiver receiver;

    std::unique_ptr<ITicker> ticker{new KeyTicker(&receiver)};

    ticker->start();

    this_thread::sleep_for(chrono::seconds(10));

    ticker->stop();

    console->info("Good Bye Cruel World");
    
    return 0;
}

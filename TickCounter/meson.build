project('TickCounterProject', 'cpp')

src = ['TickerInterface.h', 'KeyTicker.h', 'main.cpp']

spdlog = dependency('spdlog', version : '>=1.0.0')

thread_dep = dependency('threads')

executable('tickcounter',
           sources : src,
           cpp_args : '-std=c++11',
           dependencies : [spdlog, thread_dep])



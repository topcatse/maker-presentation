project('TickCounterProject', 'cpp')

src = ['TickerInterface.h', 'KeyTicker.h', 'main.cpp']

thread_dep = dependency('threads')

executable('tickcounter',
           sources : src,
           cpp_args : '-std=c++11',
           dependencies : thread_dep)



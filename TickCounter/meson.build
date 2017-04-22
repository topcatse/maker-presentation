project('TickCounterProject', 'cpp')

src = ['TickerInterface.h', 'KeyTicker.h', 'main.cpp']

spdlog_dep = dependency('spdlog', required : true)
spdlog_inc = include_directories(spdlog_dep.get_pkgconfig_variable('includedir')) 

thread_dep = dependency('threads')

executable('tickcounter',
           sources : src,
           cpp_args : '-std=c++11',
           include_directories : spdlog_inc,
           dependencies : [spdlog_dep, thread_dep])



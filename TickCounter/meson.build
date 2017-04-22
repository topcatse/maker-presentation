project('TickCounterProject', 'cpp', default_options: ['std=c++11'])

src = ['TickerInterface.h', 'KeyTicker.h', 'main.cpp']

spdlog_dep = dependency('spdlog', required : true)
if spdlog_dep.found()
    message(spdlog_dep.get_pkgconfig_variable('includedir'))
else
    error('spdlog not found!')
endif    


thread_dep = dependency('threads')

executable('tickcounter',
           sources : src,
           include_directories : spdlog_dep,
           dependencies : [spdlog_dep, thread_dep])



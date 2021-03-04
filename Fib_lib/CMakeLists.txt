project(CLion)

set(SOURCE_FILES
        Fib.cpp
        )

set(HEADER_FILES
        Fib.h
        )

add_library(Fib_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
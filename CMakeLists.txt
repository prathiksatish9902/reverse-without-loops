cmake_minimum_required(VERSION 3.16)

project(reverse_without_loop LANGUAGES C)

add_executable(reverse_without_loop main.c)

include(GNUInstallDirs)
install(TARGETS reverse_without_loop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

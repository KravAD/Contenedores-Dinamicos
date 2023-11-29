cmake_minimum_required(VERSION 3.10)
project(TuProyecto)


set(BOOST_ROOT C:/Users/krave/OneDrive/Documentos/boost/boost_1_83_0/oost_1_83_0)

find_package(Boost REQUIRED COMPONENTS system filesystem)

include_directories(${Boost_INCLUDE_DIRS})

add_executable("Ejercicio 6/Ejercicio6.cpp" "Ejercicio 6/Ejercicio6.cpp")

target_link_libraries("Ejercicio 6/Ejercicio6.cpp" ${Boost_LIBRARIES})

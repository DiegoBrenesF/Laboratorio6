cmake_minimum_required(VERSION 3.10)

#Nombre del proyecto
project(Laboratorio6 C)

#Configuracion del estandar de C
set(CMAKE_C_STANDARD99)

#Agregar archivos fuente
set(SOURCES
    main.c
    person.c
)

#Creacion de ejecutable
add_executable(main ${SOURCES})

#Regla para limpiar
add_custom_target(clean-all
                  COMMAND ${CMAKE_COMMAND} --build . --target clean
                  COMMAND ${CMAKE_COMMAND} -E rm -rf CMakeFiles CMakeCache.txt main Makefile *.cmake
                  COMMENT "Se eliminaron todos los archivos generados"
)


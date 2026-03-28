add_executable(cpp_learn
    main.cpp
)

target_include_directories(cpp_learn
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

# Qui collegheremo librerie esterne (es. fmt) più avanti
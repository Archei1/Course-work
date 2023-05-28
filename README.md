**Игра Пакнман на языке C++**
____
# CMakeLists
```
cmake_minimum_required(VERSION 3.24.2)
project(rpacman)

set(CMAKE_CXX_STANDARD 17)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_executable(rpacman WIN32 main.cpp)
else ()
    add_executable(rpacman main.cpp)
endif ()

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/Users/DNS/Desktop/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(rpacman sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
set(CMAKE_EXE_LINKER_FLAGS -static)
```
____
# Установка
+ Первым делом надо установить библиотеку SFML
+ Проверить правильная версия у вас стоит `cmake_minimum_required(VERSION 3.24.2)`
+ Затем надо указать путь, где ложит эта библиотека (Пример: `set(SFML_DIR "C:/Users/DNS/Desktop/SFML-2.5.1/lib/cmake/SFML")`)
+ Если вы все правильно сделали, то CMakeLists готов
+ Теперь надо просто вставить код и запустить его
____
# Упарвление
Тут все очень просто
Управление происходит с помощью перевернутых Т-образных стрелочек на вашей клавиатуре 
* Вниз (Down)
* Вверх (Up)
* Влево (Left)
* Вправо (Right)

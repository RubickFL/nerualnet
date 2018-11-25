#output filename
set(PROJECT_NAME nerualnet.rubick)

#project files without ","
set(SOURCES  main.cpp  net.cpp  net.h  neuron.cpp  neuron.h  trainingSet.cpp  trainingSet.h)

#option libs without ","
set(LIBRARIES your_libraries_here)

#flags without ","
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -w -std=c++11")


project(${PROJECT_NAME})
add_executable(${PROJECT_NAME} ${SOURCES})

#uncomment it if you need to link with option libs
#target_link_libraries(${PROJECT_NAME} ${LIBRARIES})

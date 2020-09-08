add_library(sample_lib time.cpp)
target_include_directories(sample_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(sample_lib PUBLIC project_options project_warnings)
target_link_libraries(sample_lib PUBLIC fmt)


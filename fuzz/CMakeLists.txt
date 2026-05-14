include_directories(
  ${PROJECT_BINARY_DIR}/extensions
  ${PROJECT_BINARY_DIR}/src
  ../extensions
  ../src
)

macro(fuzzer name)
    add_executable(${name} ${name}.c)
    set_target_properties(${name}
          PROPERTIES
          COMPILE_FLAGS "-fsanitize=fuzzer"
          LINK_FLAGS "-fsanitize=fuzzer")
    if(CMARK_SHARED)
      target_link_libraries(${name} libcmark-extensions libcmark)
    elseif(CMARK_STATIC)
      target_link_libraries(${name} libcmark-extensions_static libcmark_static)
    endif()
endmacro()

fuzzer(fuzz_quadratic)
fuzzer(fuzz_quadratic_brackets)

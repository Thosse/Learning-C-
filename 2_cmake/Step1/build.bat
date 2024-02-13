REM Mustspecify the Generator with -G (at least in Windows)
REM this builds the makefile
cmake -B build -S./ -G "Unix Makefiles"
cmake --build build
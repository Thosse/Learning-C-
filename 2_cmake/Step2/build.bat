REM Mustspecify the Generator with -G (at least in Windows)
REM this builds the makefile
cmake -B _build_ -S./ -G "Unix Makefiles"
cmake --build _build_
ECHO OFF
ECHO.

ECHO %1

IF "%~1"=="-d" (
    IF EXIST "debug.cpp" (
        del "debug.cpp"
    )
    IF EXIST "prod.cpp" (
        del "prod.cpp"
    )
    echo COMPILING DEBUG
    more .\source.cpp > .\debug.cpp
    g++ -o .\builds\debug .\debug.cpp
    echo FINISHED
    .\builds\debug.exe
)

IF "%~1"=="-p" (
    IF EXIST "debug.cpp" (
        del "debug.cpp"
    )
    IF EXIST "prod.cpp" (
        del "prod.cpp"
    )
    echo COMPILING PROD
    echo ---
    more +1  .\source.cpp > .\prod.cpp
    g++ -o .\builds\prod .\prod.cpp
    echo FINISHED, LAUNCHING PROD
    .\builds\prod.exe
)
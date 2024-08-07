@echo off

:: Compile the project using g++
g++ -o MazeGame main.cpp io.cpp lv1.cpp

:: Check if compilation was successful
if %errorlevel% neq 0 (
    echo Compilation failed!
    pause
    exit /b %errorlevel%
)

:: Run the compiled executable
MazeGame

:: Delete the compiled executable
del MazeGame.exe

:: Pause the terminal
echo.
pause

@echo off
set /p num="Enter problem number (e.g. 1000): "
cargo new problem_%num% --vcs none
echo Created: problem_%num%
pause
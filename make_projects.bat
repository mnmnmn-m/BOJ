@echo off
set /p num="문제 번호를 입력하세요 (예: 1000): "
cargo new problem_%num% --vcs none
echo 문제 폴더 problem_%num% 생성 완료!
pause
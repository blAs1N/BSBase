@echo off

pushd %~dp0
cmake -S .. -B ../Binaries/
popd
#!/bin/sh

set -e

DIR=$(pwd)
cd $(dirname "$0")

cmake -S .. -B ../Binaries/

cd "${DIR}"
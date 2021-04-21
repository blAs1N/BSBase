#!/bin/sh

set -e

DIR=$(pwd)
cd $(dirname "$0")

if [ $# -ge 1 ] ; then
	BUILD_TYPE=$1
else
	BUILD_TYPE=Release
fi

cd ..
mkdir -p Binaries/$BUILD_TYPE
cd Binaries/$BUILD_TYPE

cmake ../.. -DCMAKE_BUILD_TYPE="$BUILD_TYPE"

cd "${DIR}"
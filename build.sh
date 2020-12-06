if [ ! -d "$BUID" ]; then
    mkdir build
    echo Directory build was created
fi
cd build
cmake -G "Ninja" ..
cmake --build .
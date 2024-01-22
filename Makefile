all: run

clean:
	rm -rf build

deps:
	conan install . --output-folder=build --build=missing

configure: deps
	cd build && cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release

build: configure
	cd build && cmake --build .

run: build
	./build/hello

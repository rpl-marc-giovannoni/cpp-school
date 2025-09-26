.PHONY: build

build:
	mkdir -p build && cd build && cmake .. "-DCMAKE_BUILD_TYPE=Debug" &&  cmake --build .

clean:
	rm -rf build

run:
	cd build && ./out
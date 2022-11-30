.PHONY: clean
clean:
	rm -rf build
	rm -rf install
	rm -rf debug
	rm -rf release

.PHONY: all
all: configure build 

.PHONY: configure
configure:
	cmake -B build -DCMAKE_INSTALL_PREFIX=install

.PHONY: build
build:
	cmake --build build -j 2

.PHONY: build-install
build-install:
	cmake --build build --target install -j 2

.PHONY: installAfterBuild
installAfterBuild:
	cmake --install build 

.PHONY: build-trace
build-trace:
	cmake build --trace-source="CMakeLists.txt"
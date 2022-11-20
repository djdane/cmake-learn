
.PHONY: clean
clean:
  rm -rf build

.PHONY: configure
configure:
  cmake -B build -DCMAKE_PREFIX_PATH=install

.PHONY: build
build-debug:
  cmake --build build

.PHONY: configure-debug
configure-debug:
  cmake -B build/debug -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=$(pwd)/debug/install

.PHONY: configure-release
configure-release:
  cmake -B build/release -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_PREFIX_PATH=$(pwd)/release/install


.PHONY: build-debug
build-debug:
  cmake --build build/debug

.PHONY: build-release
build-release:
  cmake --build build/release
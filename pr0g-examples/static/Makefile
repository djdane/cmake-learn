###############################################################
# https://github.com/pr0g/cmake-examples/tree/main/installingmake 

.PHONY: configure-lib
configure-lib:
	cd library && cmake -B build -DCMAKE_INSTALL_PREFIX=../install

.PHONY: build-lib
build-lib:
	cd library && cmake --build build --target install -j 2
	
.PHONY: configure-app
configure-app:
	cd application && cmake -B build -DCMAKE_INSTALL_PREFIX=../install -DCMAKE_PREFIX_PATH=$(pwd)/../install/lib/cmake/calculator-static #todo: ignored?

.PHONY: build-app
build-app:
	cd application && cmake --build build --target install -j 2
	
.PHONY: build-all
build-all: configure-lib build-lib  configure-app build-app

.PHONY: run
run:
	cd install/bin && ./calculator-app
	
.PHONY: clean
clean:
	cd library && rm -rf build
	rm -rf install
	cd application && rm -rf build



#!/bin/bash
#cwd := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))
#@echo "          cwd: $(cwd)"

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
	cmake --build build --target install

.PHONY: run
run:
	./install/bin/hi


#.PHONY: all
#all: configure-debug build-debug configure-release build-release

.PHONY: configure-debug
configure-debug:
	cmake -B build/debug -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=debug

.PHONY: configure-release
configure-release:
	cmake -B build/release -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=release


.PHONY: build-debug
build-debug:
	cmake --build build/debug --target install

.PHONY: build-release
build-release:
	cmake --build build/release --target install
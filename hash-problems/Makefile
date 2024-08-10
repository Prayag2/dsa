.PHONY: % clean

CXX = g++
CXXFLAGS = -Wall -std=c++20

SRC_DIR := src
BIN_DIR := bin
BINARIES := $(notdir $(basename $(wildcard $(SRC_DIR)/*.cpp)))
.SECONDARY: $(addprefix $(BIN_DIR)/, $(BINARIES))

%: $(BIN_DIR)/%
	@echo ":: $(shell cat $(SRC_DIR)/$@.cpp | head -n 1 | sed "s/\/\/ //g") ::"
	@echo ":: complexity is $(shell cat $(SRC_DIR)/$@.cpp | sed -n '2p' | sed "s/\/\/ //g") ::"
	@./$<

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	@echo ":: compiling $@ ::"
	@$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	@echo ":: cleaning ::"
	rm -rf $(BIN_DIR)

.PHONY: % clean

SRC_DIR := src
BIN_DIR := bin
INCLUDE_DIR := ./include
BINARIES := $(notdir $(basename $(wildcard $(SRC_DIR)/*.cpp)))
.SECONDARY: $(addprefix $(BIN_DIR)/, $(BINARIES))

CXX = clang++
CXXFLAGS = -std=c++20 -I$(INCLUDE_DIR)

%: $(BIN_DIR)/%
	@printf "\r:: $(shell cat $(SRC_DIR)/$@.cpp | head -n 1 | sed "s/\/\/ //g") ::\n"
	@echo ":: complexity is $(shell cat $(SRC_DIR)/$@.cpp | sed -n '2p' | sed "s/\/\/ //g") ::"
	@./$<

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	@printf ":: compiling $@ ::"
	@$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	@echo ":: cleaning ::"
	rm -rf $(BIN_DIR)

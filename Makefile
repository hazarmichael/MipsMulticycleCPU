VERILATOR      = verilator
TOP            = tb_computer
VERILATOR_FLAGS = --binary --trace --timing -I.

FILELIST =	build/files.f

all: sim

$(FILELIST):
	@mkdir -p build
	@echo "src/basic_components/flop.v" > $(FILELIST)
	@echo "src/basic_components/reg_file.v" >> $(FILELIST)
	@echo "src/basic_components/mux2_1.v" >> $(FILELIST)
	@echo "src/basic_components/mux4_1.v" >> $(FILELIST)
	@echo "src/basic_components/extender.v" >> $(FILELIST)
	@echo "src/basic_components/MyALU.v" >> $(FILELIST)
	@echo "src/memories/instructionMemory.v" >> $(FILELIST)
	@echo "src/memories/dataMemory.v" >> $(FILELIST)
	@echo "src/controllers/ALUcontrol.v" >> $(FILELIST)
	@echo "src/controllers/PCcontrol.v" >> $(FILELIST)
	@echo "src/controllers/mainController.v" >> $(FILELIST)
	@echo "src/datapath.v" >> $(FILELIST)
	@echo "src/CPU.v" >> $(FILELIST)
	@echo "src/computer.v" >> $(FILELIST)
	@echo "src/tb_computer.v" >> $(FILELIST)

sim: $(FILELIST)
	$(VERILATOR) $(VERILATOR_FLAGS) --Mdir build -f $(FILELIST) --top $(TOP)
run:
	./build/V$(TOP)

clean:
	rm -rf obj_dir $(FILELIST) dump.vcd
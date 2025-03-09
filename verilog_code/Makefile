VERILATOR      = verilator
TOP            = tb_computer
VERILATOR_FLAGS = --binary --trace --timing -I.

FILELIST =	files.f

all: sim

$(FILELIST):
	@echo "basic_components/flop.v" > $(FILELIST)
	@echo "basic_components/reg_file.v" >> $(FILELIST)
	@echo "basic_components/mux2_1.v" >> $(FILELIST)
	@echo "basic_components/mux4_1.v" >> $(FILELIST)
	@echo "basic_components/extender.v" >> $(FILELIST)
	@echo "basic_components/ALU.v" >> $(FILELIST)
	@echo "basic_components/memories.v" >> $(FILELIST)
	@echo "controllers/ALUcontrol.v" >> $(FILELIST)
	@echo "controllers/PCcontrol.v" >> $(FILELIST)
	@echo "controllers/mainController.v" >> $(FILELIST)
	@echo "datapath.v" >> $(FILELIST)
	@echo "CPU.v" >> $(FILELIST)
	@echo "computer.v" >> $(FILELIST)
	@echo "tb_computer.v" >> $(FILELIST)

sim: $(FILELIST)
	$(VERILATOR) $(VERILATOR_FLAGS) -f $(FILELIST) --top $(TOP)

run:
	./obj_dir/V$(TOP)

clean:
	rm -rf obj_dir $(FILELIST) dump.vcd
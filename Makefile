all: sample

sample: sample.cpp MIPS_Processor.hpp
	g++ sample.cpp MIPS_Processor.hpp -o sample

clean:
	rm sample
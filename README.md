# 概述 Intro

这是一个自己动手制作的小项目，基于RISC-V
架构的五级流水线处理器，能够实现**RV32CIM**中的绝大多数常用指令以及借由**csr**寄存器的中断处理（指令详见`./core/*.vh`）。已经通过了riscv-arch-test的全部测试，并在基于Xilinx Artix-7的FPGA开发板上以100MHz时钟频率实现了上述功能。

本项目受教学与考试计划以及众所周知的原因等影响，耗时大约两个半月完成。当时进实验室的时候和师兄说想做点东西，没想到直接自己搞了个大的（~~差点噎死~~）。但是当中学到的知识，尤其是计算机系统结构等补足专业课程空缺方面的知识，以及平衡学习、科研与生活的经验与精神会让我受益终生吧。

p.s.由于前期工作大多在本地完成，所以仓库内不含前期代码构建的全过程。

This is my first simple five-stage pipeline processor based on the RISC-V architecture, capable of excecuting most of the common instructions in the RV32CIM isa and interrupt processing through the csr registers (see more in `./core/*.vh` for instructions). Since most of the preliminary work is done locally, the whole process of building the pre-code is not included in the repository.

# 模拟与测试 Simulation and Tests

## FPGA测试 FPGA test

This section is based on EGo1 FPGA powered by Xilinx Artix-7, using software Vivado.

Since Verilator is a cycle-based simulator, it does not evaluate time within a single cycle or simulate precise circuit timing. Instead, circuit status is typically evaluated once per clock cycle, so no intra-clock cycle glitches are observed, and timing signal delays are not supported. Therefore, we use Vivado for timing simulations on FPGA.

Set **CYCLE = 20**, leading clk frequency to **50MHz**.

## 集成测试 ARCH test
1. Simulation build first.    
    Make sure you have installed [verilator](https://github.com/verilator/verilator) and [riscv-gnu-toolchain](https://github.com/riscv-collab/riscv-gnu-toolchain) and set them in your path.
    ```
    cd sim
    make
    ```
2. Get [riscv-arch-test](https://github.com/riscv-non-isa/riscv-arch-test) and copy dir test into its dir riscv-target.    
   Remember to set environment and change `$(TARGET)` in MAKEFILE in riscv-arch-test.
   ```
   cd riscv-arch-test
   RISCV_TARGET=test
   SIM_DIR=../riscv_cpu/sim
   make
   ```

   RV32I_M tests(including isa-C, I, M, privilege and Zifencei) should all pass like shown.
   ```
   OK: 27/27 RISCV_TARGET=test RISCV_DEVICE=C XLEN=32
   OK: 38/38 RISCV_TARGET=test RISCV_DEVICE=I XLEN=32
   OK: 8/8 RISCV_TARGET=test RISCV_DEVICE=M XLEN=32
   OK: 1/1 RISCV_TARGET=test RISCV_DEVICE=Zifencei XLEN=32
   OK: 16/16 RISCV_TARGET=test RISCV_DEVICE=privilege XLEN=32
   ```

## 系统测试 SYS test (based on NEMU)

1. Simulation build first.    
    Make sure you have installed [verilator](https://github.com/verilator/verilator) and [riscv-gnu-toolchain](https://github.com/riscv-collab/riscv-gnu-toolchain) and set them in your path.
    ```
    cd sim
    make
    ```
2. Config the simulation file to [NEMU](https://github.com/sunoi/ICS2022-PA) (including at least nemu, abstract-machine and am-kernels). Change srcs at proper positions and finish at least ioe_timer for the **benchmark** to work. [Here](https://github.com/liuyuxivapor/ics2022) for more details.

    ```
    cd ics2022/am-kernels/benchmarks/$TEST
    make ARCH=riscv32-nemu run
    ```

- Dhrystone
```
Dhrystone Benchmark, Version C, Version 2.2
Trying 500000 runs through Dhrystone.
Finished in 4895 ms
==================================================
Dhrystone PASS         179 Marks
                  vs. 100000 Marks (i7-7700K @ 4.20GHz)
```

- CoreMark
```
Running CoreMark for 1000 iterations
2K performance run parameters for coremark.
CoreMark Size    : 666
Total time (ms)  : 7018
Iterations       : 1000
Compiler version : GCC9.4.0
seedcrc          : 0x%04x
[0]crclist       : 0x%04x
[0]crcmatrix     : 0x%04x
[0]crcstate      : 0x%04x
[0]crcfinal      : 0x%04x
Finised in 7018 ms.
==================================================
CoreMark PASS       416 Marks
                vs. 100000 Marks (i7-7700K @ 4.20GHz)
```

p.s. After finishing all ioe supported, you can also run games in `ics2022/fceux-am`, roms in `fceux-am/nes/rom/*.nes`.

# 遇到的问题与对策 Problems and Solutions

## 设备级工程的设计 Design of device-level engineering

在此之前利用Verilog/SV设计过一些简单功能的电路，但基本没有接触过设备级工程的建立与模拟测试。在参照参考书的同时，从基础模块的建立，到模块的层层套叠、复用，到层间的接口，都进行了不断的设计与优化，最终能够满足软件的指令完成并达到近优速率。

## 计算机结构相关知识 Computer organization, system, architecture

这应该是伴随我整个项目进程中最严重的问题了。由于在专业课程上缺少项目所需的计算机构造以及系统层级的部分，我需要花很多时间补充这上面的基础知识。

- Computer Organization and Design, by David A. Patterson / John L. Hennessy
- Computer Systems: A Programmer's Perspective, by Randal E. Bryant / David R. O'Hallaron
- Computer Architecture: A Quantitative Approach, by John L.Hennessy / David A. Patterson

总也记不住的操作和眼花缭乱的编译与调试过程都曾让我陷入深深的自我怀疑，但我努力静心求问，看书查资料(~~STFW && RTFSC~~)补足基础知识，终于大致理解掌握了这些体系的知识与脉络：

1. 概念相同的一个硬件模块有着不同的实现方式, 比如处理器既可以通过NEMU中简单的解释方式来实现, 可以通过类似QEMU中高性能的二进制翻译方式来实现, 也可以通过verilog等硬件描述语言来实现一个真实的处理器.
2. ISA是硬件向软件提供的可以操作硬件的接口
3. AM的API对不同ISA(如x86/mips32/riscv32)的接口进行了抽象, 为上层的程序屏蔽ISA相关的细节
4. 运行时环境可以通过对AM的API进行进一步的封装, 向程序提供更方便的功能

### 通过项目前后的学习，我认为至少掌握了

c++/system c基础，gnutools的使用，使用git管理代码，linux系统基本原理，计算机组成原理，操作系统基础，qemu基本使用，etc.

### 小遗憾
怎么没早点知道chaisel这种好东西……看起来真的很好用~

# 致谢 Acknowledgements
- HIT-MEC
- Creative Commons Public Domain
- Sources from GitHub
  - riscv-gnu-toolchain
  - riscv-arch-test
  - riscv-tests
  - verilator
  - linux_talk
- [“一生一芯”项目](https://ysyx.oscc.cc)
- [NJU - ProjectN](https://github.com/NJU-ProjectN)
# 概述 Intro

这是一个自己动手制作的小项目，基于RISC-V
架构的五级流水线处理器，能够实现**RV32CIM**中的绝大多数常用指令以及借由**csr**寄存器的中断处理（指令详见`./core/*.vh`）。已经通过了riscv-arch-test的全部测试，并在基于Xilinx Artix-7的FPGA开发板上以100MHz时钟频率实现了上述功能。


本项目受教学与考试计划以及众所周知的原因等影响，耗时大约两个半月完成。当时进实验室的时候和师兄说想做点东西，没想到直接自己搞了个大的（~~差点噎死~~）。但是当中学到的知识，尤其是计算机系统结构等补足专业课程空缺方面的知识，以及平衡学习、科研与生活的经验与精神会让我受益终生吧。

p.s.由于前期工作大多在本地完成，所以仓库内不含前期代码构建的全过程。

This is my first simple five-stage pipeline processor based on the RISC-V architecture, capable of excecuting most of the common instructions in the RV32CIM isa and interrupt processing through the csr registers (see more in `./core/*.vh` for instructions). Since most of the preliminary work is done locally, the whole process of building the pre-code is not included in the repository.

# 测试 Tests

## [架构测试](https://github.com/liuyuxivapor/riscv_cpu) Arch-test
1. Simulation build first.    
   Make sure you have installed VERILATOR and RISCV-GNU-TOOLCHAIN and set them in your path.
   ```
   cd sim
   make
2. Get RISCV-ARCH-TEST and copy dir test into its dir riscv-target.    
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

## [FPGA测试](https://github.com/liuyuxivapor/riscv_cpu/tree/fpga) FPGA test

This section is based on EGo1 FPGA powered by Xilinx Artix-7(now part of AMD).

Since Verilator is a cycle-based simulator, it does not evaluate time within a single cycle or simulate precise circuit timing. Instead, circuit status is typically evaluated once per clock cycle, so no intra-clock cycle glitches are observed, and timing signal delays are not supported. Therefore, we use Vivado for timing simulations on FPGA.

Set CYCLE = 10, leading to clk frequency = 100MHz.

## [模拟器测试](https://github.com/liuyuxivapor/riscv_cpu/tree/qemu) QEMU test

# 遇到的问题与对策 Problems and Solutions

## 计算机结构相关知识 Computer organization, system, architecture

这应该是伴随我整个项目进程中最严重的问题了。由于在专业课程上缺少项目所需的计算机构造以及系统层级的部分，我需要花很多时间补充这上面的基础知识。

不熟悉的linux系统、总也记不住的操作、眼花缭乱的编译与安装过程都曾让我陷入深深的自我怀疑，但我抓紧课余时间不断求问学长与老师，看书查资料补足基础知识，终于大致理解掌握了这些体系的知识与脉络。

- Computer Organization and Design, by David A. Patterson / John L. Hennessy
- Computer Systems: A Programmer's Perspective, by Randal E. Bryant / David R. O'Hallaron
- Computer Architecture: A Quantitative Approach, by John L.Hennessy / David A. Patterson

通过项目前后的学习，参考以上书籍，我至少掌握了基本的**linux/gunutools使用，Makefile编写，使用git管理代码，c++语法，计算机组成与系统，qemu使用，编译工具使用.**

## 设备级工程的设计 Design of device-level engineering

在此之前利用Verilog/SV设计过一些简单功能的电路，但基本没有接触过设备级工程的建立与模拟测试。在参照参考书的同时，从基础模块的建立，到模块的层层套叠、复用，到层间的接口，都进行了不断的设计与优化，最终能够满足软件的指令完成并达到近优速率。


## 软硬件交叉 Switch between RTL and programming language

核心设计上的Verilog/SV是硬件描述语言，模拟与测试上的C++/System C是程序设计语言，二者在构造与执行顺序上还是有很大不同的，使用时应格外注意思维的转换，譬如RTL的并行机制就debug数次并可能跨越数个文件才能找到问题。

# 致谢 Acknowledgements
- HIT-MEC
- Creative Commons Public Domain
- Sources on GitHub
  - [riscv-gnu-toolchain](https://github.com/riscv-collab/riscv-gnu-toolchain)
  - [riscv-arch-test](https://github.com/riscv-non-isa/riscv-arch-test)
  - [riscv-tests](https://github.com/riscv-software-src/riscv-tests)
  - [verilator](https://github.com/verilator/verilator)
- [“一生一芯”项目](https://ysyx.oscc.cc)
FROM ubuntu:22.04

RUN apt update && \
    apt install -y clang llvm lld qemu-system-riscv32 curl && \
    apt clean && \
    rm -rf /var/lib/apt/lists/*

CMD ["/bin/bash"]

WORKDIR /workspaces/rv1
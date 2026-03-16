# My MS-DOS

Building a fully functional MS-DOS compatible operating system from scratch in C.

## Architecture

The project follows a **3-tier architecture**, separating concerns across layers:

```
┌─────────────────────────────────┐
│         command.com             │  ← User-facing shell
├─────────────────────────────────┤
│       OS API / Middleware       │  ← System call interface
├─────────────────────────────────┤
│           Kernel                │  ← Hardware abstraction
└─────────────────────────────────┘
```

| Layer | Description | Status |
|-------|-------------|--------|
| **command.com** | User-facing shell — reads commands from keyboard and files | ✅ In progress |
| **OS API** | Middleware linking the shell to the kernel through system calls | ✅ In progress |
| **Kernel** | Host OS during development; x86 real mode D-DOS kernel for production | 🔜 Planned |

## Project Structure

```
my-ms-dos/
├── command/     # Shell (command.com) implementation
├── osapi/       # OS API / middleware layer
├── Makefile
└── README.md
```

## Building

```bash
make
./command
```

## Roadmap

- [x] Basic shell with keyboard input
- [x] OS API middleware layer
- [ ] File system support
- [ ] Bootloader (x86 real mode)
- [ ] Memory management
- [ ] BIOS interrupt handling
- [ ] Self-hosting D-DOS kernel

## Tech Stack

- **Language:** C, x86 Assembly (planned)
- **Target:** x86 real mode (production), cross-platform (development)
- **Tools:** GCC, Make, GDB

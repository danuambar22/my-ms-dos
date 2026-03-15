Building a fully functional MS-DOS from scratch in C!

For now I built the command.com which reads from file from keyboard
I use the foundation for a 3-tier system:  

command.com: The user-facing shell (cross-platform in dev).  
OS API/middleware: Links the shell to the kernel through "system calls"
Kernel: Win/Mac/Linux during DEV; The main D-DOS x86 kernel during PROD

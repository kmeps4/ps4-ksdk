/**
 * (c) 2017-2018 Alexandro Sanchez Bach.
 * (c) 2021 SiSTRo
 * Released under MIT license. Read LICENSE for more details.
 */

/* functions */
KFUNC(0x000001C0, Xfast_syscall, void, (void));
KFUNC(0x000B7A30, printf, int, (const char *fmt, ... ));
KFUNC(0x00301B20, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x00301CE0, free, void, (void *addr, void *type));
KFUNC(0x002714B0, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x001496C0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x00271E20, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x0037BE70, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x0030F450, strlen, uint64_t, (const char *str));
KFUNC(0x00453EA0, pause, void, (const char *wmesg, int timo));
KFUNC(0x001ED670, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x0043E610, sx_xlock, int, (struct sx *sx, int opts, const char *file, int line));
KFUNC(0x0043E7D0, sx_xunlock, int, (struct sx *sx));
KFUNC(0x0029A380, kern_reboot, int, (int magic));
KFUNC(0x0007BB80, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x0007C1C0, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x0007BBD0, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x0007E680, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x000809C0, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x0007EC40, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x0007CD80, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x0007BA30, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x0007BAA0, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x0041EB00, proc_rwmem, int, (struct proc *p, struct uio *uio));
KFUNC(0x002196D0, fpu_kern_enter, int, (struct thread *td, struct fpu_kern_ctx *ctx, uint32_t flags));
KFUNC(0x00219790, fpu_kern_leave, int, (struct thread *td, struct fpu_kern_ctx *ctx));
KFUNC(0x000F8370, eventhandler_register, void, (void *list, const char *name, void *func, void *key, void *arg, int priority));

//Notification
KFUNC(0x000B7C70, sprintf, int, (char* str, const char* format, ...));
KFUNC(0x003A1B30,  notification_write_from_kernel, int, (int device, struct notify_request* req, int size , int blocking));

/* data */
KDATA(0x0152BF60, disable_console_output, uint8_t);
KDATA(0x015621E0, M_TEMP, void);
KDATA(0x02268D48, kernel_map, void *);
KDATA(0x0111F870, prison0, void *);
KDATA(0x021EFF20, rootvnode, void *);
KDATA(0x01B946E0, allproc, struct proc *);
KDATA(0x01100310, sysents, struct sysent);
KDATA(0x026541C0, FPU_CTX, void);
KDATA(0x01579DF8, MINI_SYSCORE_SELF_BINARY, uint8_t);


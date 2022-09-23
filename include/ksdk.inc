// golden
// 09/22/2022
// WIP STILL NEED TO VERIFY SOME OFFSETS ON 9.00

/* functions */
KFUNC(0x000001C0, Xfast_syscall, void, (void));
KFUNC(0x002716A0, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x002715B0, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x000B7A30, printf, int, (const char *fmt, ... ));
KFUNC(0x000B7DD0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x00301B20, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x00301CE0, free, void, (void *addr, void *type));
KFUNC(0x002714B0, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x001496C0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x00271E20, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x0037BE70, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x0030F450, strlen, uint64_t, (const char *str));
KFUNC(0x00453EA0, pause, void, (const char *wmesg, int timo));
KFUNC(0x00096F40, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x00097230, kthread_exit, void, (void));
KFUNC(0x001CBB90, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x001CBB90, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x000871B0, kern_yield, void, (uint64_t p));
KFUNC(0x003DB0D0, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x003DB200, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x0047AB60, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x000969E0, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x0000E7C0, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom nameKFUNC(0x0000E550, kthread_suspend_check, void, (void));
KFUNC(0x0000DE50, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x0043E390, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x0043E610, sx_xlock, void, (struct sx *sx));
KFUNC(0x0043E7D0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x002EF960, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x002EF2D0, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x002EF4A0, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x002EEF50, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x002EF270, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x0029A380, kern_reboot, int, (int magic));
KFUNC(0x0007BB80, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x0007C1C0, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x0007BBD0, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x0007B9E0, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x0007B810, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x002FEFA0, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x003012F0, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x002FF560, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x002FD640, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x0007BB80, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x0007BBD0, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x0041EB00, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x01564910, disable_console_output, uint8_t);
KDATA(0x015621E0, M_TEMP, void);
KDATA(0x02268D48, kernel_map, void *);
KDATA(0x0111F870, prison0, void *);
KDATA(0x021EFF20, rootvnode, void *);
KDATA(0x01B946E0, allproc, struct proc *);
KDATA(0x01100310, sysents, struct sysent);

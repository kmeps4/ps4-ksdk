// golden
// 3/21/2021
//

/* functions */
KFUNC(0x000001C0, Xfast_syscall, void, (void));
KFUNC(0x0028F9F0, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x0028F900, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x0026F740, printf, int, (const char *fmt, ... ));
KFUNC(0x0026F7B0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x001D6680, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x001D6870, free, void, (void *addr, void *type));
KFUNC(0x0028F800, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x0008D6F0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x0031D250, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x001753E0, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x002E8BC0, strlen, uint64_t, (const char *str));
KFUNC(0x00086E80, pause, void, (const char *wmesg, int timo));
KFUNC(0x0000DE50, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x0000E140, kthread_exit, void, (void));
KFUNC(0x0018FDF0, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x00190930, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x000871B0, kern_yield, void, (uint64_t p));
KFUNC(0x003DB0D0, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x003DB200, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x0047AB60, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x0000D8F0, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x0000E7C0, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x0000E550, kthread_suspend_check, void, (void));
KFUNC(0x0000DE50, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x000D1380, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x000D1600, sx_xlock, void, (struct sx *sx));
KFUNC(0x000D17C0, sx_xunlock, void, (struct sx *sx));
KFUNC(0x003105B0, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x0030FF30, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x003100F0, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x0030FBB0, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x0030FED0, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x000D28E0, kern_reboot, int, (int magic));
KFUNC(0x002FC430, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x002FCA70, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x002FC480, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x002FC290, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x002FC0C0, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x002FEFA0, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x003012F0, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x002FF560, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x002FD640, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x002FC2E0, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x002FC350, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x00361310, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x01564910, disable_console_output, uint8_t);
KDATA(0x01556DA0, M_TEMP, void);
KDATA(0x021405B8, kernel_map, void *);
KDATA(0x0113B728, prison0, void *);
KDATA(0x01B463E0, rootvnode, void *);
KDATA(0x0213C828, allproc, struct proc *);
KDATA(0x01122340, sysents, struct sysent);

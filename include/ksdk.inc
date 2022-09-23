// golden
// 6/12/2018
//

/* functions */
KFUNC(0x000001C0, Xfast_syscall, void, (void));
KFUNC(0x003C17A0, copyin, int, (const void *uaddr, void *kaddr, uint64_t len));
KFUNC(0x003C16B0, copyout, int, (const void *kaddr, void *uaddr, uint64_t len));
KFUNC(0x00123280, printf, int, (const char *fmt, ... ));
KFUNC(0x001232F0, vprintf, int, (const char *fmt, va_list arg));
KFUNC(0x0000D7A0, malloc, void *, (uint64_t size, void *type, int flags));
KFUNC(0x0000D9A0, free, void, (void *addr, void *type));
KFUNC(0x003C15B0, memcpy, void *, (void *dest, const void *src, uint64_t num));
KFUNC(0x001687D0, memset, void *, (void *ptr, int value, uint64_t num));
KFUNC(0x00207E40, memcmp, int, (const void *ptr1, const void *ptr2, uint64_t num));
KFUNC(0x00250730, kmem_alloc, void *, (struct vm_map *map, uint64_t size));
KFUNC(0x002433E0, strlen, uint64_t, (const char *str));
KFUNC(0x0022A080, pause, void, (const char *wmesg, int timo));
KFUNC(0x0008A600, kthread_add, int, (void (*func)(void *), void *arg, struct proc *procp, struct thread **newtdpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x0008A8F0, kthread_exit, void, (void));
KFUNC(0x004453C0, sched_prio, void, (struct thread *td, uint16_t prio));
KFUNC(0x00445F20, sched_add, void, (struct thread *td, uint64_t cpuset));
KFUNC(0x0022A3A0, kern_yield, void, (uint64_t p));
KFUNC(0x000A36D0, fill_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x000A3800, set_regs, int, (struct thread *td, struct reg *rg));
KFUNC(0x004A6FB0, create_thread, int, (struct thread * td, uint64_t ctx, void (*start_func)(void *), void *arg, char *stack_base, uint64_t stack_size, char *tls_base, long *child_tid, long *parent_tid, uint64_t flags, uint64_t rtp));
KFUNC(0x0008A0A0, kproc_create, int, (void (*func)(void *), void *arg, struct proc **newpp, int flags, int pages, const char *fmt, ...));
KFUNC(0x0008AF70, kthread_set_affinity, void, (const char *tdname, uint64_t prio, uint64_t cpuset, uint64_t unknown)); // custom name
KFUNC(0x0008AD10, kthread_suspend_check, void, (void));
KFUNC(0x0008AE20, kproc_kthread_add, int, (void (*func)(void *), void *arg, struct proc **procptr, struct thread **tdptr, int flags, int pages, char * procname, const char *fmt, ...));
KFUNC(0x00042450, sx_init_flags, void, (struct sx *sx, const char *description, int opts));
KFUNC(0x000426C0, sx_xlock, void, (struct sx *sx));
KFUNC(0x00042880, sx_xunlock, void, (struct sx *sx));
KFUNC(0x00496FE0, mtx_init, void, (struct mtx *mutex, const char *name, const char *type, int opts));
KFUNC(0x00496970, mtx_lock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x00496B30, mtx_unlock_spin_flags, void, (struct mtx *mutex, int flags));
KFUNC(0x00496540, mtx_lock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x00496810, mtx_unlock_sleep, void, (struct mtx *mutex, int flags));
KFUNC(0x00206D50, kern_reboot, int, (int magic));
KFUNC(0x0044CD40, vm_map_lock_read, void, (struct vm_map *map));
KFUNC(0x0044D330, vm_map_lookup_entry, int, (struct vm_map *map, uint64_t address, struct vm_map_entry **entries));
KFUNC(0x0044CD90, vm_map_unlock_read, void, (struct vm_map *map));
KFUNC(0x0044CB90, vmspace_acquire_ref, struct vmspace *, (struct proc *p));
KFUNC(0x0044C9C0, vmspace_free, void, (struct vmspace *vm));
KFUNC(0x0044F8A0, vm_map_delete, int, (struct vm_map *map, uint64_t start, uint64_t end));
KFUNC(0x00451BF0, vm_map_protect, int, (struct vm_map * map, uint64_t start, uint64_t end, int new_prot, uint64_t set_max));
KFUNC(0x0044FE60, vm_map_findspace, int, (struct vm_map * map, uint64_t start, uint64_t length, uint64_t *addr));
KFUNC(0x0044DEF0, vm_map_insert, int, (struct vm_map * map, uint64_t object, uint64_t offset, uint64_t start, uint64_t end, int prot, int max, int cow));
KFUNC(0x0044CBF0, vm_map_lock, void, (struct vm_map * map));
KFUNC(0x0044CC60, vm_map_unlock, void, (struct vm_map * map));
KFUNC(0x0010EE10, proc_rwmem, int, (struct proc *p, struct uio *uio));

/* data */
KDATA(0x01A6EB18, disable_console_output, uint8_t);
KDATA(0x01540EB0, M_TEMP, void);
KDATA(0x0220DFC0, kernel_map, void *);
KDATA(0x0113E518, prison0, void *);
KDATA(0x02300320, rootvnode, void *);
KDATA(0x022BBE80, allproc, struct proc *);
KDATA(0x0111E000, sysents, struct sysent);

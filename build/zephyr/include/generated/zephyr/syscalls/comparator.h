/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_COMPARATOR_H
#define Z_INCLUDE_SYSCALLS_COMPARATOR_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_comparator_get_output(const struct device * dev);

__pinned_func
static inline int comparator_get_output(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_COMPARATOR_GET_OUTPUT);
	}
#endif
	compiler_barrier();
	return z_impl_comparator_get_output(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define comparator_get_output(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_COMPARATOR_GET_OUTPUT, comparator_get_output, dev); 	syscall__retval = comparator_get_output(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_COMPARATOR_GET_OUTPUT, comparator_get_output, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_comparator_set_trigger(const struct device * dev, enum comparator_trigger trigger);

__pinned_func
static inline int comparator_set_trigger(const struct device * dev, enum comparator_trigger trigger)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; enum comparator_trigger val; } parm1 = { .val = trigger };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_COMPARATOR_SET_TRIGGER);
	}
#endif
	compiler_barrier();
	return z_impl_comparator_set_trigger(dev, trigger);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define comparator_set_trigger(dev, trigger) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_COMPARATOR_SET_TRIGGER, comparator_set_trigger, dev, trigger); 	syscall__retval = comparator_set_trigger(dev, trigger); 	sys_port_trace_syscall_exit(K_SYSCALL_COMPARATOR_SET_TRIGGER, comparator_set_trigger, dev, trigger, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_comparator_trigger_is_pending(const struct device * dev);

__pinned_func
static inline int comparator_trigger_is_pending(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_COMPARATOR_TRIGGER_IS_PENDING);
	}
#endif
	compiler_barrier();
	return z_impl_comparator_trigger_is_pending(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define comparator_trigger_is_pending(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_COMPARATOR_TRIGGER_IS_PENDING, comparator_trigger_is_pending, dev); 	syscall__retval = comparator_trigger_is_pending(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_COMPARATOR_TRIGGER_IS_PENDING, comparator_trigger_is_pending, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */

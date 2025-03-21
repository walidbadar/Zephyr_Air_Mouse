/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_UPDATEHUB_H
#define Z_INCLUDE_SYSCALLS_UPDATEHUB_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern void z_impl_updatehub_autohandler(void);

__pinned_func
static inline void updatehub_autohandler(void)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		(void) arch_syscall_invoke0(K_SYSCALL_UPDATEHUB_AUTOHANDLER);
		return;
	}
#endif
	compiler_barrier();
	z_impl_updatehub_autohandler();
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define updatehub_autohandler() do { 	sys_port_trace_syscall_enter(K_SYSCALL_UPDATEHUB_AUTOHANDLER, updatehub_autohandler); 	updatehub_autohandler(); 	sys_port_trace_syscall_exit(K_SYSCALL_UPDATEHUB_AUTOHANDLER, updatehub_autohandler); } while(false)
#endif
#endif


extern enum updatehub_response z_impl_updatehub_probe(void);

__pinned_func
static inline enum updatehub_response updatehub_probe(void)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (enum updatehub_response) arch_syscall_invoke0(K_SYSCALL_UPDATEHUB_PROBE);
	}
#endif
	compiler_barrier();
	return z_impl_updatehub_probe();
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define updatehub_probe() ({ 	enum updatehub_response syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_UPDATEHUB_PROBE, updatehub_probe); 	syscall__retval = updatehub_probe(); 	sys_port_trace_syscall_exit(K_SYSCALL_UPDATEHUB_PROBE, updatehub_probe, syscall__retval); 	syscall__retval; })
#endif
#endif


extern enum updatehub_response z_impl_updatehub_update(void);

__pinned_func
static inline enum updatehub_response updatehub_update(void)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (enum updatehub_response) arch_syscall_invoke0(K_SYSCALL_UPDATEHUB_UPDATE);
	}
#endif
	compiler_barrier();
	return z_impl_updatehub_update();
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define updatehub_update() ({ 	enum updatehub_response syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_UPDATEHUB_UPDATE, updatehub_update); 	syscall__retval = updatehub_update(); 	sys_port_trace_syscall_exit(K_SYSCALL_UPDATEHUB_UPDATE, updatehub_update, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_updatehub_confirm(void);

__pinned_func
static inline int updatehub_confirm(void)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) arch_syscall_invoke0(K_SYSCALL_UPDATEHUB_CONFIRM);
	}
#endif
	compiler_barrier();
	return z_impl_updatehub_confirm();
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define updatehub_confirm() ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_UPDATEHUB_CONFIRM, updatehub_confirm); 	syscall__retval = updatehub_confirm(); 	sys_port_trace_syscall_exit(K_SYSCALL_UPDATEHUB_CONFIRM, updatehub_confirm, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_updatehub_reboot(void);

__pinned_func
static inline int updatehub_reboot(void)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int) arch_syscall_invoke0(K_SYSCALL_UPDATEHUB_REBOOT);
	}
#endif
	compiler_barrier();
	return z_impl_updatehub_reboot();
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define updatehub_reboot() ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_UPDATEHUB_REBOOT, updatehub_reboot); 	syscall__retval = updatehub_reboot(); 	sys_port_trace_syscall_exit(K_SYSCALL_UPDATEHUB_REBOOT, updatehub_reboot, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */

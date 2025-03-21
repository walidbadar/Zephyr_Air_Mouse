/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_MSPI_H
#define Z_INCLUDE_SYSCALLS_MSPI_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_mspi_config(const struct mspi_dt_spec * spec);

__pinned_func
static inline int mspi_config(const struct mspi_dt_spec * spec)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct mspi_dt_spec * val; } parm0 = { .val = spec };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_MSPI_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_config(spec);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_config(spec) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_CONFIG, mspi_config, spec); 	syscall__retval = mspi_config(spec); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_CONFIG, mspi_config, spec, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_mspi_dev_config(const struct device * controller, const struct mspi_dev_id * dev_id, const enum mspi_dev_cfg_mask param_mask, const struct mspi_dev_cfg * cfg);

__pinned_func
static inline int mspi_dev_config(const struct device * controller, const struct mspi_dev_id * dev_id, const enum mspi_dev_cfg_mask param_mask, const struct mspi_dev_cfg * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = controller };
		union { uintptr_t x; const struct mspi_dev_id * val; } parm1 = { .val = dev_id };
		union { uintptr_t x; const enum mspi_dev_cfg_mask val; } parm2 = { .val = param_mask };
		union { uintptr_t x; const struct mspi_dev_cfg * val; } parm3 = { .val = cfg };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_MSPI_DEV_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_dev_config(controller, dev_id, param_mask, cfg);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_dev_config(controller, dev_id, param_mask, cfg) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_DEV_CONFIG, mspi_dev_config, controller, dev_id, param_mask, cfg); 	syscall__retval = mspi_dev_config(controller, dev_id, param_mask, cfg); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_DEV_CONFIG, mspi_dev_config, controller, dev_id, param_mask, cfg, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_mspi_get_channel_status(const struct device * controller, uint8_t ch);

__pinned_func
static inline int mspi_get_channel_status(const struct device * controller, uint8_t ch)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = controller };
		union { uintptr_t x; uint8_t val; } parm1 = { .val = ch };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_MSPI_GET_CHANNEL_STATUS);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_get_channel_status(controller, ch);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_get_channel_status(controller, ch) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_GET_CHANNEL_STATUS, mspi_get_channel_status, controller, ch); 	syscall__retval = mspi_get_channel_status(controller, ch); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_GET_CHANNEL_STATUS, mspi_get_channel_status, controller, ch, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_mspi_transceive(const struct device * controller, const struct mspi_dev_id * dev_id, const struct mspi_xfer * req);

__pinned_func
static inline int mspi_transceive(const struct device * controller, const struct mspi_dev_id * dev_id, const struct mspi_xfer * req)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = controller };
		union { uintptr_t x; const struct mspi_dev_id * val; } parm1 = { .val = dev_id };
		union { uintptr_t x; const struct mspi_xfer * val; } parm2 = { .val = req };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_MSPI_TRANSCEIVE);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_transceive(controller, dev_id, req);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_transceive(controller, dev_id, req) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_TRANSCEIVE, mspi_transceive, controller, dev_id, req); 	syscall__retval = mspi_transceive(controller, dev_id, req); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_TRANSCEIVE, mspi_transceive, controller, dev_id, req, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_mspi_xip_config(const struct device * controller, const struct mspi_dev_id * dev_id, const struct mspi_xip_cfg * cfg);

__pinned_func
static inline int mspi_xip_config(const struct device * controller, const struct mspi_dev_id * dev_id, const struct mspi_xip_cfg * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = controller };
		union { uintptr_t x; const struct mspi_dev_id * val; } parm1 = { .val = dev_id };
		union { uintptr_t x; const struct mspi_xip_cfg * val; } parm2 = { .val = cfg };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_MSPI_XIP_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_xip_config(controller, dev_id, cfg);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_xip_config(controller, dev_id, cfg) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_XIP_CONFIG, mspi_xip_config, controller, dev_id, cfg); 	syscall__retval = mspi_xip_config(controller, dev_id, cfg); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_XIP_CONFIG, mspi_xip_config, controller, dev_id, cfg, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_mspi_scramble_config(const struct device * controller, const struct mspi_dev_id * dev_id, const struct mspi_scramble_cfg * cfg);

__pinned_func
static inline int mspi_scramble_config(const struct device * controller, const struct mspi_dev_id * dev_id, const struct mspi_scramble_cfg * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = controller };
		union { uintptr_t x; const struct mspi_dev_id * val; } parm1 = { .val = dev_id };
		union { uintptr_t x; const struct mspi_scramble_cfg * val; } parm2 = { .val = cfg };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_MSPI_SCRAMBLE_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_scramble_config(controller, dev_id, cfg);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_scramble_config(controller, dev_id, cfg) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_SCRAMBLE_CONFIG, mspi_scramble_config, controller, dev_id, cfg); 	syscall__retval = mspi_scramble_config(controller, dev_id, cfg); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_SCRAMBLE_CONFIG, mspi_scramble_config, controller, dev_id, cfg, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_mspi_timing_config(const struct device * controller, const struct mspi_dev_id * dev_id, const uint32_t param_mask, void * cfg);

__pinned_func
static inline int mspi_timing_config(const struct device * controller, const struct mspi_dev_id * dev_id, const uint32_t param_mask, void * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = controller };
		union { uintptr_t x; const struct mspi_dev_id * val; } parm1 = { .val = dev_id };
		union { uintptr_t x; const uint32_t val; } parm2 = { .val = param_mask };
		union { uintptr_t x; void * val; } parm3 = { .val = cfg };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_MSPI_TIMING_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_mspi_timing_config(controller, dev_id, param_mask, cfg);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define mspi_timing_config(controller, dev_id, param_mask, cfg) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MSPI_TIMING_CONFIG, mspi_timing_config, controller, dev_id, param_mask, cfg); 	syscall__retval = mspi_timing_config(controller, dev_id, param_mask, cfg); 	sys_port_trace_syscall_exit(K_SYSCALL_MSPI_TIMING_CONFIG, mspi_timing_config, controller, dev_id, param_mask, cfg, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */

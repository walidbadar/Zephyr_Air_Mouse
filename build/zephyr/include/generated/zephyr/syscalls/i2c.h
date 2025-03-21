/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_I2C_H
#define Z_INCLUDE_SYSCALLS_I2C_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_i2c_configure(const struct device * dev, uint32_t dev_config);

__pinned_func
static inline int i2c_configure(const struct device * dev, uint32_t dev_config)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = dev_config };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_I2C_CONFIGURE);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_configure(dev, dev_config);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2c_configure(dev, dev_config) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2C_CONFIGURE, i2c_configure, dev, dev_config); 	syscall__retval = i2c_configure(dev, dev_config); 	sys_port_trace_syscall_exit(K_SYSCALL_I2C_CONFIGURE, i2c_configure, dev, dev_config, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2c_get_config(const struct device * dev, uint32_t * dev_config);

__pinned_func
static inline int i2c_get_config(const struct device * dev, uint32_t * dev_config)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t * val; } parm1 = { .val = dev_config };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_I2C_GET_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_get_config(dev, dev_config);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2c_get_config(dev, dev_config) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2C_GET_CONFIG, i2c_get_config, dev, dev_config); 	syscall__retval = i2c_get_config(dev, dev_config); 	sys_port_trace_syscall_exit(K_SYSCALL_I2C_GET_CONFIG, i2c_get_config, dev, dev_config, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2c_transfer(const struct device * dev, struct i2c_msg * msgs, uint8_t num_msgs, uint16_t addr);

__pinned_func
static inline int i2c_transfer(const struct device * dev, struct i2c_msg * msgs, uint8_t num_msgs, uint16_t addr)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct i2c_msg * val; } parm1 = { .val = msgs };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = num_msgs };
		union { uintptr_t x; uint16_t val; } parm3 = { .val = addr };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_I2C_TRANSFER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_transfer(dev, msgs, num_msgs, addr);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2c_transfer(dev, msgs, num_msgs, addr) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2C_TRANSFER, i2c_transfer, dev, msgs, num_msgs, addr); 	syscall__retval = i2c_transfer(dev, msgs, num_msgs, addr); 	sys_port_trace_syscall_exit(K_SYSCALL_I2C_TRANSFER, i2c_transfer, dev, msgs, num_msgs, addr, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2c_recover_bus(const struct device * dev);

__pinned_func
static inline int i2c_recover_bus(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_I2C_RECOVER_BUS);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_recover_bus(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2c_recover_bus(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2C_RECOVER_BUS, i2c_recover_bus, dev); 	syscall__retval = i2c_recover_bus(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_I2C_RECOVER_BUS, i2c_recover_bus, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2c_target_driver_register(const struct device * dev);

__pinned_func
static inline int i2c_target_driver_register(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_I2C_TARGET_DRIVER_REGISTER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_target_driver_register(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2c_target_driver_register(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2C_TARGET_DRIVER_REGISTER, i2c_target_driver_register, dev); 	syscall__retval = i2c_target_driver_register(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_I2C_TARGET_DRIVER_REGISTER, i2c_target_driver_register, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2c_target_driver_unregister(const struct device * dev);

__pinned_func
static inline int i2c_target_driver_unregister(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER);
	}
#endif
	compiler_barrier();
	return z_impl_i2c_target_driver_unregister(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2c_target_driver_unregister(dev) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER, i2c_target_driver_unregister, dev); 	syscall__retval = i2c_target_driver_unregister(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER, i2c_target_driver_unregister, dev, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */

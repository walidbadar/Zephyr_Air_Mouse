/* auto-generated by gen_syscalls.py, don't edit */

#include <zephyr/toolchain.h>
#include <zephyr/llext/symbol.h>

/*
 * This symbol is placed at address 0 by llext-sections.ld. Its value and
 * type is not important, we are only interested in its location.
 */
static void * const no_syscall_impl Z_GENERIC_SECTION(llext_no_syscall_impl);

/*
 * Weak references to all syscall implementations. Those not found by the
 * linker outside this file will be exported as NULL and simply fail when
 * an extension requiring them is loaded.
 */
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_adc_channel_setup;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_adc_read;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_adc_read_async;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_device_get_binding;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_device_get_by_dt_nodelabel;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_device_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_device_is_ready;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_get_pending_int;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_pin_configure;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_pin_get_config;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_pin_interrupt_configure;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_port_clear_bits_raw;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_port_get_direction;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_port_get_raw;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_port_set_bits_raw;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_port_set_masked_raw;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_gpio_port_toggle_bits;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_hwinfo_clear_reset_cause;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_hwinfo_get_device_eui64;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_hwinfo_get_device_id;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_hwinfo_get_reset_cause;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_hwinfo_get_supported_reset_cause;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_i2c_configure;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_i2c_get_config;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_i2c_recover_bus;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_i2c_target_driver_register;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_i2c_target_driver_unregister;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_i2c_transfer;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_busy_wait;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_condvar_broadcast;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_condvar_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_condvar_signal;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_condvar_wait;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_clear;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_post;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_set_masked;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_wait;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_event_wait_all;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_float_disable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_float_enable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_futex_wait;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_futex_wake;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_is_preempt_thread;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_alloc_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_get_attrs;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_num_free_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_num_used_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_peek;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_peek_at;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_purge;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_msgq_put;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_mutex_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_mutex_lock;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_mutex_unlock;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_object_access_grant;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_object_alloc;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_object_alloc_size;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_object_release;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_alloc_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_buffer_flush;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_close;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_flush;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_put;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_read;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_read_avail;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_reset;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_write;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_pipe_write_avail;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_poll;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_poll_signal_check;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_poll_signal_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_poll_signal_raise;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_poll_signal_reset;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_alloc_append;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_alloc_prepend;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_cancel_wait;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_is_empty;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_peek_head;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_queue_peek_tail;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_reschedule;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sched_current_thread_query;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sem_count_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sem_give;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sem_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sem_reset;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sem_take;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_sleep;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_stack_alloc_init;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_stack_pop;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_stack_push;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_str_out;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_abort;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_create;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_custom_data_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_custom_data_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_deadline_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_join;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_name_copy;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_name_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_priority_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_priority_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_resume;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_stack_alloc;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_stack_free;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_stack_space_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_suspend;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_timeout_expires_ticks;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_thread_timeout_remaining_ticks;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_expires_ticks;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_remaining_ticks;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_start;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_status_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_status_sync;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_stop;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_user_data_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_timer_user_data_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_uptime_ticks;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_usleep;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_wakeup;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_k_yield;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_log_buffered_cnt;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_log_filter_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_log_frontend_filter_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_log_panic;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_log_process;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_reset_line_assert;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_reset_line_deassert;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_reset_line_toggle;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_reset_status;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_attr_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_attr_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_channel_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_get_decoder;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_reconfigure_read_iodev;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_sample_fetch;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sensor_sample_fetch_chan;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_sys_clock_hw_cycles_per_sec_runtime_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_config_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_configure;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_drv_cmd;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_err_check;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_err_disable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_err_enable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_is_pending;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_rx_disable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_rx_enable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_tx_disable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_tx_enable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_irq_update;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_line_ctrl_get;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_line_ctrl_set;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_poll_in;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_poll_in_u16;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_poll_out;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_poll_out_u16;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_rx_disable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_rx_enable;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_rx_enable_u16;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_tx;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_tx_abort;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_uart_tx_u16;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_z_log_msg_simple_create_0;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_z_log_msg_simple_create_1;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_z_log_msg_simple_create_2;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_z_log_msg_static_create;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_z_sys_mutex_kernel_lock;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_z_sys_mutex_kernel_unlock;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_zephyr_fputc;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_zephyr_fwrite;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_zephyr_read_stdin;
extern __weak ALIAS_OF(no_syscall_impl) void * const z_impl_zephyr_write_stdout;

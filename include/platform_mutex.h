/**
 * Locking layer with CMSIS mutexes.
 *
 * Copyright Thinnect Inc. 2019
 * @license MIT
 * @author Raido Pahtma, Veiko Rütter
 */

#pragma once

typedef void * platform_mutex_t;

/**
 * Initialize the mutex.

 * @param name A name of mutex.
 * @param mutex A mutex.
 */
void platform_mutex_init(char * name, platform_mutex_t mutex);

/**
 * Acquire the mutex. Blocking function.

 * @param mutex A mutex.
 */
void platform_mutex_acquire(platform_mutex_t mutex);

/**
 * Release the mutex.

 * @param mutex A mutex.
 */
void platform_mutex_release(platform_mutex_t mutex);


/**
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * Copyright 2020, Anuradha Weeraman
 */

#ifndef KERNEL_H
#define KERNEL_H

#include <stdint.h>

#define STRINGIFY2(ver) #ver
#define STRINGIFY(ver) STRINGIFY2(ver)
#define CONFIG_VERSION STRINGIFY(CONFIG_VERSION_MAJOR) "." \
  STRINGIFY(CONFIG_VERSION_MINOR)

struct acpi_descriptor_v1 {
  char     signature[8];
  uint8_t  checksum;
  char     oem_id[6];
  uint8_t  revision;
  uint32_t rsdt_addr;
} __attribute__((packed));

struct acpi_descriptor_v2 {
  char     signature[8];
  uint8_t  checksum;
  char     oem_id[6];
  uint8_t  revision;
  uint32_t rsdt_addr;
  uint32_t length;
  uint64_t xsdt_addr;
  uint8_t  xchecksum;
  uint8_t  reserved[3];
} __attribute__((packed));

struct boot_device {
  uint32_t biosdev;
  uint32_t partition;
  uint32_t sub_partition;
} __attribute__((packed));

struct framebuffer {
  uint32_t addr;
  uint32_t pitch;
  uint32_t width;
  uint32_t height;
  uint8_t  bpp;
  uint8_t  type;
};

#endif

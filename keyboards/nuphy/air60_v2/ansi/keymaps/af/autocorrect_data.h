// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

// Autocorrection dictionary (4 entries):
//   ifnra   -> infra
//   isntead -> instead
//   :comit: -> commit
//   :commt: -> commit

#define AUTOCORRECT_MIN_LENGTH 5 // "ifnra"
#define AUTOCORRECT_MAX_LENGTH 7 // "isntead"
#define DICTIONARY_SIZE 64

static const uint8_t autocorrect_data[DICTIONARY_SIZE] PROGMEM = {
    0x6C, 0x0A, 0x00, 0x04, 0x26, 0x00, 0x07, 0x31, 0x00, 0x00, 0x17, 0x00, 0x4C, 0x13, 0x00, 0x10,
    0x1D, 0x00, 0x00, 0x10, 0x12, 0x06, 0x2C, 0x00, 0x82, 0x6D, 0x69, 0x74, 0x00, 0x10, 0x12, 0x06,
    0x2C, 0x00, 0x81, 0x69, 0x74, 0x00, 0x15, 0x11, 0x09, 0x0C, 0x00, 0x83, 0x6E, 0x66, 0x72, 0x61,
    0x00, 0x04, 0x08, 0x17, 0x11, 0x16, 0x0C, 0x00, 0x85, 0x6E, 0x73, 0x74, 0x65, 0x61, 0x64, 0x00
};

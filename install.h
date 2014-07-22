/*
 * Copyright (C) 2007 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RECOVERY_INSTALL_H_
#define RECOVERY_INSTALL_H_

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
//FR-550496, Add by changmei.chen@tcl.com for JrdFota upload error code to GOTU server , 2013-11-18, begin
enum { INSTALL_SUCCESS, INSTALL_ERROR, INSTALL_CORRUPT, INSTALL_NONE, INSTALL_NO_SDCARD, INSTALL_NO_UPDATE_PACKAGE, INSTALL_NO_KEY, INSTALL_SIGNATURE_ERROR };
//FR-550496, Add by changmei.chen@tcl.com for JrdFota upload error code to GOTU server , 2013-11-18, end
// Install the package specified by root_path.  If INSTALL_SUCCESS is
// returned and *wipe_cache is true on exit, caller should wipe the
// cache partition.
int install_package(const char *root_path, int* wipe_cache,
                    const char* install_file);

#ifdef __cplusplus
}
#endif

#endif  // RECOVERY_INSTALL_H_

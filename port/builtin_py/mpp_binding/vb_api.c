/* Copyright (c) 2023, Canaan Bright Sight Co., Ltd
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 * CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include "py/runtime.h"
#include "py/obj.h"
#include "mpi_vb_api.h"

#include "mpp_vb_mgmt.h"

#define FUNC_IMPL
#define FUNC_FILE "vb_func_def.h"
#include "func_def.h"

// extern mp_obj_t vb_mgmt_py_reg_exit(mp_obj_t func, mp_obj_t arg, mp_obj_t prio);
// STATIC MP_DEFINE_CONST_FUN_OBJ_3(vb_mgmt_py_reg_exit_obj, vb_mgmt_py_reg_exit);

// extern mp_obj_t vb_mgmt_py_unreg_exit(mp_obj_t func);
// STATIC MP_DEFINE_CONST_FUN_OBJ_1(vb_mgmt_py_unreg_exit_obj, vb_mgmt_py_unreg_exit);

STATIC const mp_rom_map_elem_t vb_api_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_vb_api) },
    // { MP_ROM_QSTR(MP_QSTR_vb_mgmt_py_reg_exit), MP_ROM_PTR(&vb_mgmt_py_reg_exit_obj) },
    // { MP_ROM_QSTR(MP_QSTR_vb_mgmt_py_unreg_exit), MP_ROM_PTR(&vb_mgmt_py_unreg_exit_obj) },

#define FUNC_ADD
#define FUNC_FILE "vb_func_def.h"
#include "func_def.h"
};
STATIC MP_DEFINE_CONST_DICT(vb_api_locals_dict, vb_api_locals_dict_table);

const mp_obj_module_t mp_module_vb_api = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t *)&vb_api_locals_dict,
};

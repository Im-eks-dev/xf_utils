/**
 * @file xf_version.h
 * @author catcatBlue (catcatblue@qq.com)
 * @brief xfusion 版本号.
 * @version 1.0
 * @date 2024-06-19
 *
 * Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

#ifndef __XF_VERSION_H__
#define __XF_VERSION_H__

/* ==================== [Includes] ========================================== */

#include "xf_predef.h"

/**
 * @cond XFAPI_USER
 * @ingroup group_xf_utils_common
 * @defgroup group_xf_utils_common_version xf_version
 * @brief xfusion 版本号.
 * @endcond
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

/**
 * @brief 将版本号转换为整数的宏。
 */
#define XF_VERSION_VAL(major, minor, patch) \
    (((major) << 16) | ((minor) << 8) | (patch))

/**
 * @brief 当前版本号, 返回一个整数。
 * 编译时使用。比如：XF_VERSION >= XF_VERSION_VAL(1, 0, 0)
 */
#define XF_VERSION \
    XF_VERSION_VAL(XF_VERSION_MAJOR, XF_VERSION_MINOR, XF_VERSION_PATCH)

/**
 * @brief 当前版本号, 返回一个字符串。
 */
#define XF_VERSION_STR \
    "v" XSTR(XF_VERSION_MAJOR) "." XSTR(XF_VERSION_MINOR) "." XSTR(XF_VERSION_PATCH)

#ifdef __cplusplus
} /*extern "C"*/
#endif

/**
 * End of group_xf_utils_common_version
 * @}
 */

#endif /* __XF_VERSION_H__ */

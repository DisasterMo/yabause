#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */


struct retro_core_option_v2_category option_cats_es[] = {
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "yabause_frameskip",
      "Omisión de fotogramas",
      NULL,
      "Activa la omisión de fotogramas. Debería mejorar el rendimiento.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "yabause_force_hle_bios",
      "Forzar BIOS HLE (es necesario reiniciar)",
      NULL,
      "Utiliza esta opción por tu cuenta y riesgo, ya que produce más problemas de los que resuelve.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "yabause_addon_cartridge",
      "Cartucho de expansión (es necesario reiniciar)",
      NULL,
      "Selecciona el cartucho de ampliación.",
      NULL,
      NULL,
      {
         { "none", NULL },
         { "1M_ram", "RAM de 1 MB" },
         { "4M_ram", "RAM de 4 MB" },
         { NULL, NULL},
      },
      "none"
   },
   {
      "yabause_multitap_port1",
      "Adaptador para seis jugadores en el puerto 1",
      NULL,
      "Activar un multitap en el puerto 1.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "yabause_multitap_port2",
      "Adaptador para seis jugadores en el puerto 2",
      NULL,
      "Activar un multitap en el puerto 2.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
#ifdef HAVE_THREADS
   {
      "yabause_numthreads",
      "Número de hilos (es necesario reiniciar)",
      NULL,
      "Este valor puede mejorar el rendimiento en función de tu CPU.",
      NULL,
      NULL,
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { "16", NULL },
         { "32", NULL },
         { NULL, NULL},
      },
      "4"
   },
#endif
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */


struct retro_core_option_v2_category option_cats_tr[] = {
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "yabause_frameskip",
      "Kare Atlama",
      NULL,
      "Kare atlamayı etkinleştirir, performansa yardımcı olması gerekir.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "yabause_force_hle_bios",
      "HLE BIOS'u zorla (Yeniden Başlatılmalı)",
      NULL,
      "Kendi sorumluluğunuzda kullanın, çözdüğünden daha fazla soruna neden oluyor.",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "yabause_addon_cartridge",
      "Kartuş Eklentisi (Yeniden Başlatılmalı)",
      NULL,
      "Ek kartuşu seçin.",
      NULL,
      NULL,
      {
         { "none", NULL },
         { "1M_ram", NULL },
         { "4M_ram", NULL },
         { NULL, NULL},
      },
      "none"
   },
   {
      "yabause_multitap_port1",
      "Bağlantı Noktası 1'deki 6Player Adaptörü",
      NULL,
      "1. bağlantı noktasında multitap'ı etkinleştir",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "yabause_multitap_port2",
      "Bağlantı Noktası 2'deki 6Player Adaptörü",
      NULL,
      "2. bağlantı noktasında multitap'ı etkinleştir",
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
#ifdef HAVE_THREADS
   {
      "yabause_numthreads",
      "İş Parçacığı Sayısı (Yeniden Başlatılmalı)",
      NULL,
      "CPU'nuza bağlı olarak, bu değeri değiştirmek performansa yardımcı olabilir.",
      NULL,
      NULL,
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { "16", NULL },
         { "32", NULL },
         { NULL, NULL},
      },
      "4"
   },
#endif
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_SLOVAK */

/* RETRO_LANGUAGE_PERSIAN */

/* RETRO_LANGUAGE_HEBREW */

/* RETRO_LANGUAGE_ASTURIAN */

/* RETRO_LANGUAGE_FINNISH */

#ifdef __cplusplus
}
#endif

#endif

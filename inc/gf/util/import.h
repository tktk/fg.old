#ifndef GF_UTIL_IMPORT_H
#define GF_UTIL_IMPORT_H

#ifndef GFEXPORT
#   if defined OS_LINUX // OS
#       define GFEXPORT extern "C"
#   elif defined OS_WINDOWS // OS
#       define GFEXPORT extern "C" __declspec( dllimport )
#   else   // OS
#       error 未対応のOS
#   endif  // OS
#endif  // GFEXPORT

#endif  // GF_UTIL_IMPORT_H

#ifndef FG_UTIL_IMPORT_H
#define FG_UTIL_IMPORT_H

#ifndef FGEXPORT
#   if defined OS_LINUX // OS
#       define FGEXPORT extern "C"
#   elif defined OS_WINDOWS // OS
#       define FGEXPORT extern "C" __declspec( dllimport )
#   else   // OS
#       error 未対応のOS
#   endif  // OS
#endif  // FGEXPORT

#endif  // FG_UTIL_IMPORT_H

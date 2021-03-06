/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/tiaccountkit-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/tiaccountkit-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.accountkit.AccountkitModule.h"


#line 13 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/tiaccountkit-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class AccountkitBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AccountkitBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AccountkitBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 30,
      MAX_WORD_LENGTH = 30,
      MIN_HASH_VALUE = 30,
      MAX_HASH_VALUE = 30
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 15 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/tiaccountkit-generated/KrollGeneratedBindings.gperf"
      {"ti.accountkit.AccountkitModule", ::ti::accountkit::AccountkitModule::bindProxy, ::ti::accountkit::AccountkitModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/25/yvdn9h053sv3htdkzq8558k40000gn/T/fuerst/tiaccountkit-generated/KrollGeneratedBindings.gperf"


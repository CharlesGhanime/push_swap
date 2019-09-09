# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

#MAN COLORS
export LESS_TERMCAP_mb=$'\E[01;31m'
export LESS_TERMCAP_md=$'\E[01;31m'
export LESS_TERMCAP_me=$'\E[0m'
export LESS_TERMCAP_se=$'\E[0m'
export LESS_TERMCAP_so=$'\E[01;44:;33m'
export LESS_TERMCAP_ue=$'\E[0m'
export LESS_TERMCAP_us=$'\E[01;32m'

# Path to your oh-my-zsh installation.
export ZSH="/Users/cghanime/.oh-my-zsh"

# Set name of the theme to load --- if set to "random", it will
# load a random theme each time oh-my-zsh is loaded, in which case,
# to know which specific one was loaded, run: echo $RANDOM_THEME
# See https://github.com/robbyrussell/oh-my-zsh/wiki/Themes
ZSH_THEME="darkblood"

# Set list of themes to pick from when loading at random
# Setting this variable when ZSH_THEME=random will cause zsh to load
# a theme from this variable instead of looking in ~/.oh-my-zsh/themes/
# If set to an empty array, this variable will have no effect.
# ZSH_THEME_RANDOM_CANDIDATES=( "robbyrussell" "agnoster" )

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion.
# Case-sensitive completion must be off. _ and - will be interchangeable.
# HYPHEN_INSENSITIVE="true"

# Uncomment the following line to disable bi-weekly auto-update checks.
# DISABLE_AUTO_UPDATE="true"

# Uncomment the following line to change how often to auto-update (in days).
# export UPDATE_ZSH_DAYS=13

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
# ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
# COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# You can set one of the optional three formats:
# "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# or set a custom format using the strftime function format specifications,
# see 'man strftime' for details.
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Which plugins would you like to load?
# Standard plugins can be found in ~/.oh-my-zsh/plugins/*
# Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
# Example format: plugins=(rails git textmate ruby lighthouse)
# Add wisely, as too many plugins slow down shell startup.
plugins=(
  git
)

source $ZSH/oh-my-zsh.sh

# User configuration

# export MANPATH="/usr/local/man:$MANPATH"

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# ssh
# export SSH_KEY_PATH="~/.ssh/rsa_id"

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
# Example aliases
# alias zshconfig="mate ~/.zshrc"
# alias ohmyzsh="mate ~/.oh-my-zsh"
#
################################################################################
#============================== REGULAR EXPRESSIONS ==========================##
################################################################################
##    . : any characters except new line
##   \d : digits
##   \D : not a digits
##   \w : word character (a-z, A-Z, 0-9, _)
##   \W : not a word character
##   \s : whitespace (space, tab, newline)
##   \S : not a whitespace
##   \b : word boundary
##   \B : not a word boundary
##    ^ : begining of string
##    $ : end of string
##   [] : matches characters in brackets
## [^ ] : matches characters not in brakets
## 
## 
##
##
##
################################################################################
##============================ Cool Shell Commands ===========================##
################################################################################
##                                                                            ##
##                             Search and replace :                           ##
##           sed -i '' 's/text_to_be_replaced/text_replacing/g' *.c           ##
##                                                                            ##
################################################################################
## ============================= Valgrind Options =========================== ##
################################################################################
## --tool=memcheck, --leak-check=yes/full,                                    ##
## --show-leak-kinds=all, --track-origins=yes, --show-reachable=yes,          ##
## --error-limit=no                                                           ##
## -v & -vv = verbose & even more verbose                                     ##
## -g = compile in debugging mode                                             ##
## -s <==> --show-error-list=yes                                              ##
################################################################################
## ============================ Fsanitize Options =========================== ##
################################################################################
##                  -g3 -fsanitize=address,undefined to gcc                   ##
##                  -fsanitize=address/-fsanitize=undefined                   ##
##                  -ggdb uses gdb to debug                                   ##
##                  -fno-omit-frame-pointer                                   ##
##                                                                            ##
##                                                                            ##
################################################################################
##=================================== ALIASES ================================##
################################################################################
alias cc="gcc -Wall -Wextra -Werror -Weverything"
alias gfs="gcc -Wall -Werror -Wextra -Weverything -ggdb -g3
-fsanitize=address,undefined -fno-omit-frame-pointer"
alias normi="Norminette -R CheckForbiddenSourceHeader"
alias flags="gcc -g3 -Wall -Wextra -Werror"
alias vg="valgrind --tool=memcheck --leak-check=full"
alias vgf="valgrind -g -vv --tool=memcheck --leak-check=full
--show-leak-kinds=all --track-origins=yes --show-reachable=yes --error-limit=no"
alias 42fc="sh ~/42/42FileChecker/42FileChecker.sh"
################################################################################

#source /Users/cghanime/.vimrc
export PATH=$HOME/.brew/bin:$PATH
export PATH=$HOME/.brew/bin:$PATH

################################################################################
##========================== Valgrind --Help Man ============================ ##
################################################################################
## usage: valgrind [options] prog-and-args
##
##  tool-selection option, with default in [ ]:
##    --tool=<name>             use the Valgrind tool named <name> [memcheck]
##
##  basic user options for all Valgrind tools, with defaults in [ ]:
##    -h --help                 show this message
##    --help-debug              show this message, plus debugging options
##    --version                 show version
##    -q --quiet                run silently; only print error msgs
##    -v --verbose              be more verbose -- show misc extra info
##    --trace-children=no|yes   Valgrind-ise child processes (follow execve)? [no]
##    --trace-children-skip=patt1,patt2,...    specifies a list of executables
##                              that --trace-children=yes should not trace into
##    --trace-children-skip-by-arg=patt1,patt2,...   same as --trace-children-skip=
##                              but check the argv[] entries for children, rather
##                              than the exe name, to make a follow/no-follow decision
##    --child-silent-after-fork=no|yes omit child output between fork & exec? [no]
##    --vgdb=no|yes|full        activate gdbserver? [yes]
##                              full is slower but provides precise watchpoint/step
##    --vgdb-error=<number>     invoke gdbserver after <number> errors [999999999]
##                              to get started quickly, use --vgdb-error=0
##                              and follow the on-screen directions
##    --vgdb-stop-at=event1,event2,... invoke gdbserver for given events [none]
##         where event is one of:
##           startup exit valgrindabexit all none
##    --track-fds=no|yes        track open file descriptors? [no]
##    --time-stamp=no|yes       add timestamps to log messages? [no]
##    --log-fd=<number>         log messages to file descriptor [2=stderr]
##    --log-file=<file>         log messages to <file>
##    --log-socket=ipaddr:port  log messages to socket ipaddr:port
##
##  user options for Valgrind tools that report errors:
##    --xml=yes                 emit error output in XML (some tools only)
##    --xml-fd=<number>         XML output to file descriptor
##    --xml-file=<file>         XML output to <file>
##    --xml-socket=ipaddr:port  XML output to socket ipaddr:port
##    --xml-user-comment=STR    copy STR verbatim into XML output
##    --demangle=no|yes         automatically demangle C++ names? [yes]
##    --num-callers=<number>    show <number> callers in stack traces [12]
##    --error-limit=no|yes      stop showing new errors if too many? [yes]
##    --exit-on-first-error=no|yes exit code on the first error found? [no]
##    --error-exitcode=<number> exit code to return if errors found [0=disable]
##    --error-markers=<begin>,<end> add lines with begin/end markers before/after
##                              each error output in plain text mode [none]
##    --show-error-list=no|yes  show detected errors list and
##                              suppression counts at exit [no]
##    -s                        same as --show-error-list=yes
##    --keep-debuginfo=no|yes   Keep symbols etc for unloaded code [no]
##                              This allows saved stack traces (e.g. memory leaks)
##                              to include file/line info for code that has been
##                              dlclose'd (or similar)
##    --show-below-main=no|yes  continue stack traces below main() [no]
##    --default-suppressions=yes|no
##                              load default suppressions [yes]
##    --suppressions=<filename> suppress errors described in <filename>
##    --gen-suppressions=no|yes|all    print suppressions for errors? [no]
##    --input-fd=<number>       file descriptor for input [0=stdin]
##    --dsymutil=no|yes         run dsymutil on Mac OS X when helpful? [yes]
##    --max-stackframe=<number> assume stack switch for SP changes larger
##                              than <number> bytes [2000000]
##    --main-stacksize=<number> set size of main thread's stack (in bytes)
##                              [min(max(current 'ulimit' value,1MB),16MB)]
##
##  user options for Valgrind tools that replace malloc:
##    --alignment=<number>      set minimum alignment of heap allocations [16]
##    --redzone-size=<number>   set minimum size of redzones added before/after
##                              heap blocks (in bytes). [16]
##    --xtree-memory=none|allocs|full   profile heap memory in an xtree [none]
##                              and produces a report at the end of the execution
##                              none: no profiling, allocs: current allocated
##                              size/blocks, full: profile current and cumulative
##                              allocated size/blocks and freed size/blocks.
##    --xtree-memory-file=<file>   xtree memory report file [xtmemory.kcg.%p]
##
##  uncommon user options for all Valgrind tools:
##    --fullpath-after=         (with nothing after the '=')
##                              show full source paths in call stacks
##    --fullpath-after=string   like --fullpath-after=, but only show the
##                              part of the path after 'string'.  Allows removal
##                              of path prefixes.  Use this flag multiple times
##                              to specify a set of prefixes to remove.
##    --extra-debuginfo-path=path    absolute path to search for additional
##                              debug symbols, in addition to existing default
##                              well known search paths.
##    --debuginfo-server=ipaddr:port    also query this server
##                              (valgrind-di-server) for debug symbols
##    --allow-mismatched-debuginfo=no|yes  [no]
##                              for the above two flags only, accept debuginfo
##                              objects that don't "match" the main object
##    --smc-check=none|stack|all|all-non-file [all-non-file]
##                              checks for self-modifying code: none, only for
##                              code found in stacks, for all code, or for all
##                              code except that from file-backed mappings
##    --read-inline-info=yes|no read debug info about inlined function calls
##                              and use it to do better stack traces.
##                              [yes] on Linux/Android/Solaris for the tools
##                              Memcheck/Massif/Helgrind/DRD only.
##                              [no] for all other tools and platforms.
##    --read-var-info=yes|no    read debug info on stack and global variables
##                              and use it to print better error messages in
##                              tools that make use of it (Memcheck, Helgrind,
##                              DRD) [no]
##    --vgdb-poll=<number>      gdbserver poll max every <number> basic blocks [5000] 
##    --vgdb-shadow-registers=no|yes   let gdb see the shadow registers [no]
##    --vgdb-prefix=<prefix>    prefix for vgdb FIFOs [/var/folders/zz/zyxvpxvq6csfxvn_n0003xy0000zgh/T//vgdb-pipe]
##    --run-libc-freeres=no|yes free up glibc memory at exit on Linux? [yes]
##    --run-cxx-freeres=no|yes  free up libstdc++ memory at exit on Linux
##                              and Solaris? [yes]
##    --sim-hints=hint1,hint2,...  activate unusual sim behaviours [none] 
##         where hint is one of:
##           lax-ioctls lax-doors fuse-compatible enable-outer
##           no-inner-prefix no-nptl-pthread-stackcache fallback-llsc none
##    --fair-sched=no|yes|try   schedule threads fairly on multicore systems [no]
##    --kernel-variant=variant1,variant2,...
##         handle non-standard kernel variants [none]
##         where variant is one of:
##           bproc android-no-hw-tls
##           android-gpu-sgx5xx android-gpu-adreno3xx none
##    --merge-recursive-frames=<number>  merge frames between identical
##           program counters in max <number> frames) [0]
##    --num-transtab-sectors=<number> size of translated code cache [32]
##           more sectors may increase performance, but use more memory.
##    --avg-transtab-entry-size=<number> avg size in bytes of a translated
##           basic block [0, meaning use tool provided default]
##    --aspace-minaddr=0xPP     avoid mapping memory below 0xPP [guessed]
##    --valgrind-stacksize=<number> size of valgrind (host) thread's stack
##                               (in bytes) [1048576]
##    --show-emwarns=no|yes     show warnings about emulation limits? [no]
##    --require-text-symbol=:sonamepattern:symbolpattern    abort run if the
##                              stated shared object doesn't have the stated
##                              text symbol.  Patterns can contain ? and *.
##    --soname-synonyms=syn1=pattern1,syn2=pattern2,... synonym soname
##              specify patterns for function wrapping or replacement.
##              To use a non-libc malloc library that is
##                  in the main exe:  --soname-synonyms=somalloc=NONE
##                  in libxyzzy.so:   --soname-synonyms=somalloc=libxyzzy.so
##    --sigill-diagnostics=yes|no  warn about illegal instructions? [yes]
##    --unw-stack-scan-thresh=<number>   Enable stack-scan unwind if fewer
##                  than <number> good frames found  [0, meaning "disabled"]
##                  NOTE: stack scanning is only available on arm-linux.
##    --unw-stack-scan-frames=<number>   Max number of frames that can be
##                  recovered by stack scanning [5]
##    --resync-filter=no|yes|verbose [yes on MacOS, no on other OSes]
##              attempt to avoid expensive address-space-resync operations
##    --max-threads=<number>    maximum number of threads that valgrind can
##                              handle [500]
##
##  user options for Memcheck:
##    --leak-check=no|summary|full     search for memory leaks at exit?  [summary]
##    --leak-resolution=low|med|high   differentiation of leak stack traces [high]
##    --show-leak-kinds=kind1,kind2,.. which leak kinds to show?
##                                            [definite,possible]
##    --errors-for-leak-kinds=kind1,kind2,..  which leak kinds are errors?
##                                            [definite,possible]
##        where kind is one of:
##          definite indirect possible reachable all none
##    --leak-check-heuristics=heur1,heur2,... which heuristics to use for
##        improving leak search false positive [all]
##        where heur is one of:
##          stdstring length64 newarray multipleinheritance all none
##    --show-reachable=yes             same as --show-leak-kinds=all
##    --show-reachable=no --show-possibly-lost=yes
##                                     same as --show-leak-kinds=definite,possible
##    --show-reachable=no --show-possibly-lost=no
##                                     same as --show-leak-kinds=definite
##    --xtree-leak=no|yes              output leak result in xtree format? [no]
##    --xtree-leak-file=<file>         xtree leak report file [xtleak.kcg.%p]
##    --undef-value-errors=no|yes      check for undefined value errors [yes]
##    --track-origins=no|yes           show origins of undefined values? [no]
##    --partial-loads-ok=no|yes        too hard to explain here; see manual [yes]
##    --expensive-definedness-checks=no|auto|yes
##                                     Use extra-precise definedness tracking [auto]
##    --freelist-vol=<number>          volume of freed blocks queue     [20000000]
##    --freelist-big-blocks=<number>   releases first blocks with size>= [1000000]
##    --workaround-gcc296-bugs=no|yes  self explanatory [no].  Deprecated.
##                                     Use --ignore-range-below-sp instead.
##    --ignore-ranges=0xPP-0xQQ[,0xRR-0xSS]   assume given addresses are OK
##    --ignore-range-below-sp=<number>-<number>  do not report errors for
##                                     accesses at the given offsets below SP
##    --malloc-fill=<hexnumber>        fill malloc'd areas with given value
##    --free-fill=<hexnumber>          fill free'd areas with given value
##    --keep-stacktraces=alloc|free|alloc-and-free|alloc-then-free|none
##        stack trace(s) to keep for malloc'd/free'd areas       [alloc-and-free]
##    --show-mismatched-frees=no|yes   show frees that don't match the allocator? [yes]
##
##  Extra options read from ~/.valgrindrc, $VALGRIND_OPTS, ./.valgrindrc
##
##  Memcheck is Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
##  Valgrind is Copyright (C) 2000-2017, and GNU GPL'd, by Julian Seward et al.
##  LibVEX is Copyright (C) 2004-2017, and GNU GPL'd, by OpenWorks LLP et al.
##
##  Bug reports, feedback, admiration, abuse, etc, to: www.valgrind.org.
#
################################################################################
##========================== GCC Debugging Options ========================== ##
################################################################################

## 3.9 Options for Debugging Your Program
## To tell GCC to emit extra information for use by a debugger, 
## in almost all cases you need only to add -g to your other options.
## 
## GCC allows you to use -g with -O. The shortcuts taken by optimized code may
## occasionally be surprising: some variables you declared may not exist at all;
## flow of control may briefly move where you did not expect it; some statements
## may not be executed because they compute constant results or their values are
## already at hand; some statements may execute in different places because they
## have been moved out of loops. Nevertheless it is possible to debug optimized
## output. This makes it reasonable to use the optimizer for programs that might
## have bugs.
## 
## If you are not using some other optimization option, consider using -Og
## (see Optimize Options) with -g. With no -O option at all, some compiler passes
## that collect information useful for debugging do not run at all, so that -Og
## may result in a better debugging experience.
## 
## -g
## Produce debugging information in the operating system’s native format (stabs,
## COFF, XCOFF, or DWARF). GDB can work with this debugging information.
## 
## On most systems that use stabs format, -g enables use of extra debugging
## information that only GDB can use; this extra information makes debugging
## work better in GDB but probably makes other debuggers crash or refuse to
## read the program. If you want to control for certain whether to generated
## the extra information, use -gstabs+, -gstabs, -gxcoff+, -gxcoff, or -gvms
## (see below).
## 
## -ggdb
## Produce debugging information for use by GDB. This means to use the most
## expressive format available (DWARF, stabs, or the native format if neither
## of those are supported), including GDB extensions if at all possible.
## 
## -gdwarf
## -gdwarf-version
## Produce debugging information in DWARF format (if that is supported).
## The value of version may be either 2, 3, 4 or 5; the default version for most
## targets is 4. DWARF Version 5 is only experimental.
## 
## Note that with DWARF Version 2, some ports require and always use some
## non-conflicting DWARF 3 extensions in the unwind tables.
## 
## Version 4 may require GDB 7.0 and -fvar-tracking-assignments for maximum benefit.
## 
## GCC no longer supports DWARF Version 1, which is substantially different
## than Version 2 and later. For historical reasons, some other DWARF-related
## options such as -fno-dwarf2-cfi-asm) retain a reference to DWARF Version 2 in 
## their names, but apply to all currently-supported versions of DWARF.
## 
## -gstabs
## Produce debugging information in stabs format (if that is supported), 
## without GDB extensions. This is the format used by DBX on most BSD systems. 
## On MIPS, Alpha and System V Release 4 systems this option produces stabs 
## debugging output that is not understood by DBX. On System V Release 4 systems 
## this option requires the GNU assembler.
## 
## -gstabs+
## Produce debugging information in stabs format (if that is supported), using 
## GNU extensions understood only by the GNU debugger (GDB). The use of these 
## extensions is likely to make other debuggers crash or refuse to read the program.
## 
## -gxcoff
## Produce debugging information in XCOFF format (if that is supported). 
## This is the format used by the DBX debugger on IBM RS/6000 systems.
## 
## -gxcoff+
## Produce debugging information in XCOFF format (if that is supported), 
## using GNU extensions understood only by the GNU debugger (GDB). 
## The use of these extensions is likely to make other debuggers crash 
## or refuse to read the program, and may cause assemblers other than the GNU 
## assembler (GAS) to fail with an error.
## 
## -gvms
## Produce debugging information in Alpha/VMS debug format 
## (if that is supported). This is the format used by DEBUG on Alpha/VMS systems.
## 
## -glevel
## -ggdblevel
## -gstabslevel
## -gxcofflevel
## -gvmslevel
## Request debugging information and also use level to specify how much information. 
## The default level is 2.
## 
## Level 0 produces no debug information at all. Thus, -g0 negates -g.
## 
## Level 1 produces minimal information, enough for making backtraces in 
## parts of the program that you don’t plan to debug. This includes descriptions 
## of functions and external variables, and line number tables, but no information 
## about local variables.
## 
## Level 3 includes extra information, such as all the macro definitions present 
## in the program. Some debuggers support macro expansion when you use -g3.
## 
## If you use multiple -g options, with or without level numbers, the last such 
## option is the one that is effective.
## 
## -gdwarf does not accept a concatenated debug level, to avoid confusion with 
## -gdwarf-level. Instead use an additional -glevel option to change the debug 
## level for DWARF.
## 
## -fno-eliminate-unused-debug-symbols
## By default, no debug information is produced for symbols that are not 
## actually used. Use this option if you want debug information for all symbols.
## 
## -femit-class-debug-always
## Instead of emitting debugging information for a C++ class in only one object 
## file, emit it in all object files using the class. This option should be used 
## only with debuggers that are unable to handle the way GCC normally emits 
## debugging information for classes because using this option increases the 
## size of debugging information by as much as a factor of two.
## 
## -fno-merge-debug-strings
## Direct the linker to not merge together strings in the debugging information 
## that are identical in different object files. Merging is not supported by all 
## assemblers or linkers. Merging decreases the size of the debug information in 
## the output file at the cost of increasing link processing time. Merging is 
## enabled by default.
## 
## -fdebug-prefix-map=old=new
## When compiling files residing in directory old, record debugging information 
## describing them as if the files resided in directory new instead. This can be 
## used to replace a build-time path with an install-time path in the debug info. 
## It can also be used to change an absolute path to a relative path by using . 
## for new. This can give more reproducible builds, which are location independent, 
## but may require an extra command to tell GDB where to find the source files. 
## See also -ffile-prefix-map.
## 
## -fvar-tracking
## Run variable tracking pass. It computes where variables are stored at each 
## position in code. Better debugging information is then generated 
## (if the debugging information format supports this information).
## 
## It is enabled by default when compiling with optimization (-Os, -O, -O2, …), 
## debugging information (-g) and the debug info format supports it.
## 
## -fvar-tracking-assignments
## Annotate assignments to user variables early in the compilation and attempt 
## to carry the annotations over throughout the compilation all the way to the 
## end, in an attempt to improve debug information while optimizing. Use of 
## -gdwarf-4 is recommended along with it.
## 
## It can be enabled even if var-tracking is disabled, in which case annotations 
## are created and maintained, but discarded at the end. By default, this flag is 
## enabled together with -fvar-tracking, except when selective scheduling is enabled.
## 
## -gsplit-dwarf
## Separate as much DWARF debugging information as possible into a separate output 
## file with the extension .dwo. This option allows the build system to avoid linking 
## files with debug information. To be useful, this option requires a debugger 
## capable of reading .dwo files.
## 
## -gdescribe-dies
## Add description attributes to some DWARF DIEs that have no name attribute, 
## such as artificial variables, external references and call site parameter DIEs.
## 
## -gpubnames
## Generate DWARF .debug_pubnames and .debug_pubtypes sections.
## 
## -ggnu-pubnames
## Generate .debug_pubnames and .debug_pubtypes sections in a format suitable for 
## conversion into a GDB index. This option is only useful with a linker that can 
## produce GDB index version 7.
## 
## -fdebug-types-section
## When using DWARF Version 4 or higher, type DIEs can be put into their own .
## debug_types section instead of making them part of the .debug_info section. 
## It is more efficient to put them in a separate comdat section since the linker 
## can then remove duplicates. But not all DWARF consumers support .debug_types 
## sections yet and on some objects .debug_types produces larger instead of 
## smaller debugging information.
## 
## -grecord-gcc-switches
## -gno-record-gcc-switches
## This switch causes the command-line options used to invoke the compiler that 
## may affect code generation to be appended to the DW_AT_producer attribute in 
## DWARF debugging information. The options are concatenated with spaces 
## separating them from each other and from the compiler version. It is enabled 
## by default. See also -frecord-gcc-switches for another way of storing compiler 
## options into the object file.
## 
## -gstrict-dwarf
## Disallow using extensions of later DWARF standard version than selected with 
## -gdwarf-version. On most targets using non-conflicting DWARF extensions from 
## later standard versions is allowed.
## 
## -gno-strict-dwarf
## Allow using extensions of later DWARF standard version than selected with 
## -gdwarf-version.
## 
## -gas-loc-support
## Inform the compiler that the assembler supports .loc directives. 
## It may then use them for the assembler to generate DWARF2+ line number tables.
## 
## This is generally desirable, because assembler-generated line-number tables 
## are a lot more compact than those the compiler can generate itself.
## 
## This option will be enabled by default if, at GCC configure time, 
## the assembler was found to support such directives.
## 
## -gno-as-loc-support
## Force GCC to generate DWARF2+ line number tables internally, 
## if DWARF2+ line number tables are to be generated.
## 
## -gas-locview-support
## Inform the compiler that the assembler supports view assignment and reset 
## assertion checking in .loc directives.
## 
## This option will be enabled by default if, at GCC configure time, the 
## assembler was found to support them.
## 
## -gno-as-locview-support
## Force GCC to assign view numbers internally, if -gvariable-location-views are 
## explicitly requested.
## 
## -gcolumn-info
## -gno-column-info
## Emit location column information into DWARF debugging information, 
## rather than just file and line. This option is enabled by default.
## 
## -gstatement-frontiers
## -gno-statement-frontiers
## This option causes GCC to create markers in the internal 
## representation at the beginning of statements, and to keep them roughly in 
## place throughout compilation, using them to guide the output of is_stmt markers 
## in the line number table. This is enabled by default when compiling with 
## optimization (-Os, -O, -O2, …), and outputting DWARF 2 debug information at the normal level.
## 
## -gvariable-location-views
## -gvariable-location-views=incompat5
## -gno-variable-location-views
## Augment variable location lists with progressive view numbers implied from the 
## line number table. This enables debug information consumers to inspect state at 
## certain points of the program, even if no instructions associated with the 
## corresponding source locations are present at that point. If the assembler 
## lacks support for view numbers in line number tables, this will cause the 
## compiler to emit the line number table, which generally makes them somewhat 
## less compact. The augmented line number tables and location lists are fully 
## backward-compatible, so they can be consumed by debug information consumers 
## that are not aware of these augmentations, but they won’t derive any benefit 
## from them either.
## 
## This is enabled by default when outputting DWARF 2 debug information at the 
## normal level, as long as there is assembler support, -fvar-tracking-assignments 
## is enabled and -gstrict-dwarf is not. When assembler support is not available, 
## this may still be enabled, but it will force GCC to output internal line number 
## tables, and if -ginternal-reset-location-views is not enabled, that will most 
## certainly lead to silently mismatching location views.
## 
## There is a proposed representation for view numbers that is not backward 
## compatible with the location list format introduced in DWARF 5, that can be 
## enabled with -gvariable-location-views=incompat5. This option may be removed 
## in the future, is only provided as a reference implementation of the proposed 
## representation. Debug information consumers are not expected to support this 
## extended format, and they would be rendered unable to decode location lists 
## using it.
## 
## -ginternal-reset-location-views
## -gnointernal-reset-location-views
## Attempt to determine location views that can be omitted from location view 
## lists. This requires the compiler to have very accurate insn length estimates, 
## which isn’t always the case, and it may cause incorrect view lists to be 
## generated silently when using an assembler that does not support location 
## view lists. The GNU assembler will flag any such error as a view number 
## mismatch. This is only enabled on ports that define a reliable estimation 
## function.
## 
## -ginline-points
## -gno-inline-points
## Generate extended debug information for inlined functions. Location view 
## tracking markers are inserted at inlined entry points, so that address and 
## view numbers can be computed and output in debug information. This can be 
## enabled independently of location views, in which case the view numbers won’t 
## be output, but it can only be enabled along with statement frontiers, and it is 
## only enabled by default if location views are enabled.
## 
## -gz[=type]
## Produce compressed debug sections in DWARF format, if that is supported. 
## If type is not given, the default type depends on the capabilities of the 
## assembler and linker used. type may be one of ‘none’ (don’t compress debug 
## sections), ‘zlib’ (use zlib compression in ELF gABI format), or ‘zlib-gnu’ 
## (use zlib compression in traditional GNU format). If the linker doesn’t 
## support writing compressed debug sections, the option is rejected. Otherwise, 
## if the assembler does not support them, -gz is silently ignored when producing 
## object files.
## 
## -femit-struct-debug-baseonly
## Emit debug information for struct-like types only when the base name of the 
## compilation source file matches the base name of file in which the struct is 
## defined.
## 
## This option substantially reduces the size of debugging information, 
## but at significant potential loss in type information to the debugger. 
## See -femit-struct-debug-reduced for a less aggressive option. 
## See -femit-struct-debug-detailed for more detailed control.
## 
## This option works only with DWARF debug output.
## 
## -femit-struct-debug-reduced
## Emit debug information for struct-like types only when the base name of the 
## compilation source file matches the base name of file in which the type is 
## defined, unless the struct is a template or defined in a system header.
## 
## This option significantly reduces the size of debugging information, 
## with some potential loss in type information to the debugger. 
## See -femit-struct-debug-baseonly for a more aggressive option. 
## See -femit-struct-debug-detailed for more detailed control.
## 
## This option works only with DWARF debug output.
## 
## -femit-struct-debug-detailed[=spec-list]
## Specify the struct-like types for which the compiler generates debug information. 
## The intent is to reduce duplicate struct debug information between different 
## object files within the same program.
## 
## This option is a detailed version of -femit-struct-debug-reduced and 
## -femit-struct-debug-baseonly, which serves for most needs.
## 
## A specification has the syntax
## [‘dir:’|‘ind:’][‘ord:’|‘gen:’](‘any’|‘sys’|‘base’|‘none’)
## 
## The optional first word limits the specification to structs that are used 
## directly (‘dir:’) or used indirectly (‘ind:’). A struct type is used directly 
## when it is the type of a variable, member. Indirect uses arise through pointers 
## to structs. That is, when use of an incomplete struct is valid, the use is 
## indirect. An example is ‘struct one direct; struct two * indirect;’.
## 
## The optional second word limits the specification to ordinary structs (‘ord:’) 
## or generic structs (‘gen:’). Generic structs are a bit complicated to explain. 
## For C++, these are non-explicit specializations of template classes, 
## or non-template classes within the above. Other programming languages have generics, 
## but -femit-struct-debug-detailed does not yet implement them.
## 
## The third word specifies the source files for those structs for which the 
## compiler should emit debug information. The values ‘none’ and ‘any’ have the 
## normal meaning. The value ‘base’ means that the base of name of the file in 
## which the type declaration appears must match the base of the name of the main 
## compilation file. In practice, this means that when compiling foo.c, debug 
## information is generated for types declared in that file and foo.h, but not 
## other header files. The value ‘sys’ means those types satisfying ‘base’ or 
## declared in system or compiler headers.
## 
## You may need to experiment to determine the best settings for your application.
## 
## The default is -femit-struct-debug-detailed=all.
## 
## This option works only with DWARF debug output.
## 
## -fno-dwarf2-cfi-asm
## Emit DWARF unwind info as compiler generated .eh_frame section instead of using GAS .cfi_* directives.
## 
## -fno-eliminate-unused-debug-types
## Normally, when producing DWARF output, GCC avoids producing debug symbol 
## output for types that are nowhere used in the source file being compiled. 
## Sometimes it is useful to have GCC emit debugging information for all types 
## declared in a compilation unit, regardless of whether or not they are actually 
## used in that compilation unit, for example if, in the debugger, you want to 
## cast a value to a type that is not actually used in your program (but is declared).
## More often, however, this results in a significant amount of wasted space.

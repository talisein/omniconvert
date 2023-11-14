
subdir('libbig_int')

srcs = [
  'common.c',
  'cheat.c',
  'arcfour.c',
  'cb2_crypto.c',
  'gs3.c',
  'ar2.c',
  'armax.c',
  'translate.c',
  'crc32.c',
  'armlist.c',
  'cbc.c',
  'p2m.c',
  'scf.c',
]

if host_machine.system() == 'windows'
  windows = import('windows')
  omniconvert_win_res = windows.compile_resources('resource.rc',
                                                  depend_files: 'oc.ico')

  win_exe = executable('omniconvert', srcs, omniconvert_win_res, 'omniconvert.c',
                       win_subsystem: 'windows',
                       dependencies: bigint_dep,
                       install: true)
else
  omniconvert_lib = static_library('omniconvert', srcs,
                                   dependencies: bigint_dep,
                                   install: false)
endif

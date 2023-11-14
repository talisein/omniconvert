
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

conf_data = configuration_data()
conf_data.set('version', meson.project_version())
conf = configure_file(input: 'common.h.in',
                      output: 'common.h',
                      configuration: conf_data)


if host_machine.system() == 'windows'
  windows = import('windows')

  omniconvert_win_res = windows.compile_resources('resource.rc',
                                                  depend_files: ['oc.ico', 'resource.h'])

  win_exe = executable('omniconvert', srcs, omniconvert_win_res, conf, 'omniconvert.c',
                       win_subsystem: 'windows',
                       dependencies: bigint_dep,
                       install: true)
else
  omniconvert_lib = static_library('omniconvert', srcs, conf,
                                   dependencies: bigint_dep,
                                   install: false)
endif

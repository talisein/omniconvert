project('omniconvert', ['c'],
        license : 'GPL-2.0-or-later',
        version : '1.1.2-experimental',
        default_options : ['c_std=c17',
                           'buildtype=release',
                           'default_library=static'])

if host_machine.system() == 'windows'
  add_project_arguments('-D_CRT_SECURE_NO_WARNINGS', language: 'c')
endif

subdir('source')

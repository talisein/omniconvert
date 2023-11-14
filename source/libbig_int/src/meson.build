
bigint_src = [
    'basic_funcs.c',
    'bitset_funcs.c',
    'memory_manager.c',
    'modular_arithmetic.c',
    'number_theory.c',
    'service_funcs.c',
    'str_funcs.c',
    'low_level_funcs/add.c',
    'low_level_funcs/and.c',
    'low_level_funcs/andnot.c',
    'low_level_funcs/cmp.c',
    'low_level_funcs/div.c',
    'low_level_funcs/mul.c',
    'low_level_funcs/or.c',
    'low_level_funcs/sqr.c',
    'low_level_funcs/sub.c',
    'low_level_funcs/xor.c',
]

bigint_lib = static_library('bigint', bigint_src,
                            install: false,
                            include_directories: bigint_inc)

bigint_dep = declare_dependency(link_with: bigint_lib,
                                include_directories: bigint_inc)

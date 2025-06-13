import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/uadmin/learning/learn3/learn3_ws/install/demo_py_pkg_2'

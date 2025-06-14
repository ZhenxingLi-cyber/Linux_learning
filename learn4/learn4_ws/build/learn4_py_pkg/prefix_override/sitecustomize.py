import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/uadmin/learning/learn4/learn4_ws/install/learn4_py_pkg'

import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/uadmin/learning/learn5/learn5_ws/install/learn5_service'

from setuptools import find_packages
from setuptools import setup

setup(
    name='learn5_interface',
    version='0.0.0',
    packages=find_packages(
        include=('learn5_interface', 'learn5_interface.*')),
)

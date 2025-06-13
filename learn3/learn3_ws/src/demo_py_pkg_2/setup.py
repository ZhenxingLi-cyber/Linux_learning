from setuptools import find_packages, setup

package_name = 'demo_py_pkg_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='uadmin',
    maintainer_email='3245116726@qq.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'py_node_3=demo_py_pkg_2.py_node:main',
            'motor_node=demo_py_pkg_2.motor_node:main',
            'm3508_node=demo_py_pkg_2.m3508_node:main',
        ],
    },
)

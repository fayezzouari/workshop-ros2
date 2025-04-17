from setuptools import setup

package_name = 'pubsub_demo'

setup(
    name=package_name,
    version='0.0.1',
    packages=[],  # No Python package since pubsub_demo/ is deleted
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your.email@example.com',
    description='ROS 2 pubsub demo package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [],  # Empty since scripts are installed via CMake
    },
)

from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'pubsub_demo'
 
setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
	(os.path.join('share', package_name, 'msg'), glob('msg/*.msg')),
        (os.path.join('share', package_name, 'srv'), glob('srv/*.srv')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fayez',
    maintainer_email='fayez.zouari@insat.ucar.tn',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
		'talker = pubsub_demo.talker:main',
		'listener = pubsub_demo.listener:main',
		'server = pubsub_demo.server:main',
		'client = pubsub_demo.client:main',

        ],
    },
)

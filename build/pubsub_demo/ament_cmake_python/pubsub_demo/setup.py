from setuptools import find_packages
from setuptools import setup

setup(
    name='pubsub_demo',
    version='0.0.1',
    packages=find_packages(
        include=('pubsub_demo', 'pubsub_demo.*')),
)

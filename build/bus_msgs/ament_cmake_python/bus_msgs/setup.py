from setuptools import find_packages
from setuptools import setup

setup(
    name='bus_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('bus_msgs', 'bus_msgs.*')),
)

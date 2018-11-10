from distutils.core import setup

from os.path import join

scripts = [ join( 'bin', filename ) for filename in [ 'nte' ] ]

setup(
    # Application name:
    name="Network Transport Emulator",

    # Version number (initial):
    version="0.1.2",

    # Application author details:
    author="Alex Stancu",
    author_email="alex.stancu@radio.pub.ro",

    # Packages
    packages=["nte"],

    # Include additional files into the package
    #include_package_data=True,

    # Details
    url="https://github.com/Melacon/NTE",

    #
    license="LICENSE",
    description="Network Topology Emulator with OpenYuma NETCONF server, based on ONF information models for Transport Networks",

    # long_description=open("README.txt").read(),

    # Dependent packages (distributions)
    #install_requires=[],
    scripts=scripts,
)
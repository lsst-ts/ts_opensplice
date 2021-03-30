"""Sphinx configuration file for TSSW package"""

from documenteer.conf.pipelinespkg import *

project = "ts_opensplice"
html_theme_options["logotext"] = project
html_title = project
html_short_title = project
doxylink = {}  # Avoid warning: Could not find tag file _doxygen/doxygen.tag
intersphinx_mapping["ts_opensplice"] = ("https://ts-opensplice.lsst.io", None)

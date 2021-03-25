.. py:currentmodule:: lsst.ts.opensplice

.. _lsst.ts.opensplice:

##################
lsst.ts.opensplice
##################


Overview
========

ts_opensplice contains ADLink OpenSplice Community runtime.

.. _lsst.ts.opensplice.user_guide:

User Guide
==========

* Define OSPL_HOME to point to where you have installed <ts_opensplice>/OpenSpliceDDS/V6.9.0/HDE/x86_64.linux
  source $OSPL_HOME/release.com

* Pick an OpenSplice configuration:

    * For SAL components that listen to events from other SAL components:
      use the shared memory configuration, which runs the DDS durability service in a dedicated daemon.
      This is required because the node will have to maintain late-joiner data
      and the single process mode will be overwhelmed by all our DDS data.
      Note that use of shared memory requires the licensed version of OpenSplice.
    * For SAL components that do not listen to events from other SAL components, and for local development:
      you may safely use the single process mode, because no durability service is needed.
      This allows use of the community edition of OpenSplice,
      which is a bit more convenient than the licensed version.

* Set environment variable ``OSPL_URI`` to point to your chosen OpenSplice configuration.
  For example ``file:///home/saluser/repos/ts_opensplice/config/ospl-shmem.xml``.
* Set environment variable ``LSST_DDS_QOS`` to point the QoS file.
  For example: ``file:///home/saluser/repos/ts_opensplice/qos/QoS.xml``.
  Note that ts_sal_ uses this environment variable, but ts_salobj_ calls ``lsst.ts.opensplice.get_qos_path`` instead.

.. _ts_salobj: https://ts-salobj.lsst.io/
.. _ts_sal: https://ts-sal.lsst.io/

Version History
===============

.. toctree::
    version_history
    :maxdepth: 1

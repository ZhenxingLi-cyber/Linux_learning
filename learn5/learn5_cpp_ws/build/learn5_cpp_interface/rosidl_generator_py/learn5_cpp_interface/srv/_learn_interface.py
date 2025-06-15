# generated from rosidl_generator_py/resource/_idl.py.em
# with input from learn5_cpp_interface:srv/LearnInterface.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LearnInterface_Request(type):
    """Metaclass of message 'LearnInterface_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('learn5_cpp_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'learn5_cpp_interface.srv.LearnInterface_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__learn_interface__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__learn_interface__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__learn_interface__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__learn_interface__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__learn_interface__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LearnInterface_Request(metaclass=Metaclass_LearnInterface_Request):
    """Message class 'LearnInterface_Request'."""

    __slots__ = [
        '_x',
    ]

    _fields_and_field_types = {
        'x': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = array.array('f', kwargs.get('x', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x != other.x:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x' array.array() must have the type code of 'f'"
            self._x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'x' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x = array.array('f', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_LearnInterface_Response(type):
    """Metaclass of message 'LearnInterface_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('learn5_cpp_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'learn5_cpp_interface.srv.LearnInterface_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__learn_interface__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__learn_interface__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__learn_interface__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__learn_interface__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__learn_interface__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LearnInterface_Response(metaclass=Metaclass_LearnInterface_Response):
    """Message class 'LearnInterface_Response'."""

    __slots__ = [
        '_l1_norm',
        '_l2_norm',
    ]

    _fields_and_field_types = {
        'l1_norm': 'float',
        'l2_norm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.l1_norm = kwargs.get('l1_norm', float())
        self.l2_norm = kwargs.get('l2_norm', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.l1_norm != other.l1_norm:
            return False
        if self.l2_norm != other.l2_norm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def l1_norm(self):
        """Message field 'l1_norm'."""
        return self._l1_norm

    @l1_norm.setter
    def l1_norm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l1_norm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'l1_norm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._l1_norm = value

    @builtins.property
    def l2_norm(self):
        """Message field 'l2_norm'."""
        return self._l2_norm

    @l2_norm.setter
    def l2_norm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l2_norm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'l2_norm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._l2_norm = value


class Metaclass_LearnInterface(type):
    """Metaclass of service 'LearnInterface'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('learn5_cpp_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'learn5_cpp_interface.srv.LearnInterface')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__learn_interface

            from learn5_cpp_interface.srv import _learn_interface
            if _learn_interface.Metaclass_LearnInterface_Request._TYPE_SUPPORT is None:
                _learn_interface.Metaclass_LearnInterface_Request.__import_type_support__()
            if _learn_interface.Metaclass_LearnInterface_Response._TYPE_SUPPORT is None:
                _learn_interface.Metaclass_LearnInterface_Response.__import_type_support__()


class LearnInterface(metaclass=Metaclass_LearnInterface):
    from learn5_cpp_interface.srv._learn_interface import LearnInterface_Request as Request
    from learn5_cpp_interface.srv._learn_interface import LearnInterface_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from webots_ros/field_get_rotationRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class field_get_rotationRequest(genpy.Message):
  _md5sum = "828947932ebb9e813d3ef918f20f0d81"
  _type = "webots_ros/field_get_rotationRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint64 field
int32 index
"""
  __slots__ = ['field','index']
  _slot_types = ['uint64','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       field,index

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(field_get_rotationRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.field is None:
        self.field = 0
      if self.index is None:
        self.index = 0
    else:
      self.field = 0
      self.index = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_Qi().pack(_x.field, _x.index))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.field, _x.index,) = _get_struct_Qi().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_Qi().pack(_x.field, _x.index))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.field, _x.index,) = _get_struct_Qi().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Qi = None
def _get_struct_Qi():
    global _struct_Qi
    if _struct_Qi is None:
        _struct_Qi = struct.Struct("<Qi")
    return _struct_Qi
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from webots_ros/field_get_rotationResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class field_get_rotationResponse(genpy.Message):
  _md5sum = "eb57f1ee3cba115a75a1a64a523bbed1"
  _type = "webots_ros/field_get_rotationResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Quaternion value


================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['value']
  _slot_types = ['geometry_msgs/Quaternion']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       value

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(field_get_rotationResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.value is None:
        self.value = geometry_msgs.msg.Quaternion()
    else:
      self.value = geometry_msgs.msg.Quaternion()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_4d().pack(_x.value.x, _x.value.y, _x.value.z, _x.value.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.value is None:
        self.value = geometry_msgs.msg.Quaternion()
      end = 0
      _x = self
      start = end
      end += 32
      (_x.value.x, _x.value.y, _x.value.z, _x.value.w,) = _get_struct_4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4d().pack(_x.value.x, _x.value.y, _x.value.z, _x.value.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.value is None:
        self.value = geometry_msgs.msg.Quaternion()
      end = 0
      _x = self
      start = end
      end += 32
      (_x.value.x, _x.value.y, _x.value.z, _x.value.w,) = _get_struct_4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
class field_get_rotation(object):
  _type          = 'webots_ros/field_get_rotation'
  _md5sum = 'ad330bd22eabd1d11d7ec7469e804a11'
  _request_class  = field_get_rotationRequest
  _response_class = field_get_rotationResponse

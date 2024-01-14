;; Auto-generated. Do not edit!


(when (boundp 'take_one::TaskCommand)
  (if (not (find-package "TAKE_ONE"))
    (make-package "TAKE_ONE"))
  (shadow 'TaskCommand (find-package "TAKE_ONE")))
(unless (find-package "TAKE_ONE::TASKCOMMAND")
  (make-package "TAKE_ONE::TASKCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude TaskCommand.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass take_one::TaskCommand
  :super ros::object
  :slots (_header _pushcheck ))

(defmethod take_one::TaskCommand
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:pushcheck __pushcheck) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _pushcheck (round __pushcheck))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:pushcheck
   (&optional __pushcheck)
   (if __pushcheck (setq _pushcheck __pushcheck)) _pushcheck)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _pushcheck
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _pushcheck
       (write-long _pushcheck s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _pushcheck
     (setq _pushcheck (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get take_one::TaskCommand :md5sum-) "3a69b9e8d2483b049e20ebb575958f92")
(setf (get take_one::TaskCommand :datatype-) "take_one/TaskCommand")
(setf (get take_one::TaskCommand :definition-)
      "std_msgs/Header header

int32 pushcheck

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :take_one/TaskCommand "3a69b9e8d2483b049e20ebb575958f92")



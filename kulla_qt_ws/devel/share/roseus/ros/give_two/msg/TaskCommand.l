;; Auto-generated. Do not edit!


(when (boundp 'give_two::TaskCommand)
  (if (not (find-package "GIVE_TWO"))
    (make-package "GIVE_TWO"))
  (shadow 'TaskCommand (find-package "GIVE_TWO")))
(unless (find-package "GIVE_TWO::TASKCOMMAND")
  (make-package "GIVE_TWO::TASKCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude TaskCommand.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass give_two::TaskCommand
  :super ros::object
  :slots (_header _pushcheck ))

(defmethod give_two::TaskCommand
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

(setf (get give_two::TaskCommand :md5sum-) "3a69b9e8d2483b049e20ebb575958f92")
(setf (get give_two::TaskCommand :datatype-) "give_two/TaskCommand")
(setf (get give_two::TaskCommand :definition-)
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



(provide :give_two/TaskCommand "3a69b9e8d2483b049e20ebb575958f92")



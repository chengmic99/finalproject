;; Auto-generated. Do not edit!


(when (boundp 'hark_msgs::HarkSrcWave)
  (if (not (find-package "HARK_MSGS"))
    (make-package "HARK_MSGS"))
  (shadow 'HarkSrcWave (find-package "HARK_MSGS")))
(unless (find-package "HARK_MSGS::HARKSRCWAVE")
  (make-package "HARK_MSGS::HARKSRCWAVE"))

(in-package "ROS")
;;//! \htmlinclude HarkSrcWave.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass hark_msgs::HarkSrcWave
  :super ros::object
  :slots (_header _count _exist_src_num _src ))

(defmethod hark_msgs::HarkSrcWave
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:count __count) 0)
    ((:exist_src_num __exist_src_num) 0)
    ((:src __src) (let (r) (dotimes (i 0) (push (instance hark_msgs::HarkSrcWaveVal :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _count (round __count))
   (setq _exist_src_num (round __exist_src_num))
   (setq _src __src)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:exist_src_num
   (&optional __exist_src_num)
   (if __exist_src_num (setq _exist_src_num __exist_src_num)) _exist_src_num)
  (:src
   (&rest __src)
   (if (keywordp (car __src))
       (send* _src __src)
     (progn
       (if __src (setq _src (car __src)))
       _src)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _count
    4
    ;; int32 _exist_src_num
    4
    ;; hark_msgs/HarkSrcWaveVal[] _src
    (apply #'+ (send-all _src :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _count
       (write-long _count s)
     ;; int32 _exist_src_num
       (write-long _exist_src_num s)
     ;; hark_msgs/HarkSrcWaveVal[] _src
     (write-long (length _src) s)
     (dolist (elem _src)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _count
     (setq _count (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _exist_src_num
     (setq _exist_src_num (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; hark_msgs/HarkSrcWaveVal[] _src
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _src (let (r) (dotimes (i n) (push (instance hark_msgs::HarkSrcWaveVal :init) r)) r))
     (dolist (elem- _src)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get hark_msgs::HarkSrcWave :md5sum-) "fe343f127b243f0d55a5041b50cff0b2")
(setf (get hark_msgs::HarkSrcWave :datatype-) "hark_msgs/HarkSrcWave")
(setf (get hark_msgs::HarkSrcWave :definition-)
      "Header header
int32 count
int32 exist_src_num
HarkSrcWaveVal[] src # Audio stream and source info of each source

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
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: hark_msgs/HarkSrcWaveVal
int32 id
float32 power
float32 x
float32 y
float32 z
float32 azimuth
float32 elevation
int32 length
int32 data_bytes
float32[] wavedata

")



(provide :hark_msgs/HarkSrcWave "fe343f127b243f0d55a5041b50cff0b2")



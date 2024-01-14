
(cl:in-package :asdf)

(defsystem "give_two-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Task" :depends-on ("_package_Task"))
    (:file "_package_Task" :depends-on ("_package"))
    (:file "TaskCommand" :depends-on ("_package_TaskCommand"))
    (:file "_package_TaskCommand" :depends-on ("_package"))
  ))
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from pubsub_demo.srv import CustomService

class ServiceServer(Node):
    def __init__(self):
        super().__init__('server')
        self.srv = self.create_service(CustomService, 'custom_service', self.callback)

    def callback(self, request, response):
        response.response = f"Got name: {request.request.name}, count: {request.request.count}"
        self.get_logger().info(f"Request: {request.request.name}, {request.request.count}")
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ServiceServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

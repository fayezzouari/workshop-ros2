#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from pubsub_demo.srv import CustomService

class ServiceClient(Node):
    def __init__(self):
        super().__init__('client')
        self.client = self.create_client(CustomService, 'custom_service')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')

    def send_request(self, name, count):
        req = CustomService.Request()
        req.request.name = name
        req.request.count = count
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    node = ServiceClient()
    result = node.send_request('Python Workshop', 100)
    node.get_logger().info(f'Response: {result.response}')
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

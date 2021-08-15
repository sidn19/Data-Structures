class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self,data):
        if data not in self.queue:
            self.queue.append(data)
            return True
        else:
            return False

    def dequeue(self):
        if len(self.queue) > 0:
            return self.queue.pop(0)
        return "Ele can not be dequeued"

    def size(self):
        return len(self.queue)

    def print_queue(self):
        print(self.queue)


q = Queue()

print(q.enqueue(10))

print(q.enqueue(20))
print(q.enqueue(30))

print(q.size())

q.print_queue()

print(q.dequeue())

q.print_queue()

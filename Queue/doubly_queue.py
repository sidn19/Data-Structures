import collections

data = [10,20,30,40]

d_queue = collections.deque(data)

d_queue.append(50)

print(d_queue)

d_queue.appendleft(60)

print(d_queue)

d_queue.pop()

d_queue.popleft()

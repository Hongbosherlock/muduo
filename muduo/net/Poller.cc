// Copyright 2010, Shuo Chen.  All rights reserved.
// http://code.google.com/p/muduo/
//
// Use of this source code is governed by a BSD-style license
// that can be found in the License file.

// Author: Shuo Chen (chenshuo at chenshuo dot com)

#include <muduo/net/Poller.h>
#include <muduo/net/EventLoop.h>

using namespace muduo;
using namespace muduo::net;

Poller::Poller(EventLoop* loop)
  : loop_(loop)
{
}

Poller::~Poller()
{
}

void Poller::assertInLoopThread()
{
  loop_->assertInLoopThread();
}
